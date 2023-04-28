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
    vector<int> a,b;

    for(int i = 0;i<n;i++){
        int val;   cin >> val;

        if(val >= 0)a.pb(val);
        else b.pb(val);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    n = a.size();

    int ans = 0;

    if(a.size() == 1 and b.size() == 1){
        ans = a[0]*b[0];
    }

    if(n>1){
        ans = max(ans,a[n-1]*a[n-2]);
    }

    if(b.size()>1){
        ans = max(ans,b[0]*b[1]);
    }

    cout << ans << endl;



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}