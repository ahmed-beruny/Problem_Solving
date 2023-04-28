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
    int n,k;    cin >> n >> k;

    vector<vector<int>> a(n,vector<int>(n));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> b(n,vector<int>(n));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            b[n-1-i][n-1-j] = a[i][j];
        }
    }

    // for(auto it:b){
    //     for(auto tt:it){
    //         cout<< tt << " ";

    //     }cout << endl;
    // }

    int cnt = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                cnt++;
            }
        }
    }

    //dbug(cnt);
    cnt/=2;

    int val = k - cnt;

    if(val < 0){
        cout << "NO" << endl;
        return;
    }

    if(n%2 == 1){
        cout << "YES" << endl;
        return;
    }

    if(val%2==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}