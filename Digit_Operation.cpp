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
    int n,k;    cin >> n >> k;

    vector<string> a(n),b(n);

    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        cin >> b[i];
    }

    for(int i = 0;i<n;i++){
        if(a[i].size() != b[i].size()){
            cout << "NO" << endl;
            return;
        }
    }

    map<int,int> m1,m2;

    for(auto it:a){
        for(auto tt:it){
            m1[tt-'0']++;
        }
    }
    for(auto it:b){
        for(auto tt:it){
            m2[tt-'0']++;
        }
    }

    int diff = 0;

    for(int i = 0;i<=9;i++){
        diff += abs(m1[i]-m2[i]);
    }

    //dbug(diff);

    diff/=2;

    if(diff<=k){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}