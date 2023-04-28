#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int n; cin >> n;
    n *= 2;
    vector<int> a(n);
    for(auto& it:a)cin >> it;
    sort(a.begin(),a.end());
    int ans = 0;
    for(auto it:a)ans+=abs(it);
    if(n==2){
        cout << abs(a[0] - a[1]) << endl;
        return;
    }
    if(n == 4){
        int tmp = 0;
        for(auto it:a){
            tmp += abs(it-2);
        }
        ans = min(ans,tmp);
    }

    if(n%4 == 0){
        int tmp = 0;
        for(int i = 0;i<n;i++){
            if(i == n-1){
                tmp += abs((n/2)-a[i]);
                break;
            }
            tmp += abs(a[i]+1);
        }
        ans = min(ans,tmp);
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}