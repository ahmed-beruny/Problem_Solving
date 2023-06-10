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
    int n,k,q;  cin >> n >> k >> q;
    k--;
    vector<int> a(n);   _input(a);

    int l=0,r=0;
    int ans = 0;
    while(r<n){
        if(a[r] <= q)r++;
        else{
            int val = (r-l) - k;
            if(val>0){
                ans += (val*(val+1))/2;
            }
            r++;
            l = r;
        }
    }
    int val = (r-l) - k;
    if(val>0){
        ans += (val*(val+1))/2;
    }

    cout << ans << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}