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
    string s;   cin >> s;
    set<char> st;
    int n = s.size();
    for(int i = 0;i<s.size();i++){
        if(s.size()%2==1 and i==n/2)continue;
        
        st.insert(s[i]);
    }

    //cout << st.size() << endl;

    if(st.size()>1){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;




}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}