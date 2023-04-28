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

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    if(n%2 == 1){
        cout << -1 << endl;
        return;
    }

    vector<int> a(n);
    int p = 0;
    for(int i = 0;i<n;i+=2){
        a[i] = p;
        p++;
    }

    for(int i = n-1;i>=0;i-=2){
        a[i] = p;
        p++;
    }
    
    for(int i = 0;i<n;i++){
        if(i == 0){
            cout << n << " ";
            continue;
        }

        if(i%2 == 1){
            cout << a[i]-a[i-1] << " ";
            continue;
        }

        if(i%2 == 0){
            cout << (n+a[i])-a[i-1] << " ";
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