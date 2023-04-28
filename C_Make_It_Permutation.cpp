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

void solve(){
    int n,c,d;  cin >> n >> c >> d;
    vector<int> a(n);
    map<int,int> m;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    int ans = 1e17;

    sort(a.begin(),a.end());
    //_print(a);

    
    map<int,int> dp;
    for(int i = 0;i<n;i++){
        int extra = (n-i-1);
        if(i!=0){
            if(a[i] == a[i-1]){
                dp[a[i]] += c;
                continue;
            }
        }

        if(i == 0 and a[i] == 1){
            ans = min(ans,dp[a[i]]+extra*c);
            continue;
        }
        if(i == 0 and a[i] != 1){
            dp[a[i]] = (a[i]-1)*d;
            ans = min(ans,dp[a[i]]+extra*c);
            continue; 
        }


        dp[a[i]] = dp[a[i-1]] + (d*(a[i]-a[i-1]-1));
        
        ans = min(ans,dp[a[i]]+extra*c);

    }

    if(a[0] != 1){
        ans = min(c*n + d,ans);
    }

    cout << ans << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}