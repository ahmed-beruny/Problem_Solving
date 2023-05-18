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
    string s;   cin >> s;
    map<char,int> m;
    set<char> st;

    



    if(s.size() == 2){
        if(s[0] == s[1]){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return;
    }

    

    for(auto it:s){
        m[it]++;
        st.insert(it);
    }
    if(st.size() == 1){
        if(s.size()%2)
            cout << 2 << endl;
        else cout << 1 << endl;
        return;
    }

    int odd = 0;

    for(char i = 'a';i<='z';i++){
        if(m[i]%2)odd++;
    }

    if(s.size() == 3 and s[0] == s[1] and s[0] == s[2]){
        cout << 2 << endl;
        return;
    }

    //dbug(odd);

    if(s.size()%2)odd--;

    

    if(odd)cout << 0 << endl;
    else cout << 1 << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}