#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int a,b;    cin >> a >> b;
    if(a>b){
        for(int i = 0;i<b;i++){
            cout << "01";
        }
        for(int i = 0;i<(a-b);i++){
            cout << '0';
        }
    }
    else{
        for(int i = 0;i<a;i++){
            cout << "10";
        }
        for(int i = 0;i<(b-a);i++){
            cout << '1';
        }        
    }


    cout << endl;



}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}