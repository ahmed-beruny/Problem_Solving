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

    if(s=="^"){
        cout << 1 << endl;
        return;
    }

    if(s=="_"){
        cout << 2 << endl;
        return;
    }

    int cnt = 0;
    for(int i = 0;i<s.size();i++){
        if(i == 0 and s[i] == '_'){
            cnt++;
            continue;
        }

        if(s[i] == '_' and s[i] == s[i-1]){
            cnt++;
        }

    }
    if(s[s.size()-1] == '_')cnt++;

    cout << cnt << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}