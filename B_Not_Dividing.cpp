#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#define ll long long
#define pb push_back
#define dbug(x) cerr << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    vector<pair<int,string>> a;
    int n;  cin >> n;
    int nn = (n-1)*2;
    for(int i = 0;i<nn;i++){
        string val; cin >> val;
        a.push_back({val.size(),val});
    }
    sort(a.begin(),a.end());
 
    for(int i = 0;i<nn;i+=2){
        reverse(a[i].second.begin(),a[i].second.end());
        if(a[i].second != a[i+1].second){
            cout << "NO" << endl;
            return;
        }
    }
 
    cout << "YES" << endl;
 
}

int main(){
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}