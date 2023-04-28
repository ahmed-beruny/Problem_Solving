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

void solve(){
    int n;  cin >> n;

    vector<int> a(n);
    for(int i = 0;i<n;i++)cin >> a[i];

    vector<int> mx(n),mn(n);

    for(int i = 0;i<n;i++){
        if(i==0)mx[i] = a[i];
        else{
            mx[i] = max(mx[i-1],a[i]);
        }
    }
    for(int i = n-1;i>=0;i--){
        if(i==n-1)mn[i]=a[i];
        else{
            mn[i] = min(mn[i+1],a[i]);
        }
    }

    int cnt = 0;
    if(a[0]<mn[1])cnt++;
    if(a[n-1]>mx[n-2])cnt++;

    for(int i = 1;i<n-1;i++){
        if(a[i]<mn[i+1] and a[i]>mx[i-1])cnt++;
    }

    //dbug(cnt);

    int ans = 1;
    int c = cnt;
    while(cnt--){
        ans = (ans*2)%mod;
    }

    if(c == n)
        cout << ans-1 << endl;
    else{
        cout << ans << endl;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}