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

    for(int i = 0;i<n;i++)cin >> a[i];

    int ans = 0;
    int cnt = 0;
    if(a[0] == 0){
        cnt = 1;
        ans = 1;
    }

    for(int i = 1;i<n;i++){
        if(a[i] == 0){
            cnt++;
            ans = max(ans,cnt);
        }
        else if(a[i] == 1){
            cnt = 0;
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