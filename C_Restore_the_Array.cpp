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

    vector<int> a(n-1);

    vector<int> ans(n);

    for(int i = 0;i<n-1;i++){
        cin >> a[i];
    }

    ans[0] = a[0];
    ans[n-1] = a[n-2];

    for(int i = 1;i<n-1;i++){
        ans[i] = min(a[i-1],a[i]);
    }
    _print(ans);

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}