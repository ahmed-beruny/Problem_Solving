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
    int mn = INT_MAX;

    vector<int> odd,even;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        mn = min(mn,a[i]);

        if(a[i]%2)odd.pb(a[i]);
        else even.pb(a[i]);
    }

    if(odd.size() == 0 or even.size() == 0){
        cout << "YES" << endl;
        return;
    }

    if(mn%2){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}