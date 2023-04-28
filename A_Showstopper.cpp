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

    int mn = min(a[n-1],b[n-1]);
    int mx = max(a[n-1],b[n-1]);

    for(int i = 0;i<n-1;i++){
        int mnn = min(a[i],b[i]);
        int mxx = max(a[i],b[i]);
        if(mnn>mn or mxx>mx){
            cout << "No" << endl;
            return;
        }
    }   
    cout << "Yes" << endl;
}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}