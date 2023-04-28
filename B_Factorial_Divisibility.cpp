#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;
int f[500005];
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n,m;    cin >> n >> m;


    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        f[val]++;
    }

    for(int i = 1;i<=m-1;i++){
        int div = i+1;
        if(f[i]%div != 0){
            cout << "No" << endl;
            return 0;
        }

        f[div] += f[i]/div;
    }

    cout << "Yes" << endl;

    return 0;
}