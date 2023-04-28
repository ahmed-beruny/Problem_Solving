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
const int N = 25001;
//int vis[N][N][4];
vector<vector<vector<bool>>> vis;
int n,m,tx,ty;

int bounce = 0;
bool possible = true;

void dfs(int x,int y,int d){

    if(x>n or x<1 or y>m or y<1){
        bounce++;

        if(x>n and y>m){
            x--;
            y--;
            d=1;
        }
        else if(x>n and y<1){
            x--;y++;
            d = 0;
        }
        else if(x<1 and y<1){
            x++;y++;
            d = 3;
        }        
        else if(x<1 and y>m){
            x++;y--;
            d = 2;
        }
        else if(x>n){
            x--;
            if(d == 2){y++;d = 1;}
            else if(d == 3){y--;d = 0;}
        }
        else if(y>m){
            y--;
            if(d == 0){x++;d = 1;}
            else if(d == 3){x--;d = 2;}
        }
        else if(x<1){
            x++;
            if(d == 1){y++;d = 2;}
            else if(d == 0){y--;d = 3;}
        }
        else if(y<1){
            y++;
            if(d == 1){x++;d = 0;}
            else if(d == 2){x--;d = 3;}
        }

    }

    if(vis[x][y][d] == true){
        possible = false;
        return;
    }

    vis[x][y][d] = true;

    if(x == tx and y == ty){
        return;
    }


    if(d == 0){
        dfs(x-1,y+1,d);
    }
    else if(d == 1){
        dfs(x-1,y-1,d);
    }
    else if(d == 2){
        dfs(x+1,y-1,d);
    }
    else if(d == 3){
        dfs(x+1,y+1,d);
    }

    
}

void solve(){

    int x,y;
    
    string d;
    cin >> n >> m >> x >> y >> tx >> ty >> d;

    vis.assign(n+1,vector<vector<bool>>(m+1,vector<bool>(4,0)));
    bounce = 0;
    possible = true;

    int dir;
    
    if(d == "UR")dir = 0;
    else if(d == "UL")dir = 1;
    else if(d == "DL")dir = 2;
    else if(d == "DR")dir = 3;

    //dbug(dir);


    dfs(x,y,dir);

    if(!possible){
        cout << -1 << endl;
        return;
    }

    cout << bounce << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}