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
const long long mod = 998244353;

int power(int a,int n){
    int ans = 1;
    while(n--)ans = (ans*a)%mod;
    return ans;
}


int modexp(int a, int b = mod-2){
  if(b == 0)return 1;
  if(b%2==0){
    return(modexp((a%mod * a%mod)%mod,b/2))%mod;
  }
  else
    return (a%mod * modexp(a,b-1))%mod;
}


void solve(){
    int n;  cin >> n;
    string a,b; cin >> a >> b;

    int x = 0;
    for(int i = 0;i<n;i++){
        if(a[i] != b[i])x++;
    }

    vector<int> dp(x+1);

    dp[1] = power(2,n) - 1;

    for(int i = 2;i<=x;i++){
        dp[i] = ((((n*dp[i-1])%mod - n - ((i-1)*dp[i-2])%mod + mod)%mod) * modexp(n-i+1)) % mod;
    }

    cout << dp[x] << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}