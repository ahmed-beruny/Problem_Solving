#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    int odd = 0;
    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        if(val%2)odd++;
    }

    if(odd%2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}