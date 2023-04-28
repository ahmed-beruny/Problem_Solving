#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;


void solve(){
    int n,m;    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin >> a[i];
    
    int ans = n*m*(m+1);

    vector<vector<int>> f(n+m+1);

    for(auto it:a){
        f[it].push_back(0);
    }

    for(int i = 1;i<=m;i++){
        int x,y;    cin >> x >> y;
        f[a[x-1]].push_back(i);
        f[y].push_back(i);
        a[x-1] = y;
    }

    for(int i = 1;i<=n+m;i++){
        int freq = 0;
        int s = f[i].size();
        if(s%2==1){
            freq += (m-f[i][s-1]+1);
            s--;
        }
        for(int j = 0;j<s;j+=2){
            freq += (f[i][j+1]-f[i][j]);
        }
        //cout << i << " " << freq << endl;
        ans -= (freq*(freq-1))/2;
    }

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}