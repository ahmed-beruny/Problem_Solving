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


ll modexp(ll a, ll b){
  if(b == 0)return 1;
  return (b%2 == 0) ? (modexp((a * a)%mod,b/2))%mod : (a * modexp(a,b-1))%mod;
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
            mul = (mul * modexp(m[a[i]-k],mod-2))%mod;
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