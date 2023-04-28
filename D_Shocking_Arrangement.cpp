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

bool allzero(vector<int> &a){
    for(auto it:a){
        if(it != 0){
            return false;
        }
    }
    

    return true;
}

void solve(){
    int n;  cin >> n;
    vector<int> neg,pos;

    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        if(val >= 0)pos.pb(val);
        else neg.pb(val);
    }

    if(allzero(neg) and allzero(pos)){
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    sort(neg.begin(),neg.end());
    sort(pos.begin(),pos.end());

    int p1 = 0,p2= 0;

    int sum = 0;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(sum + pos[p2] > 0){
            ans.pb(neg[p1]);
            sum += neg[p1];

            p1++;
        }
        else{
            ans.pb(pos[p2]);
            sum += pos[p2];
            p2++;
        }
    }

    _print(ans);

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}