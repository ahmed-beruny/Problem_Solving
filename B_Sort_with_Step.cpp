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

    vector<int> a(n);
    for(int i = 0;i<n;i++)cin >> a[i];
    int dismatch = 0;
    for(int i = 1;i<=k;i++){

        for(int j = i-1;j<n;j+=k){
           if((a[j]-i)%k != 0)dismatch++; 
        }

        
    }

    //dbug(dismatch);

    if(dismatch == 0){
        cout << 0 << endl;
    }
    else if(dismatch == 2){
        cout << 1 << endl;
    }
    else cout << -1 << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}