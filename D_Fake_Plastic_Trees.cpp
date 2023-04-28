#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

vector<vector<int>> g;
vector<int> values;
vector<pair<int,int>> limits;
int ans;

void dfs(int curr,int parr){
    int val = 0;
    for(auto child:g[curr])if(child != parr){
        dfs(child,curr);
        val += values[child];
    }
    if(val == -1){
        ans++;
        values[curr] = limits[curr].second;
    }
    else if(val < limits[curr].first){
        ans++;
        values[curr] = limits[curr].second;
    }
    else{
        values[curr] = min(val,limits[curr].second);
    }
}

void solve(){
    int n;  cin >> n;
    g.clear();
    values.clear();
    limits.clear();
    g.resize(n+1);
    values.resize(n+1);
    ans = 0;

    for(int i = 2;i<=n;i++){
        int val;    cin >> val;
        g[i].push_back(val);
        g[val].push_back(i);
    }

    limits.resize(n+1);
    for(int i = 1;i<=n;i++){
        int a,b;    cin >> a >> b;
        limits[i] = {a,b};
    }

    dfs(1,-1);

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}