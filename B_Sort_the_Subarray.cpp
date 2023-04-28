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

    int l = -1,r=-1;

    for(int i = 0;i<n;i++){
        if(a[i]!=b[i]){
            l = i+1;
            break;
        }
    }

    for(int i = n-1;i>=0;i--){
        if(a[i] != b[i]){
            r = i+1;
            break;
        }
    }

    if(l == -1){
        cout << 1 << " " << 1 << endl;
        return;
    }

    for(int i = l-2;i>=0;i--){
        if(b[i]<=b[i+1])l--;
        else break;
    }

    for(int i = r;i<n;i++){
        if(b[i]>=b[i-1])r++;
        else break;
    }

    cout << l << " " << r << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}