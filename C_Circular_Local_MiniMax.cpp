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
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    if(n%2){
        cout << "NO" << endl;
        return; 
    }
    sort(a.begin(),a.end());

    vector<int> ans;

    int mid = n/2;

    for(int i = 0;i<n/2;i++){
        ans.pb(a[i]);
        ans.pb(a[mid+i]);        
    }

    for(int i = 0;i<n;i++){
        if(i == 0){
            if(ans[n-1]<= ans[i] and ans[i] <= ans[i+1]){
                cout << "NO" << endl;
                return;
            }else if(ans[n-1]>=ans[i] and ans[i] >= ans[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
        else if(i == n-1){
            if(ans[i-1] <= ans[i] and ans[i] <= ans[0]){
                cout << "NO" << endl;
                return;
            }
            else if(ans[i-1] >= ans[i] and ans[i] >= ans[0]){
                cout << "NO" << endl;
                return;
            }
        }

        else{
            if(ans[i-1] <= ans[i] and ans[i] <= ans[i+1]){
                cout << "NO" << endl;
                return;
            }
            else if(ans[i-1] >= ans[i] and ans[i] >= ans[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;    
    _print(ans);

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}