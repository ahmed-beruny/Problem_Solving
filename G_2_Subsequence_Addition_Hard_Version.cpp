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

    sort(a.begin(),a.end());

    vector<int> pre_sum(n);
    pre_sum[0] = a[0];

    for(int i = 1;i<n;i++){
        pre_sum[i] = pre_sum[i-1] + a[i];
    }

    if(a[0] != 1){
        cout << "NO" << endl;
        return;
    }

    for(int i = 1;i<n;i++){
        if(a[i] > pre_sum[i-1]){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}