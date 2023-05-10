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
vector<vector<int>> a;
int n,m;

int volume = 0;

void dfs(int x,int y){
    if(x >=0 and y >= 0 and x<n and y < m and a[x][y] > 0){

        volume += a[x][y];
        a[x][y] = -1;

        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y+1);
        dfs(x,y-1);
        

    }
}

void solve(){
    cin >> n >> m;

    a.assign(n,vector<int>(m,0));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j] > 0){
                volume = 0;
                dfs(i,j);
                ans = max(ans,volume);
            }
        }
    }

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}