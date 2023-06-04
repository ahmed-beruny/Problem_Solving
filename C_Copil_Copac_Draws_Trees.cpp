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
     
    vector<vector<int>> g;

    unordered_map<int,int> appears,last;
     
    int ans;

    int depth = 0;

    int l_node;
     
    void dfs(int curr,int parr,int dep){
        if(dep>depth){
            l_node = 
        }
        for(auto it:g[curr])if(it!=parr){
            
            dfs(it,curr,dep+1);
        }
    }
     
    void solve(){
        int n;  cin >> n;
        
        g.resize(n+1);
     
        g.clear();
        appears.clear();
        
        ans = 1;
        for(int i = 1;i<n;i++){
            int u,v;    cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);

        }

     
        dfs(1,-1,0);
     
        cout << ans << endl;
     
    }
     
    int32_t main(){
        fastio;
        int t=1;  cin >> t;
        while(t--)solve();
     
        return 0;
    }