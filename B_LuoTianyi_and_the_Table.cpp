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
    int n,m;    cin >> n >> m;

    vector<int> a(n*m);

    for(int i = 0;i<n*m;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int N = n*m;
    int ans = 0;
    if(n>m)swap(n,m);
    ans += ((n-1)*(a[N-1]-a[1]));
    ans += ((m-1)*(a[N-1]-a[0]));
    ans += (((n-1)*(m-1))*(a[N-1]-a[0]));

    int ans1 = 0;
    ans1 += ((n-1)*(a[N-2]-a[0]));
    ans1 += ((m-1)*(a[N-1]-a[0]));
    ans1 += (((n-1)*(m-1))*(a[N-1]-a[0]));

    cout << max(ans,ans1) << endl;



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}