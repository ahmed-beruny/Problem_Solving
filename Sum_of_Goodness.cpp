#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

vector<int> dp_power(1e6,-1);

int power(int r){
    if(r == 0)return 1;
    if(dp_power[r] != -1)return dp_power[r];

    return dp_power[r] = (2*power(r-1))%mod;
}

vector<ll>dp_fact(1e6,-1);
ll fact(ll n){
    if(dp_fact[n]!=-1)return dp_fact[n];
    if(n == 1)return 1;
    return dp_fact[n] = ((n%mod)*fact(n-1)) % mod;
}
ll modexp(ll a, ll b = mod-2){
  if(b == 0)return 1;
  if(b%2==0){
    return(modexp((a%mod * a%mod)%mod,b/2))%mod;
  }
  else
    return (a%mod * modexp(a,b-1))%mod;
}

ll nCr(ll n, ll r){
    if(n==r or r==0)return 1;
    else if(r>n or r<0)return -1;
    ll div = (fact(n-r)*fact(r))%mod;
    return (fact(n)*modexp(div))%mod;
}

void solve(){
    int n;  cin >> n;
    vector<int> a(n);

    for(auto& it:a)cin >> it;

    sort(a.begin(),a.end());
    int ans = 0;
    for(int i = 0;i<n;i++){
        int ln = a[i] - 1;
        if(i<ln)continue;

        ans = (ans+(nCr(i,ln)*power(n-i-1))) % mod;
    }

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}