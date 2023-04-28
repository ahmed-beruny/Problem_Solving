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
    string s;   cin >> s;

    int pos = 0;

    char mn = 'z';

    for(int i = 0;i<n;i++){
        if(s[i] <= mn){
            pos = i;
            mn = s[i];
        }
    }
    if(pos == 0){
        cout << s << endl;
        return;
    }

    s = s[pos] + s;

    s.erase(pos+1,1);

    cout << s << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}