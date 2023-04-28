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

int needing(int x){
    int cnt = 0;

    while(x % 2 == 0){
        cnt++;
        x/=2;
    }
    return cnt;
}

void solve(){
    int n;  cin >> n;

    int cnt = 0;
    int mn = 1e9;
    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        if(val%2){
            cnt++;
            
        }
        else{
            mn = min(mn,needing(val));
        }
    }

    if(cnt != 0){
        cout << n-cnt <<endl;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}