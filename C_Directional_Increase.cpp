#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<int> a(n);
    int pos = n;
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    for(int i = n-1;i>=0;i--){
        if(a[i] != 0)break;
        pos = i;
    }
    if(pos == 0){
        cout << "Yes" << endl;
        return;
    }
    ll sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i];

        if(sum < 0){
            cout << "No" << endl;
            return;
        }

        if(sum == 0){
            if(i+1 == pos){
                cout << "Yes" << endl;
                return;
            }
            else{
                cout << "No" << endl;
                return;
            }
        }
    }

    cout << "No" << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}