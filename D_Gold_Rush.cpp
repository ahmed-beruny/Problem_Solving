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


bool possible(int n,int m){
    if(n == m)return true;

    if(n%3 != 0)return false;

    int div = n/3;

    if(div<m){
        return possible(div*2,m);
    }
    else {
        return possible(div*2,m) or possible(div,m);
    }
}

void solve(){
    int n,m;    cin >> n >> m;

    if(possible(n,m)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}