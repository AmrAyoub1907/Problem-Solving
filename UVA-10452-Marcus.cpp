#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug cout<<"The bug is here!!"<<endl;
#define f first
#define s second
using namespace std;
char arr[25][25];
bool vis[25][25];
int n,m;
string path="IEHOVA#";
int q=0;
bool valid(int i,int j)
{
    return i>=0 && i<m && j>=0 && j<n;
}
void dfs(int i,int j)
{
    if(vis[i][j])
        return;
    vis[i][j]=1;
    
    int xc = i;
    int yc = j+1;
    if(valid(xc,yc) && !vis[xc][yc] && arr[xc][yc] == path[q])
    {
        q++;
        if(path[q]=='#')
            cout<<"right";
        else
            cout<<"right ";
        dfs(xc,yc);
    }

    xc = i-1;
    yc = j;
    if(valid(xc,yc) && !vis[xc][yc] && arr[xc][yc] == path[q])
    {
        q++;
        if(path[q]=='#')
            cout<<"forth";
        else
            cout<<"forth ";
        dfs(xc,yc);
    }

    xc = i;
    yc = j-1;
    if(valid(xc,yc) && !vis[xc][yc] && arr[xc][yc] == path[q])
    {
        q++;
        if(path[q]=='#')
            cout<<"left";
        else
            cout<<"left ";
        dfs(xc,yc);
    }
}
int main()
{
    //Ayoub
    int no;
    cin>>no;
    while(no--)
    {
        cin>>m>>n;
        int si,sj;
        memset(vis,0,sizeof(vis));
        memset(vis,0,sizeof(arr));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                char temp;
                cin>>temp;
                if(temp=='@')
                {
                    si=i;
                    sj=j;
                }
                arr[i][j]=temp;
            }
        }
        dfs(si,sj);
        q=0;
        cout<<endl;
    }
    return 0;
}

