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
    vector<vector<int>> a(n,vector<int>(n));

    a[0][0] = 1;

    int curr = 3;

    for(int i = 1;i<n;i++){
        int x = i,y = 0;
        while(1){
            a[x][y] = curr;
            curr+=2;
            if(curr>(n*n))curr = 2;
            x--;y++;

            if(x<0 or y>=n)break;
        }
    }

    for(int i = 1;i<n;i++){      
        int x = n-1,y = i;
        while(1){
            a[x][y] = curr;
            curr+=2;
            if(curr>(n*n))curr = 2;
            x--;y++;

            if(x<0 or y>=n)break;
        }
    }

    if(n == 4){
        a[2][2] = 6;
        a[3][1] = 10;
        a[1][3] = 8;
    }


    for(auto it:a){
        _print(it);
        //cout << endl;
    }

    cout << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}