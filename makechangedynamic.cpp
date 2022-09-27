#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
 #define Max 15
class changeMaking
{ 
    public:
    changeMaking()
    {
    	vector<int> v;
      int i,j,m;
      int x,y;
      int n,sum;
    cout<<"Enter the amount whose change is required"<<endl;
    cin>>sum;
 
    cout<<"Enter the number of coins available"<<endl;
    cin>>n;
 
    int coin[n];
 
    cout<<"Enter the values of coins"<<endl;
    for(i=0;i<n;i++)
        cin>>coin[i];
 
    cout<<"The least number of coins whose sum is equal to required sum is"<<endl;
   int dp[n+1][sum+1];
    for(j=0;j<=sum;j++)
        dp[0][j]=INT_MAX;
    for(i=1;i<=n;i++)
        dp[i][0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(j>=coin[i-1])
            {
                x=dp[i-1][j];
                y=1+dp[i][j-coin[i-1]];
                dp[i][j]=min(x,y);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    
    }
    for(i=1;i<=n;i++)
    {
        cout<<coin[i-1]<<"\t";
        for(j=0;j<=sum;j++)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }   
        while(n!=0||sum!=0)
        {
        	if(dp[n][sum]==dp[n-1][sum])
        	{
        		n--;
                continue;
			}
			else
			{
				sum-=coin[n];
				v.push_back(coin[n]);
                continue;
			}
		}
     for(i=0;i<v.size();i++)
    cout<<v[i];
    }
    
};
 
int main()
{
    changeMaking c;
    return 0;
}