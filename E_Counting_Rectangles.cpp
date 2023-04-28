#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;
void solve(){
    int n,q;    cin >> n >> q;
    vector<vector<int>> area(1001,vector<int>(1001,0));

    for(int i = 0;i<n;i++){
        int a,b;    cin >> a >> b;
        area[a][b] += (a*b);
    }

    //int prefix_sum[1001][1001];
    vector<vector<int>> prefix_sum(1001,vector<int>(1001,0));


    for(int i = 1;i<=1000;i++){
        for(int j = 1;j<=1000;j++){
            prefix_sum[i][j] = prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1] + area[i][j];
        }
    }

    while(q--){
        int a,b,x,y;    cin >> a >> b >> x >> y;

        x--;y--;
        cout << prefix_sum[x][y] - prefix_sum[x][b] - prefix_sum[a][y] + prefix_sum[a][b] << endl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}