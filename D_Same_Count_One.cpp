#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    int n,m;    cin >> n >> m;
    vector<vector<int>> a(n);
    vector<vector<int>> ans;
    vector<int> onecnt(n);
    int ones = 0;
    for(int i = 0;i<n;i++){
        int cnt = 0;
        for(int j = 0;j<m;j++){
            int val;    cin >> val;
            a[i].push_back(val);
            if(val == 1){
                ones++;
                cnt++;
            }
        }
        onecnt[i] = cnt;
    }
    if(ones%n != 0){
        cout << -1 << endl;
        return;
    }

    int need = ones/n;

    for(int j = 0;j<m;j++){
        vector<int> onepos,zeropos;
        for(int i = 0;i<n;i++){
            if(onecnt[i] == need)continue;
            else if(onecnt[i]<need and a[i][j] == 0){
                if(onepos.size()>0){
                    int x = onepos[onepos.size()-1];
                    onepos.pop_back();
                    ans.push_back({x+1,i+1,j+1});
                    onecnt[x]--;
                    onecnt[i]++;
                }
                else{
                    zeropos.push_back(i);
                }
            }
            else if(onecnt[i]>need and a[i][j] == 1){
                if(zeropos.size()>0){
                    int x = zeropos[zeropos.size()-1];
                    zeropos.pop_back();
                    ans.push_back({x+1,i+1,j+1});
                    onecnt[x]++;
                    onecnt[i]--;
                }
                else{
                    onepos.push_back(i);
                }
            }
        }
    }

    cout << ans.size() << endl;
    for(auto it:ans){
        cout << it[0] << " " << it[1] << " " << it[2] << endl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}