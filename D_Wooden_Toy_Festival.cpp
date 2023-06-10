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

bool possible(vector<int> &a,int diff){
    int cnt = 0;

    int l = 0,r = 0;

    while(r<a.size()){
        if(a[r]-a[l] > 2*diff){
            cnt++;
            l = r;
        }
        r++;
        if(cnt == 3)return false;
    }
    return true;
}

void solve(){
    int n;  cin >> n;
    vector<int> a(n);   _input(a);
    sort(a.begin(),a.end());

    int l = -1,r = 1e9;

    while(l<r){
        int mid = (l+r)/2;

        if(possible(a,mid)){
            r = mid;
        }
        else l = mid;
        
        if(r-l == 1){
            cout << r << endl;
            return;
        }
    }


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}