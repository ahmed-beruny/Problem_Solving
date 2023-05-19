#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;


ll modexp(ll a, ll b = mod-2){
  if(b == 0)return 1;
  if(b%2==0){
    return(modexp((a%mod * a%mod)%mod,b/2))%mod;
  }
  else
    return (a%mod * modexp(a,b-1))%mod;
}


void solve(){
    int n,k;  cin >> n >> k;
    int mn = INT_MAX;
    int mx = 0;
    unordered_map<int,int> m;
    vector<int> a;

    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        a.pb(val);
        m[val]++;
        mn = min(mn,val);
        mx = max(mx,val);
    }
    if(k == 1){
        cout << n << endl;
        return;
    }
    sort(a.begin(),a.end());
    int cnt = 0;

    ll mul = 1;

    ll ans = 0;

    // int l = mn,r=mn;
    // for(int i = mn;i<=mx;i++){
    //     if(m.find(i) == m.end()){
    //         cnt = 0;
    //         mul = 1;
    //     }
    //     else{
    //         cnt++;
    //         mul = (mul*m[i])%mod;
    //     }

    //     if(cnt == k){
    //         ans = (ans+mul)%mod;
    //     }
    //     if(cnt>k){
    //         mul = (mul* modexp(m[i-k]))%mod;
    //         cnt--;

    //         ans = (ans+mul)%mod;
    //     }
    // }

    for(int i = 0;i<n;i++){
        if(i == 0){
            mul = m[a[i]];
            cnt++;
            continue;
        }

        if(a[i] == a[i-1])continue;

        if(a[i] == a[i-1]+1){
            mul = (mul*m[a[i]])%mod;
            cnt++;
        }
        else{
            mul = m[a[i]];
            cnt = 1;
        }

        if(cnt == k){
            ans = (ans+mul)%mod;
        }
        if(cnt>k){
            mul = (mul * modexp(m[a[i]-k]))%mod;
            cnt--;
            ans = (ans+mul)%mod;
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