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
    int n,q;    cin >> n >> q;
    vector<int> a(n);
    for(auto &it:a)cin >> it;

    vector<int> s(n,0);

    while(q--){
        int l,r;    cin >> l >> r;

        s[l-1] += 1;
        if(r<n)s[r]-=1;
    }

    for(int i = 1;i<n;i++){
        s[i] = s[i-1]+s[i];
    }
    vector<pair<int,int>> v(n);

    for(int i = 0;i<n;i++){
        v[i] = {s[i],i};
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    sort(a.begin(),a.end(),greater<int>());
    
    int sum = 0;

    vector<int> ans(n);
    for(int i = 0;i<n;i++){
        ans[v[i].second] = a[i];
        sum += a[i]*v[i].first;
    }

    
    cout << sum << endl;
    _print(ans);

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}