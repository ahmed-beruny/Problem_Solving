#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    if(((n*(n+1))/2) % n == 0){
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n);

    for(int i = 1;i<=n;i++){
        ans[i-1] = i;
    }

    for(int i = 2;i<n;i+=2){
        swap(ans[i],ans[i+1]);
    }
    _print(ans);

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}