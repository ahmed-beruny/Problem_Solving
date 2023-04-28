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
    map<char,int> m;
    for(auto it:s)m[it]++;

    bool three = false;
    bool four = false;

    for(auto it:s){
        if(m[it] == 4){
            four = true;
            break;
        }
        if(m[it] == 3){
            three = true;
            break;
        }
    }

    if(four){
        cout << -1 << endl;
        return;
    }
    if(three){
        cout << 6 << endl;
        return;
    }
    cout << 4 << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}