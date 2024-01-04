#include<bits/stdc++.h>
using namespace std;
int INF=1e9;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,m;
    cin>>n>>m;
    int w[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    int s=1000-m;
    int dp[n+1][s+1];
    dp[0][0]=0;
    for(int i=1;i<=s;i++)
    {
        dp[0][i]=INF;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(w[i-1]<=j)
            {
              
                {
                    dp[i][j]=min(dp[i][j-w[i-1]]+1,dp[i-1][j]);
                }
            }
            else 
            {
                dp[i][j]= dp[i-1][j];
            }
        }
    }
    if(INF!=dp[n][s]) cout<<dp[n][s]<<endl;
    else cout<<"-1"<<endl;
   }
   
  return 0;

}