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
    int n;  cin >> n;
    vector<int> a(n);   _input(a);
    vector<int> b(n);   _input(b);

    vector<pair<int,int>> ans;

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]>a[j]){
                if(b[i]<b[j]){
                    cout << -1 << endl;
                    return;
                }
                ans.push_back({i+1,j+1});
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
            else if(b[i]>b[j]){
                if(a[i]<a[j]){
                    cout << -1 << endl;
                    return;
                }
                ans.push_back({i+1,j+1});
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }

    cout << ans.size() << endl;

    for(auto it:ans){
        cout << it.first << " " << it.second << endl;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}