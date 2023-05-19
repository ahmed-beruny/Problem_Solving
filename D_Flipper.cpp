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
    vector<int> a(n);

    for(auto& it:a)cin >> it;

    if(n == 1){
        _print(a);
        return;
    }

    int max_pos;
    int mx = 0;

    for(int i = 1;i<n;i++){
        if(a[i]>mx){
            mx = a[i];
            max_pos = i;
        }
    }

    int l,r;

    if(max_pos == n-1){
        r = max_pos;
        l = r;
        while(a[0]<a[l-1])l--;


    }
    else if(max_pos == 1){
        r = 0;
        l = 0;
    }
    else{
        r = max_pos-1;
        l = r;

        while(a[l-1]>a[0])l--;


    }

    // dbug(l);
    // dbug(r);
    // cout << endl;

    vector<int> ans;

    for(int i = r+1;i<n;i++){
        ans.pb(a[i]);
    }

    for(int i = r;i>=l;i--)ans.pb(a[i]);

    for(int i = 0;i<l;i++)ans.pb(a[i]);

    _print(ans);

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}