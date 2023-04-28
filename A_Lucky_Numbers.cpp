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

int lNum(int num){
    int mn = 1e9;
    int mx = 0;

    while(num > 0){
        int val = num % 10;
        num /= 10;

        mn = min(mn,val);
        mx = max(mx,val);
    }

    return mx-mn;
}

void solve(){
    int l,r;

    cin >> l >> r;
    int ans = l;
    int mx = 10;


    


    for(int i = l;i<=r;i++){
        if(lNum(i) < mx){
            mx = lNum(i);
            ans = i;

            if(mx==0)break;
        }
    }

    cout << ans << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}