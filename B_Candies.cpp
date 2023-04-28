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

    if(n%2 == 0){
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    while(n>1){
        int val1 = (n-1)/2;
        int val2 = (n+1)/2;

        if(val1%2 == 1){n=val1;ans.pb(2);}
        else{ n = val2;ans.pb(1);}
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() << endl;
    _print(ans);


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;

    while(t--)solve();

    return 0;
}