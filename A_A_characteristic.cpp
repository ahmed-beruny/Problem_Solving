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
    int n,a;
    cin >> n >> a;

    for(int i = 0;i<=n;i++){
        int x = i,y=n-i;

        if((x*(x-1))/2 + (y*(y-1))/2 == a){
            cout << "YES" << endl;
            while(x--)cout << 1 << " ";
            while(y--)cout << -1 << " ";

            cout << endl;
            return;
        }
    }

    cout << "NO" << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}