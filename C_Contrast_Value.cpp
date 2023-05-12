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
    set<int> st;
    for(int i = 0;i<n;i++){cin >> a[i];st.insert(a[i]);}

    if(st.size() == 1){
        cout << 1 << endl;
        return;
    }
    int del = 0;
    int cnt = 0;
    int dir = 0;
    for(int i = 1;i<n;i++){

        if(a[i] == a[i-1]){
            cnt++;
            continue;
        }

        if(a[i] > a[i-1]){
            if(dir == 0)dir=1;

            if(dir == 1)cnt++;
            else{
                del += cnt-1;
                cnt = 1;
                dir = 1;
            }
        }

        if(a[i] < a[i-1]){
            if(dir == 0)dir=-1;

            if(dir == -1)cnt++;
            else{
                del += cnt-1;
                cnt = 1;
                dir = -1;
            }
        }

        


        



    }
    del += cnt-1;

    //dbug(del);

    cout << n-del << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}