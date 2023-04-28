#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl;
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl;
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n,x;    cin >>  n >> x;
    int h = 1+n;
    int l = 1-n;
    if(x>h || x<l){
        cout << -1 << endl;
        return;
    }

    if(x>=1){
        int t = x-1;
        for(int i = 0;i<t;i++){
            cout << "+";
            n--;
        }
        for(int i = 0;i<n;i++){
            cout << "*";
        }
        cout << endl;
        return;
    }
    else{
        int t = 1-x;
        for(int i = 0;i<t;i++){
            cout << "-";
            n--;
        }
        for(int i = 0;i<n;i++){
            cout << "*";
        }
        cout << endl;
        return;
    }

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    //freopen("output.txt", "w",stdout);
    #endif
 
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}