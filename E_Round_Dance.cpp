#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

vector<vector<int>> g;
vector<bool> vis;
int mn,mx;

void dfs(int curr,int parr){
    vis[curr] = true;
    for(auto it:g[curr])if(it!=parr){
        if(!vis[it])
            dfs(it,curr);
        else mn++;
    }
}

void solve(){
    int n;  cin >> n;
    g.resize(n+1);
    vis.assign(n+1,false);

    for(int i = 1;i<=n;i++){
        int val;    cin >> val;
        g[i].pb(val);
        g[val].pb(i);
    }

    mn = 0;
    mx = 0;

    for(int i = 1;i<=n;i++){
        if(!vis[i]){
            mx++;
            dfs(i,-1);
        }
    }

    cout << mn << " " << mx << endl;

    

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}