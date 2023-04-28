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
    vector<int> a(n),b(n);
    for(int i = 0;i<n;i++)cin >> a[i];
    for(int i = 0;i<n;i++)cin >> b[i];
    int cnta = 0,cntb = 0;
    for(int i = 0;i<n;i++){
        if((i == 0 or i == n-1) and a[i]!=b[i]){
            cout << "NO" << endl;
            return;
        }

        if(b[i] == 0 and a[i] == 1){
            cout << "NO" << endl;
            return;
        }
        if(a[i] == 1)cnta++;
        if(b[i] == 1)cntb++;
    }

    if(cnta == 0 and cntb == 0){
        cout << "YES" << endl;
        return;
    }

    if(cnta == 0){
        cout << "NO" << endl;
        return;
    }

    int leftOne = -1,rightOne = -1;

    for(int i = 0;i<n;i++){
        if(a[i] == 1){
            leftOne = i;
            break;
        }
    }

    for(int i = n-1;i>=0;i--){
        if(a[i] == 1){
            rightOne = i;
            break;
        }
    }

    cout << "YES" << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}