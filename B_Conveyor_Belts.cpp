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
    int n,a,b,c,d;  cin >> n >> a >> b >> c >> d;

    a = min(a,n-a+1);
    b = min(b,n-b+1);
    c = min(c,n-c+1);
    d = min(d,n-d+1);

    int x = min(a,b);
    int y = min(c,d);

    cout << abs(x-y) << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}