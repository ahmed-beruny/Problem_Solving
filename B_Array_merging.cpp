#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _input(x) for(auto &it:x)cin >> it
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<int> a(n);   _input(a);
    vector<int> b(n);   _input(b);

    unordered_map<int,int> m1,m2;
    int cnt = 1;
    for(int i = 1;i<n;i++){
        if(a[i] == a[i-1])cnt++;
        else{
            m1[a[i-1]] = max(m1[a[i-1]],cnt);
            cnt = 1;
        }
    }
    m1[a[n-1]] = max(m1[a[n-1]],cnt);
    cnt = 1;
    for(int i = 1;i<n;i++){
        if(b[i] == b[i-1])cnt++;
        else{
            m2[b[i-1]] = max(m2[b[i-1]],cnt);
            cnt = 1;
        }
    }
    m2[b[n-1]] = max(m2[b[n-1]],cnt);

    int ans = 1;

    for(auto it:a)ans = max(ans,m1[it]+m2[it]);
    for(auto it:b)ans = max(ans,m1[it]+m2[it]);

    cout << ans << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}