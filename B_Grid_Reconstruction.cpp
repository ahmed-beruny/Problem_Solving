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
    vector<int> top(n);
    int val = 2*n;
    for(int i = 0;i<n;i+=2){
        top[i] = val;
        val-=2;
    }

    val = 2;
    for(int i = 1;i<n;i+=2){
        top[i] = val;
        val+=2;
    }

    vector<int> bottom(n);
    val = 1;
    for(int i = 0;i<n;i+=2){
        bottom[i] = val;
        val+=2;
    }

    for(int i = 1;i<n;i+=2){
        bottom[i] = val;
        val+=2;
    }

    _print(top);
    _print(bottom);

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}