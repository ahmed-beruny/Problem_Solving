#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

const int N = 222222;
const int K = 22;
ll dp[222222][22][3];

void solve(){
    int n,k,x;  cin >> n >> k >> x;
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin >> a[i];
    //vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(k+1,vector<int>(3,0)));

    //dbug(dp.size());

    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=k;j++){
            for(int t = 0;t<3;t++){
                dp[i][j][t] = -1e18;
            }
        }
    }
    dp[0][0][0] = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<=k;j++){
            for(int t = 0;t<3;t++){
                for(int jj = j;jj>=max(j-1,0);jj--){
                    int add = a[i-1]+(j==jj ? -x:x);

                    for(int tt = t;tt>=0;tt--){
                        dp[i][j][t] = max(dp[i][j][t],dp[i-1][jj][tt] + (t==1 ? add:0));
                    }
                }
            }
        }
    }

    cout << max(dp[n][k][1],dp[n][k][2]) << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}