# auth: starkizard
# Works only with cpp.

bool visited[7][7];
int pathlength=0;
int ways=0;
string s;
void dfs(int r, int c){
    if(r==6 && c==0){
        if(pathlength==48){
            ways++;
        }
        return;
    }
    if((r==0 || r==6) && c>0 && c<6 && visited[r][c-1]==false && visited[r][c+1]==false)
        return;
    if((c==0 || c==6) && r>0 && r<6 && visited[r-1][c]==false && visited[r+1][c]==false)
        return;
    if(r>0 && r<6 && c>0 && c<6 && visited[r][c-1]==false && visited[r][c+1]==false && visited[r-1][c]==true && visited[r+1][c]==true)
        return;
    if(c>0 && c<6 && r>0 && r<6 && visited[r-1][c]==false && visited[r+1][c]==false && visited[r][c+1] && visited[r][c-1])
        return;
    
    visited[r][c]=true;
    if(s[pathlength]=='?'){
        if(r>0 && c>0 && c<6 && visited[r-1][c]==false){
            pathlength+=1;
            dfs(r-1,c);
            pathlength-=1;
        }
        if (c>0 && r>0 && visited[r][c-1]==false){
            pathlength+=1;
            dfs(r,c-1);
            pathlength-=1;
        }
        if (r<6 && visited[r+1][c]==false){
            pathlength+=1;
            dfs(r+1,c);
            pathlength-=1;
        }
        if (c<6 && r<6 && visited[r][c+1]==false){
            pathlength+=1;
            dfs(r,c+1);
            pathlength-=1;
        }
    }
    else if(s[pathlength]=='R'){
        if (c<6 && r<6 && visited[r][c+1]==false){
            pathlength+=1;
            dfs(r,c+1);
            pathlength-=1;
        }
    }
    else if(s[pathlength]=='U'){
        if (r>0 && c>0 && c<6 && visited[r-1][c]==false){
            pathlength+=1;
            dfs(r-1,c);
            pathlength-=1;
        }
    }
    else if(s[pathlength]=='D'){
        if (r<6 && visited[r+1][c]==false){
            pathlength+=1;
            dfs(r+1,c);
            pathlength-=1;
        }
    }
    else{
        if (c>0 && r>0 && visited[r][c-1]==false){
            pathlength+=1;
            dfs(r,c-1);
            pathlength-=1;
        }
    }
    visited[r][c]=false;
}
int main()
{
 cin >> s;
 dfs(0,0);
 cout << ways;   
}
