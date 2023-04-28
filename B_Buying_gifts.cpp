#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0;i<n;i++){
        int x,y;    cin >> x >> y;
        a[i] = {x,y};
    }
    sort(a.begin(),a.end());

    vector<int> suffix(n);

    suffix[n-1] = a[n-1].second;
    for(int i = n-2;i>=0;i--){
        suffix[i] = max(suffix[i+1],a[i].second);
    }
    suffix.pb(-1e8);
    set<int> s;
    int ans = INT_MAX;

    for(int i = 0;i<n;i++){
        int x = a[i].first;


        int y = suffix[i+1];
        ans = min(ans,abs(x-y));
        if(i==0){
            s.insert(a[i].second);
            continue;
        }
        auto it = s.lower_bound(x);
        if(it != s.end() and *it>y){
            ans = min(ans,abs(x-*it));
        }
        if(it != s.begin() and *--it>y){
            ans = min(ans,abs(x-*it));
        }

        if(ans == 0)break;
        
        s.insert(a[i].second);
    }

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}