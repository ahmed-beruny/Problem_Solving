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
    int n,t;    cin >> n >> t;

    vector<int> a(n),b(n);

    for(int i = 0;i<n;i++)cin >> a[i];
    for(int i = 0;i<n;i++)cin >> b[i];

    for(int i = 0;i<n;i++){
        a[i] += i;
    }
    int val = 0;
    int ans = -1;
    for(int i = 0;i<n;i++){
        if(a[i]<=t and b[i]>val){
            ans = i+1;
            val = b[i];
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