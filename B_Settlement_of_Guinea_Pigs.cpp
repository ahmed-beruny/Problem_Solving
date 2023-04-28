#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    int ans = 0;

    int cntD = 0,cnt = 0;

    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        if(val == 2){
            cntD += cnt;
            cnt = 0;
        }
        else if(val == 1){
            cnt++;
        }

        int x = cnt;
        if(cntD != 0){
            x += (cntD/2)+1;
        }

        ans = max(ans,x);
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}