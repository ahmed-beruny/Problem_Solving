#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _input(x) for(auto &it:x)cin >> it
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

int len(int x){
    int cnt = 0;
    while(x){
        cnt++;
        x/=10;
    }
    return cnt;
}

unordered_map<int,int> dp;

int recurr(int n,int x){
    if(len(x)>=n)return 0;

    if(dp.find(x) != dp.end())return dp[x];

    int val = x;

    int ans = INT_MAX;
    while(val){
        int rem = val%10;
        val/=10;
        if(rem>1){
            ans = min(ans,recurr(n,x*rem)+1);
        }
    }

    return dp[x] = ans;

}

void solve(){
    int n,x;    cin >> n >> x;



    int ans = recurr(n,x);

    if(ans>=INT_MAX){
        cout << -1 << endl;
    }
    else cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}