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
    int n,m;    cin >> n >> m;
    vector<int> b;
    vector<vector<int>> a(n);
    for(int i = 0;i<n;i++){
        int s = 0;
        for(int j = 0;j<m;j++){
            int val;    cin >> val;
            s+= val;
            a[i].pb(val);
        }
        b.pb(s);
    }

    

    int ans = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            ans += abs(b[i]-b[j]);
        }
    }

    for(int i = 0;i<n;i++){
        for(int i = 0;j<m;j++){

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