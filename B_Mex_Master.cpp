#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<int> a(n);
    int zero = 0;
    bool exist = false;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i] > 1){
            exist = true;
        }
        if(a[i] == 0)zero++;
    }
    if(zero == n){
        cout << 1 << endl;
        return;
    }
    int val = n-zero;
    // dbug(zero);
    // dbug(val);
    if(zero - 1 > val){
        if(exist)
            cout << 1 << endl;
        else{
            cout << 2 << endl;
        }
    }
    else cout << 0 << endl;



}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}