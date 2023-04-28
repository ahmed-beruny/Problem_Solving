#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<int> a(n);
    map<int,int> m;
    int mx = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
        mx = max(mx,m[a[i]]);

    }
    cout << n-mx << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}