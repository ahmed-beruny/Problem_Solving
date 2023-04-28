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
    int x,y;    cin >> x >> y;

    int target = x-y;

    int l = 0,r=1e6;
    int mid;

    while(l<r){
        mid = (l+r)/2;

        int val = (mid*(mid+1))/2;
        if(val == target)break;
        if(val>target)r = mid;
        else l = mid;

        if(r-l == 1){
            mid = r;
            break;
        }
    }

    cout << mid << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}