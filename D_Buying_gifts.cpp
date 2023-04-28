#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;
int dp[500001][2];
vector<pair<int,int>> a;

int recurr(int n,int select){
    if(n==0)return 0;

    if(dp[n][select] != -1)return dp[n][select];

    if(select == 0){
        int v1 = recurr(n-1,0) - a[n-1].first;
        int v2 = recurr(n-1,1) - a[n-1].first;
 
        if(abs(v1)<abs(v2)){
            return dp[n][select] = recurr(n-1,0) - a[n-1].first;
        }
        else{
            return dp[n][select] = recurr(n-1,1) - a[n-1].first;
        }
    }

    if(select == 1){
        
    }


}

void solve(){
    int n;  cin >> n;
    for(int i = 0;i<=n;i++)dp[i] = -1;
    for(int i = 0;i<n;i++){
        int x,y;    cin >> x >> y;
        a[i] = {x,y};
    }

    cout << recurr(n,)
    

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}