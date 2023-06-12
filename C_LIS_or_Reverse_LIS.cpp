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
    vector<int> a;
    unordered_map<int,int> m;
    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        a.push_back(val);
    }

    sort(a.begin(),a.end());
    int cnt = 0;
    for(int i = 1;i<n-1;i++){
        if(a[i] == a[i-1] and a[i] == a[i+1])cnt++;
    }

    cnt = n - cnt;

    int ans = cnt/2;
    if(cnt%2)ans++;

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}