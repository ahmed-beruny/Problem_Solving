#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    string s; cin >> s;
    ll ans = 0;
    for(int i = 0;i<n;i++){
        if(i == 0){
            ans++;
            continue;
        }

        if(s[i] == s[i-1]){
            ans++;
            continue;
        }

        ans+= (i+1);
    }

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}