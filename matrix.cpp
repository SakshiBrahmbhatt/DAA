#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Matrix{
    public:
    Matrix()
    {
        int i,j,k,n,m,l;
        cout<<"Enter how many array are their:";
        cin>>n;
        char arr[n+n],d[n];
        cout<<"Enter matrix one by one:";
        for(i=0;i<n;i++)
        cin>>arr[i];
        for(i=0;i<=n;i++)
        {
            cout<<"enter the dimension "<<i<<" :";
            cin>>d[i];
        }
        int a[n+1][n+1],v[n+1],u,o[n+1][n+1],q[n+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i>=j)
                {
                    a[i][j]=0;
                    o[i][j]=0;
                }
                 else if(i<j)
                {
                    u=0;
                    for(k=i;k<j;k++)
                    {
                        q[u]= a[i][k]+a[k+1][j]+(arr[i-1]*arr[k]*arr[j]);
                        v[u]=k;
                        u++;
                    }
                    int min=q[0],mink=v[0];
                    for(int op=0;op<u;op++)
                    {
                        if(q[op]<min)
                        {
                            min=q[op];
                            mink=v[op];
                        }
                    }
                    a[i][j]=min;
                    o[i][j]=mink;
                }
            }
        }
        cout<<endl<<"Table"<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl<<"k Table"<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<o[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Matrix m;
    return 0;
}