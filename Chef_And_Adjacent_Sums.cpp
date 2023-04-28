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
    vector<int> a;
    map<int,int> m;
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        a.pb(val);
        m[val]++;

        mx = max(mx,val);

    }

    sort(a.begin(),a.end());

    if(a[0] == a[n-2]){
        cout << "NO" << endl;
        return;
    }

    if(n<=2){
        cout << "NO" << endl;
        return;
    }
    int chk = m[mx]*2;

    // if(a[n-1]!=a[n-2]){
    //     chk+=m[a[n-2]];
    // }

    // chk*=2;
    
    if(n%2 == 1){
        if(chk>(n+1)){
            cout << "NO" << endl;
            return;
        }
    }
    else{
        if(chk>n){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}