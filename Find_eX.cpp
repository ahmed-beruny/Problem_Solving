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
    int a,b,c,d;    cin >> a >> b >> c >> d;

    if((a+1)%b == (c+1)%d){
        cout << 1 << endl;
        return;
    }

    int l = a/b + 1, r = c/d + 1;

    if(b<d){
        swap(a,c);
        swap(b,d);
    }

    for(int i = (a/b)+1;;i++){
        int ans = b*i - a;

        if((c+ans)%d == 0){
            cout << ans << endl;
            return;
        }
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}