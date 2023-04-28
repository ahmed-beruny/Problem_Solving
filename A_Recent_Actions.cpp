#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n,m;    cin >> n >> m;
    vector<int> a;
    map<int,bool> mp;
    for(int i = 1;i<=n;i++){
        a.push_back(i);
        mp[i] = true;
    }
 
    vector<int> ans(n,-1);
    int cnt = 0;
    for(int i = 1;i<=m;i++){
        int val;    cin >> val;
        if(mp[val] == false){
            mp[val] = true;
            int it = a.back();
            a.pop_back();
            if(it<=n)
                ans[it-1] = i;
            cnt++;
            a.insert(a.begin(),val);
            
        }
        else{   
            //get a value from of i index
            for(auto it = a.begin();it!=a.end();it++){
                if(*it == val){
                    a.erase(it);
                    break;
                }
            }
            a.insert(a.begin(),val);
        }
 
    }
    _print(ans);
 
 
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}