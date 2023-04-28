#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;

void solve(){
    int x,y;    cin >> x >> y;
    int n;
    if(x<=y){
        if(y%x == 0){
            n=x;
        }
        else{
            int y1 = (y/x)*x;
            n = (y1+y)/2;           
        }

    }
    else{

        n = x+y;
    }

    assert(false);

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}