#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    int n,k,d,w;    cin >> n >> k >> d >> w;
    vector<int> a(n);

    for(int i = 0;i<n;i++)cin >> a[i];

    int meyad_end = -1;
    int vac_count = 0;
    int ans = 0;

    for(int i = 0;i<n;i++){
        //dbug(vac_count);
        if(vac_count == 0 or a[i]>meyad_end){
            meyad_end = a[i]+w+d;
            ans++;
            vac_count = k;
            //dbug(meyad_end);
        }
        vac_count--;

    }

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}