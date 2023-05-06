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
    int n;  cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int ans = abs(a[0] - a[n-1]);
    bool zero = true;
    for(int i = 0,j=n-1;i<=j;i++,j--){
        if(abs(a[i] - a[j]) != 0)zero = false;
        if(a[i] == a[j])continue;
        ans = __gcd(ans,abs(a[i] - a[j]));
    }

    if(zero){
        cout << 0 << endl;
        return;
    }

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}