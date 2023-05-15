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
    vector<int> a(n),b(n);

    for(int i = 0;i<n;i++)cin >> a[i];
    for(int i = 0;i<n;i++)cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans = 1;

    for(int i = 0;i<n;i++){
        int val = a[i];

        int idx = lower_bound(b.begin(),b.end(),val) - b.begin();

        if(idx == 0){
            ans = 0;
            break;
        }

        //cout << idx << " ";

        if(idx-i <= 0){
            ans = 0;
            break;
        }

        ans = (ans * (idx - i))%mod;
    }

    //cout << endl;

    if(ans < 0) ans = 0;

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}