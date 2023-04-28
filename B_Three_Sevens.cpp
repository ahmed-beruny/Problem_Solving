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
    vector<vector<int>> a(n);

    for(int i = 0;i<n;i++){
        int t;  cin >> t;
        for(int j = 0;j<t;j++){
            int val;    cin >> val;
            a[i].pb(val);
        }
    }

    vector<vector<int>> ans(n);
    map<int,bool> m;
    for(int i = n-1;i>=0;i--){
        for(auto it:a[i]){
            if(m[it] == false){
                ans[i].pb(it);
                m[it] = true;
            }
        }
    }

    for(auto it:ans){
        if(it.size() == 0){
            cout << -1 << endl;
            return;
        }
    }

    for(auto it:ans){
        cout << it[0] << " ";

    }cout << endl;
}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}