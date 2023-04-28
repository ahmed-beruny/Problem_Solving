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
    int a,b,c,d;    cin >> a >> b >> c >> d;
    if(d<b){
        cout << -1 << endl;
        return;
    }

    int ans = 0;
    ans += d-b;

    int val = d-b;

    a += val;

    if(a<c){
        cout << -1 << endl;
        return;
    }

    cout << ans + a-c << endl;
    

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}