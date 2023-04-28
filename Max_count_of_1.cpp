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

    int cnt1=1,cnt2=0;
    int prev = 1;
    for(int i = 1;i<n;i++){
        int val;
        if(s[i-1] == '0')val=0;
        else val = 1;

        prev = val^prev;

        if(prev)cnt1++;
    }

    prev = 0;
    for(int i = 1;i<n;i++){
        int val;
        if(s[i-1] == '0')val=0;
        else val = 1;

        prev = val^prev;

        if(prev)cnt2++;
    }

    cout << max(cnt1,cnt2) << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}