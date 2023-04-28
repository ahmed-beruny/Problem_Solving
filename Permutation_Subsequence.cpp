#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const int mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    map<int,int> m;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }

    int i = 1;
    while(m[i])i++;
    i--;
    int h = i;
    int ans = i;

    vector<int> dp(i+1);

    dp[1] = m[1];

    for(int j = 2;j<=h;j++){
        dp[j] = (dp[j-1] * m[j])%mod;
    }

    int answer = 0;

    for(int i = 1;i<=h;i++){
        answer = (answer + dp[i])%mod;
    }

    cout << answer << endl;
    

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}