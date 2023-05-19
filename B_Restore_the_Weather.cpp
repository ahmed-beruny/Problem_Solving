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
    int n,k;    cin >> n >> k;

    vector<pair<int,int>> a(n),b(n);

    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        a[i] = {val,i};
    }
    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        b[i] = {val,i};
    }
    sort(a.begin(),a.end());   
    sort(b.begin(),b.end());

    vector<int> ans(n);

    for(int i = 0;i<n;i++){
        ans[a[i].second] = b[i].first;
    }  

    _print(ans);


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}