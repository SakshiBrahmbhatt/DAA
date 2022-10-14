#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
class Knapsack{
    public:
    Knapsack()
    {
        int i,j,n,W;
        cout<<"How many items you want to enter in sack?:";
        cin>>n;
        cout<<"Enter maximum capacity of sack:";
        cin>>W;
        int w[n],p[n];
        int v[n+1][W+1];
        cout<<"Enter "<<n<<" items weight:";
        for(i=0;i<n;i++)
        cin>>w[i];
        cout<<"Enter "<<n<<" items profit:";
        for(i=0;i<n;i++)
        cin>>p[i];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=W;j++)
            {
                if(i==0 || j==0)
                {
                    v[i][j]=0;
                }
                else if(j>=w[i-1])
                {
                    v[i][j]=max(v[i-1][j],p[i-1]+v[i-1][j-w[i-1]]);
                }
                else
                v[i][j]=v[i-1][j];
            }
        }
        cout<<endl<<"Table"<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<w[i-1]<<","<<p[i-1]<<"\t";
            for(j=1;j<=W;j++)
            {
                cout<<v[i][j]<<"\t";
            }
            cout<<endl;
        }
        vector<int> m,o;
    while(n>0 && W>0)
        {  
         if(v[n][W]!=v[n-1][W])
        	{
                W-=w[n-1];
                m.push_back(p[n-1]);
                o.push_back(w[n-1]);
			}
			else
			{
                n--;
			}
        }
        cout<<"Items selected are ";
        int k=0; 
     for(i=0;i<m.size();i++)
     {
        cout<<o[i]<<",";
        k+=m[i];
     }
     cout<<endl<<"Total profit"<<k;
    }
};
int main()
{
    Knapsack k;
    return 0;
}