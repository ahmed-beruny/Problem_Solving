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
    string s1,s2;   cin >> s1 >> s2;

    int q,k;    cin >> k >> q;

    unordered_map<int,int> m;
    m.clear();
    for(int i = 1;i<=q;i++){
        //dbug(i);
        int op; cin >> op;
        if(op == 1){
            int pos;    cin >> pos;
            m[pos] = i;
        }
        else if(op == 2){
            int u,v,w,x;    cin >> u >> v >> w >> x;

            if(u == 1 and w == 1){
                swap(s1[v-1],s1[x-1]);
            }
            else if(u == 1 and w == 2){
                swap(s1[v-1],s2[x-1]);
            }
            else if(u == 2 and w == 1){
                swap(s2[v-1],s1[x-1]);
            }
            else if(u == 2 and w == 2){
                swap(s2[v-1],s2[x-1]);
            }
        }
        else if(op == 3){
            bool n = false;
            for(int j = 0;j<s1.size();j++){
                if(m[j+1] != 0 and i-m[j+1] < k){
                    continue;
                }
                if(s1[j] != s2[j]){
                    cout << "NO" << endl;
                    n = true;
                    break;
                }
            }
            if(!n){
                cout << "YES" << endl;
            }
        }
    }


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}