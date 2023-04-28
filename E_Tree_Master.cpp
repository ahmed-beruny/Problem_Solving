#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

vector<int> parrent;
vector<ll> weight;

//map<pair<int,int>,ll> dp;
vector<unordered_map<int,ll>> dp;


ll recurr(int x,int y){

	if(x>y)swap(x,y);

    if(dp[x].find(y) != dp[x].end())return dp[x].find(y)->second;

    if(x == 0 or y == 0){
        return 0;
    }
    ll val = weight[x]*weight[y] + recurr(parrent[x],parrent[y]);
    dp[x][y] = val;
    return val;
}


int32_t main(){
    fastio;

    int n,q;    cin >> n >> q;
    dp.resize(n+1);
    weight.resize(n+1);

    for(int i = 1;i<=n;i++){
        cin >> weight[i];
    }
    parrent.resize(n+1);
    parrent[1] = 0;

    for(int i = 2;i<=n;i++){
        int parr;   cin >> parr;
        parrent[i] = parr;
    }

    while(q--){
        int x,y;    cin >> x >> y;
        ll ans = 0;
        for(int i = 0;i<1000;i++){
            if(x == 0 or y == 0)break;

            ans += (weight[x]*weight[y]);

            x = parrent[x];
            y = parrent[y];
        }

        cout << ans + recurr(x,y) << endl;
    }


    return 0;
}