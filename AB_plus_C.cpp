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

    if(n==1){
        cout << -1 << endl;
        return;
    }

    int a = sqrt(n);
    int c = a;
    if(a*a == n)c=a-1;

    if(a*(c+1)<n and c<1e6)c++;


    int b = n-a*c;

    if(b>1e6){
        cout << -1 << endl;
        return;
    }
    cout << a << " " << c << " "<< b << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}