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
    
    int sum = 0;
    int mn = INT_MAX;

    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        sum += val;
        mn = min(val,mn);
    }

    if(n%2==1){
        if(sum%2 == 1){
            cout << "CHEF" << endl;
        }
        else{
            cout << "CHEFINA" << endl;
        }
    }
    else{
        int extra = sum - mn*n;

        if(extra%2==0){
            cout << "CHEF" << endl;
        }
        else cout << "CHEFINA" << endl;
    }


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}