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
    int n,m;
    cin >> n; 
    vector<int> a(n);   _input(a);
    cin >> m;
    vector<int> b(m);   _input(b);

    int am = 0,bm = 0;
    for(auto it:a)am = max(am,it);
    for(auto it:b)bm = max(bm,it);

    if(am == bm){
        cout << "Alice" << endl;
        cout << "Bob" << endl;
        return;
    }
    if(am>bm){
        cout << "Alice" << endl;
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
        cout << "Bob" << endl;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}