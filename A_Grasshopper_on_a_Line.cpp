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

    
    if(n%k==0){
        cout << 2 << endl;
        if(n>0){
            cout << n-1 << " "<< 1 << endl;
        }
        else{
            cout << n+1 << " "<< -1 << endl;

        }
    }
    else{
        cout << 1 << endl;
        cout << n << endl;
    }



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}