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
    int n,k;   cin >> n >> k;

    vector<int> a(n);

    int sum = 0;

    for(int i = 0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(),a.end());

    vector<int> pre_sum(n),suff_sum(n);

    pre_sum[0] = a[0];

    for(int i = 1;i<n;i++){
        pre_sum[i] = pre_sum[i-1]+a[i];
    }

    suff_sum[n-1] = a[n-1];

    for(int i = n-2;i>=0;i--){
        suff_sum[i] = suff_sum[i+1]+a[i];
    }

    int l=0,r=k;
    int ans = 0;
    while(l<n and r>=0){
        if(l == 0){
            ans = max(ans,sum - suff_sum[n-r]);
        }
        else if(r==0){
            ans = max(ans,sum - pre_sum[l-1]);
            break;
        }
        else{
            ans = max(ans,sum - pre_sum[l-1] - suff_sum[n-r]);
        }

        l+=2;
        r--;



        
        
    }

    cout << ans << endl;




}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}