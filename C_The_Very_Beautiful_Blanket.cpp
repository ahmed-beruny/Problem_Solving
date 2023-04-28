#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;

int a[256][256];


void solve(){
    int n,m;    cin >> n >> m;
    cout << n*m << endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << a[i][j] << " ";
        }cout << endl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int cnt = 0;
    for(int i = 0;i<256;i++){
        for(int j = 0;j<256;j++){
            a[i][j] = cnt;
            cnt++;

        }
    }
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}