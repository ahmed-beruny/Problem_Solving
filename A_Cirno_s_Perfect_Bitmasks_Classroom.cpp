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
    int x;  cin >> x;

    if(x == 1){
        cout << 3 << endl;
        return;
    }

    if(CheckBit(x,0)){
        cout << 1 << endl;
        return;
    }

    int y;

    if(__builtin_popcountll(x) == 1){
        y = 1;
    }
    else y = 0;

    for(int i = 1;i<55;i++){
        if(CheckBit(x,i)){
            SetBit(y,i);
            break;
        }
    }

    cout << y << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}