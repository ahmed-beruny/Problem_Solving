#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int n,q;    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());

    vector<int> suffix_sum(n);
    suffix_sum[0] = a[0];
    for(int i = 1;i<n;i++){
        suffix_sum[i] = suffix_sum[i-1] + a[i];
    }

    while(q--){
        int x,y;    cin >> x >> y;
        int c = x-y;
        if(c!=0)
            cout << suffix_sum[x-1] - suffix_sum[c-1] << endl;
        else cout << suffix_sum[x-1] << endl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}