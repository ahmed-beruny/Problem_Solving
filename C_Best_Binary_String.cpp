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
    int zero = 0;
    int one = 0;

    if(s[0] == '0')zero = 1;
    else if(s[0] == '1')one = 1;

    int pos = 0;
    char x = '0';
    for(int i = 0;i<s.size();i++){
        if(s[i] == '?'){
            s[i] = x;
        }
        else x = s[i];
    }



    cout << s << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}