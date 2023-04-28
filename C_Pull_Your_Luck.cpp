#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    int n,x,p;  cin >> n >> x >> p;

    int need = n-x;

    if(x == 0)need = 0;

    for(int i = 1;i<=min(4*n,p);i++){
        if((((i*(i+1))/2) % n) == need){
            cout << "Yes" << endl;
            //dbug(i);
            return;
        }
    }

    cout << "No" << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}