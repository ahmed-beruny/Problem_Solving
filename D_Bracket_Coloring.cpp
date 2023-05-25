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
    int n;  cin >> n;
    string a;   cin >> a;

    int flag = 0;

    vector<int> ans;

    int prev = 1;

    bool neg = false,pos = false;

    for(int i = 0;i<a.size();i++){
        if(a[i] == '(')flag++;
        else flag--;

        if(flag > 0){
            ans.push_back(1);
            prev = 1;
            pos = true;
        }
        else if(flag<0){
            ans.push_back(2);
            prev = 2;
            neg = true;
        }
        else{
            ans.push_back(prev);
        }

    }
    if(flag!=0){
        cout << -1 << endl;
        return;
    }
    if(neg and pos){cout << 2 << endl;
    _print(ans);}
    else {
        cout << 1 << endl;
        for(int i = 1;i<=n;i++){
            cout << 1 << " ";
        }cout << endl;
    
    }

    

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}