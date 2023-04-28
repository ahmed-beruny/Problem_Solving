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
    int n,m;    cin >> n >> m;
    

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int val;    cin >> val;
            if(val == 0){
                cout << '.';
            }
            else{
                char x = 'A'+(val-1);
                cout << x;
            }
        }
        cout << endl;
    }



}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}