#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> a(n),b(n);
    map<int,int> posA,posB;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        posA[a[i]] = i;
    }
    for(int i = 0;i<n;i++){
        cin >> b[i];
        posB[b[i]] = i;
    }

    vector<pair<int,int>> dp(n+1);
    int ans = 0;
    for(int mex = 1;mex<=n;mex++){
        if(mex == 1){
            dp[1].first = min(posA[1],posB[1]);
            dp[1].second = max(posA[1],posB[1]);
            int val = dp[mex].first;
            ans += (val * (val+1))/2;
            val = dp[mex].second - dp[mex].first+1;
            ans += (val * (val+1))/2;
            
            val = n-1-dp[mex].second+1;
            ans += (val * (val+1))/2;

            continue;
        }

        dp[mex].first = min(dp[mex].first,posA[mex]);
        dp[mex].first = min(dp[mex].first,posB[mex]);
        dp[mex].second = max(dp[mex].second,posA[mex]);
        dp[mex].second = max(dp[mex].second,posB[mex]);

        int l =min(posA[mex],posB[mex]);
        int r = max(posA[mex],posB[mex]);

        if(dp[mex-1].first<l and dp[mex-1].second>r)continue;

        if(dp[mex-1].first<l and dp[mex-1].second<l){
            int cnt = l-(dp[mex-1].second - dp[mex-1].first);
            ans += (cnt*(cnt+1))/2;

            int leftcnt = dp[mex-1].first;
            ans -= (leftcnt*(leftcnt+1))/2;

            int rightcnt = l-1-(dp[mex-1].second);
            ans -= (rightcnt*(rightcnt+1))/2;
        }

        if(dp[mex-1].first>r and dp[mex-1].second>r){
            int cnt = n-1-r - (dp[mex-1].second - dp[mex-1].first);
            ans += (cnt*(cnt+1))/2;

            int leftcnt = dp[mex-1].first-r-1;
            ans -= (leftcnt*(leftcnt+1))/2;

            int rightcnt = n-(dp[mex-1].second);
            ans -= (rightcnt*(rightcnt+1))/2;
        }
    }

    cout << ans+1 << endl;


}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}