#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;

int n;
vector<vector<int>> g;
vector<int> nodes,subans,ans;

void dfs(int curr,int parr){

    int cnt = 1;
    int ans_cnt = 0;
    for(auto child : g[curr])if(child != parr){
        dfs(child,curr);
        cnt+=nodes[child];
        ans_cnt += (subans[child]+nodes[child]);
    }
    nodes[curr] = cnt;
    subans[curr] = ans_cnt;

}

void dfs2(int curr,int parr){
    if(parr == -1){
        ans[curr] = subans[curr];
    }
    else{
        ans[curr] = ans[parr] + n - 2 * nodes[curr];
    }

    for(auto child : g[curr])if(child != parr){
        dfs2(child,curr);
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    g.resize(n+1);
    for(int i = 0;i<n-1;i++){
        int u,v;    cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    nodes.resize(n+1);
    subans.resize(n+1);
    ans.resize(n+1);

    dfs(1,-1);

    dfs2(1,-1);
    ans.erase(ans.begin());
    _print(ans);

    return 0;
}