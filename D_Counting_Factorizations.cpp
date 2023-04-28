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
    int n;  cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
 
    for(int i = 0;i<n;i++){
        if(i == 0 && a[i] == 1){
            a[i]++;
            continue;
        }
 
        if(a[i] == 1){
            a[i]++;
            if(a[i]%a[i-1]==0){
                a[i]++;
            }
        }
 
        else{
            if(a[i]%a[i-1] == 0){
                a[i]++;
            }
        }
    }
 
    _print(a);
 
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