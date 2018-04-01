    #include<bits/stdc++.h>
    #define ll long long
    #define ull unsigned long long
    #define bug cout<<"The bug is here!!"<<endl;
    #define f first
    #define s second

    using namespace std;
    char arr[25][25];
    int vis[25][25];
    int n,cnt=0;
    bool valid(int i,int j)
    {
        return i>=0 && i<n && j>=0 && j<n;
    }
    void dfs(int i,int j)
    {
        if(vis[i][j])
            return;
        vis[i][j]=1;


        int dx[8] = {0,0,1,-1,1,-1,1,-1};
        int dy[8] = {1,-1,0,0,1,-1,-1,1};
        for(int k = 0 ; k < 8 ; ++k)
        {
            int xc = dx[k] + i;
            int yc = dy[k] + j;
            if(valid(xc,yc) && !vis[xc][yc] && arr[xc][yc] == '1')
                dfs(xc,yc);
        }
    }
    int main()
    {
        //Ayoub
        int no=1;
        while(scanf("%d",&n) != EOF)
        {
            cnt=0;
            memset(vis,0,sizeof(vis));
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    char temp;
                    cin>>temp;
                    arr[i][j]=temp;
                }
            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(!vis[i][j] && arr[i][j]=='1')
                    {
                        dfs(i,j);
                        cnt++;
                    }
                }
            }
            cout<<"Image number "<<no++<<" contains "<<cnt<<" war eagles."<<endl;

        }
        return 0;
    }

