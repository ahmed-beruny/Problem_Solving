#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    int a,b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);

    int c = min(a,b);
    int d = max(a,b);

    int ans = c*2;

    d = d-c;
    if(d!=0)
        ans += (d*2-1);

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}