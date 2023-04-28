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
    string s;   cin >> s;

    int q = 0;
    for(auto it:s){
        if(it=='?')q++;
    }

    if(s[0] == '0'){
        cout << 0 << endl;
        return;
    }

    if(s[0] == '?'){
        cout << pow(10,(q-1)) *9 << endl;
        return;
    }

    else{
        cout << pow(10,q) << endl;
        return;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}