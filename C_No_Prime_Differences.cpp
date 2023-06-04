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

void solve(){
    int n,m;    cin >> n >> m;

    if(n%2 == 0){
        int x = 1;

        vector<vector<int>> a(m);
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                a[i].push_back(x);
                x++;
            }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout << a[j][i] << " ";
            }cout << endl;
        }

        cout << endl;
        return;
    }

    int n1 = n/2;
    int n2 = n - n1;

    

    for(int i = 0;i<n2;i++){
        int x = 2*m*i + 1;
        for(int j = 0;j<m;j++){
            cout << x << " ";
            x++;
        }cout << endl;
    }

    for(int i = 0;i<n1;i++){
        int x = 2*m*i + 1+m;
        for(int j = 0;j<m;j++){
            cout << x << " ";
            x++;
        }cout << endl;
    }


    cout << endl;



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}