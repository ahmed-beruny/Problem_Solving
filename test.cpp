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

void change(vector<int> a){
    a[0] = 100;
}

void solve(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};


    change(a);

    _print(a);

}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}