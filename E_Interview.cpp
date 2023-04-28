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
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin >> a[i];

    vector<int> p_sum(n);
    p_sum[0] = a[0];

    for(int i = 1;i<n;i++){
        p_sum[i] = p_sum[i-1] + a[i];
    }

    int low = 1,high = n;
    int mid = 1;
    while(low<=high){
        if(low == high){
            mid = low;
            break;
        }
        mid = (low+high)/2;

        cout << "? " << mid-low+1 << " ";
        for(int i = low;i<=mid;i++){
            cout << i << " ";
        }cout << endl;

        cout.flush();

        int x;  cin >> x;

        int sum = p_sum[mid-1] - (low>1 ? p_sum[low-2] : 0);

        if(x>sum){
            high = mid;
        }
        else{
            low = mid+1;
        }

    }
    cout << "! "<< mid << endl;

    cout.flush();

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}