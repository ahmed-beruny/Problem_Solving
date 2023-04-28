#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    int pos = 0,neg = 0;

    for(int i=0;i<n;i++){
        int val; cin >> val;
        if(val>0)pos++;
        else neg++;
    }
    int i;
    for(i = 1;i<=pos;i++){
        cout << i << " ";
    }
    i--;
    for(int j = 0;j<neg;j++){
        i--;
        cout << i << " ";
    }cout << endl;

    int rem = pos - neg;

    for(int k = 0;k<neg;k++){
        cout << 1 << " " << 0 << " ";
    }
    for(int k = 1;k<=rem;k++){
        cout << k << " ";
    }cout << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}