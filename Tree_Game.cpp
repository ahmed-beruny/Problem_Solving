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

int n,A,B;
vector<vector<int>> tree;
vector<int> p;

int dfs(int curr1,int parr1,int curr2,int parr2,int depth){
    int populationA = 0;
    for(auto it:tree[curr1])if(it != parr1){
        populationA = 
    }

    for(auto it:tree[curr2])if(it!=parr2){
        
    }
}

void solve(){
    cin >> n >> A >> B;
    p.resize(n+1);
    for(int i = 1;i<=n;i++){
        cin >> p[i];
    }
    tree.resize(n+1);

    for(int i = 0;i<n-1;i++){
        int u,v;    cin >> u >> v;
        tree[u].pb(v);
        tree[v].pb(u);
    }

    cout << dfs(A,-1,B,-1,0) << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}