#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _input(x) for(auto &it:x)cin >> it
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<int> a(n);   _input(a);

    unordered_map<int,int> pos;

    for(int i = 0;i<n;i++){
        pos[a[i]] = i+1;
    }

    if(pos[1]-pos[2] == 1){
        if(pos[n]<pos[2]){
            cout << pos[n] << " " << pos[2] << endl;
        }
        else{
            cout << pos[n] << " " << pos[1] << endl;

        }
        return;
    }

    if(pos[2]-pos[1] == 1){
        if(pos[n]<pos[1]){
            cout << pos[n] << " " << pos[1] << endl;
        }
        else{
            cout << pos[n] << " " << pos[2] << endl;

        }
        return;
    }

    if(pos[1]<pos[2]){
        cout << pos[1]+1 << " " << pos[n] << endl;
    }
    else{
        cout << pos[1]-1 << " " << pos[n] << endl;
    }



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}