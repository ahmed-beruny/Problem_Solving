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
    map<int,int> m;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }

    for(int i = 0;i<n;i++){
        if(m[a[i]] == 1){
            cout << -1 << endl;
            return;
        }
    }
    vector<int> ans(n);
    int first = 1;
    for(int i = 0;i<n-1;i++){
        if(a[i] == a[i+1]){
            cout << i+2 << " ";
        }
        else{
            cout << first << " ";
            first = i+2;
        }
    }

    cout << first << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}