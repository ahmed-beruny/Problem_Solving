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
    vector<int> k(n);
    int mn = 1e12,mx = -1e12;
    for(int i = 0;i<n;i++){
        cin >> k[i];
        mx = max(mx,k[i]);
        mn = min(mn,k[i]);
        
    }

    // dbug(mn);
    // dbug(mx);
    sort(k.begin(),k.end());

    while(m--){
        int a,b,c;  cin >> a >> b >> c;
        
        // if((b-mn)*(b-mn) - 4*a*c < 0){
        //     cout << "YES" << endl;
        //     cout << mn << endl;
        //     continue;
        // }
        // else if((b-mx)*(b-mx) - 4*a*c < 0){
        //     cout << "YES" << endl;
        //     cout << mx << endl;
        //     continue;
        // }
        // else{
        //     cout << "NO" << endl;
        // }

        int l = 0,r=n-1;
        int mid=0;
        while(l<r){
            mid = (l+r)/2;
            if(k[mid] == b)break;
            if(k[mid]>b)r=mid;
            else l = mid+1;
        }
        int pos = mid;
        


        if((b-k[pos])*(b-k[pos]) - 4*a*c < 0){
            cout << "YES" << endl;
            cout << k[pos] << endl;
        }
        else if((b-k[pos + 1])*(b-k[pos + 1]) - 4*a*c < 0 and pos<n-1){
            cout << "YES" << endl;
            cout << k[pos+1] << endl;
        }
        else if((b-k[pos - 1])*(b-k[pos - 1]) - 4*a*c < 0 and pos>0){
            cout << "YES" << endl;
            cout << k[pos-1] << endl;
        }
        else{
            cout << "NO" << endl;
        }



    }

    cout << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}