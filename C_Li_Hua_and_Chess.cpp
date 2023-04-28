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
    int n,m;    cin >> n >> m;

    cout << "? " << 1 << " "<< 1<< endl;
    cout.flush();

    int a,b,c;
    cin >> a;
    cout << "? " << 1 << " "<< m << endl;
    cout.flush();

    cin >> b;
    cout << "? " << n << " "<< 1 << endl;
    cout.flush();

    cin >> c;
    int x,y;
    if(a+b ==m-1){
        x = n-c;
    }
    else{
        x = min(a,b);
    }

    if(a+c == n-1){
        y = m-b;
    }
    else{
        y = min(a,c);
    }

    cout << "! " << x << " "<< y<< endl;;


    cout.flush();
    

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}