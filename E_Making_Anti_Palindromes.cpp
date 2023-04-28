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


    if(n%2 == 1){
        cout << -1 << endl;
        return;
    }

    int ans = 0;

    char val = '?';
    int cnt = 0;
    vector<int> pos;
    for(int i = 0;i<n/2;i++){
        if(s[i] == s[n-1-i]){
            if(cnt == 0){
                cnt++;
                pos.pb(i);
                val = s[i];
                continue;
            }

            if(s[i] == val){
                cnt++;
                pos.pb(i);
            }

            else{
                cnt--;
                ans++;
            }
        }
    }

    for(int i=0;i<n/2;i++){
        if(cnt == 0){
            cout << ans << endl;
            return;
        }
        if(s[i] != s[n-1-i] or s[i]!=val or s[n-1-i]!=val){
            cnt--;
            ans++;
        }
    }

    dbug(val);
    dbug(cnt);
    if(cnt==0)
        cout << ans << endl;
    
    else cout << -1 << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}