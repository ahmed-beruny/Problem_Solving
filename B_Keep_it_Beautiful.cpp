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
    int n;  cin >> n;

    bool flag = false;

    //string ans = "";

    vector<int> a;

    int first = -1;
    int last = -1;


    while(n--){
        int val;    cin >> val;
        if(first == -1){
            first = val;
            last = val;
            cout << 1;
            continue;
        }

        if(!flag){
            if(val >= last){
                last = val;
                cout << 1;
            }
            else{
                cout << 1;
                last = val;
                flag = true;
                continue;
            }
        }
        else{
            if(val >= last and val <= first){
                last = val;
                cout << 1;
            }
            else cout << 0;
        }
    }

    cout << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}