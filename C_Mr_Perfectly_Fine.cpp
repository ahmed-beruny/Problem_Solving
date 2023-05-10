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
    int m1 = INT_MAX,m2=INT_MAX,mb=INT_MAX;
    for(int i = 0;i<n;i++){
        int t;  cin >> t;
        string s;   cin >> s;
        if(s == "10")m1 = min(m1,t);
        else if(s == "01")m2 = min(m2,t);
        else if(s == "11")mb = min(mb,t);
        
    }

    int ans = m1 + m2;

    ans = min(ans,mb);

    if(ans >= INT_MAX){
        cout << -1 << endl;
        return;
    }

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}