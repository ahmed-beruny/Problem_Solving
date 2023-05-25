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

int bfs(int src,int n){
    queue<pair<int,int>> q;
    q.push(make_pair(src,0));
    vector<bool> vis(n+1,false);
    //vector<int> par(n+1,0);
    //par[1] = -1;
    vis[src] = true;
    int distance = 0;
    int n1 = 1;
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        int node = curr.first;
        int dist = curr.second;
        if(dist>distance){
            distance = dist;
            n1 = node;
        }
        for(auto child:g[node])if(!vis[child]){
            vis[child] = true;
            q.push(make_pair(child,dist+1));
            //par[child] = node;
        }
    }
    return distance;
}

void solve(){
  vector<int> a = {1,2,3,4,5,6,7};

    if()

}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}