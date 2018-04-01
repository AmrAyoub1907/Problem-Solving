#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug cout<<"The bug is here!!"<<endl;
#define f first
#define s second
using namespace std;

int n,cnt=0,degree = 0;
int vis[100];
vector< vector <int> > graph;

void dfs(int node)
{
    if(vis[node])
        return;
    vis[node]=1;
    ++cnt;
    degree+=graph[node].size();
    for(int child=0; child<graph[node].size(); child++)
        if(!vis[graph[node][child]])
            dfs(graph[node][child]);

}
int main()
{
    //Ayoub
    int n,m,rem=0;
    cin>>n>>m;
    graph = vector<vector<int>>(n);
    for(int i=0; i<m; i++)
    {
        int t1,t2;
        cin>>t1>>t2;
        --t1;
        --t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            cnt=0;
            degree=0;
            dfs(i);
            if(cnt%2==1 && degree==cnt*2 ) ++rem;
        }
    }
    if( (n - rem) % 2 == 1)
        rem++;

    cout<<rem;
    return 0;
}
