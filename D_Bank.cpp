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
    int n,op;  cin >> n >> op;
    set<int> s;
    int curr = 1;
    while(op--){
        int type;   cin >> type;
        if(type == 1){
            s.insert(curr);
            curr++;
        }
        else if(type == 2){
            int val;    cin >> val;
            auto pos = s.lower_bound(val);
            s.erase(pos);
            
        }
        else if(type == 3){
            cout << *s.begin() << endl;
        }
    } 
}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}