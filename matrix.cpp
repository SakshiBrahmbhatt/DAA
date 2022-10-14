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
        char arr[n+n];
        int d[n+1];
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
                a[i][j]=0;
                o[i][j]=0;
            }
        }
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=n;j++)
            {
                 if(i<j)
                {
                    u=0;
                    for(k=i;k<j;k++)
                    {
                        q[u]= a[i][k]+a[k+1][j]+(d[i-1]*d[k]*d[j]);
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
        l=n;
        u=l+1;
        while(l>0)
        {
            if(o[1][l]==o[1][l-1])
            {
                l--;
            }
            else
            {
                for(i=u+2;i>=l;i--)
                {
                    arr[i]=arr[i-2];
                }
                u++;    
                u++;
                arr[l-1]=')';
                arr[l]='(';
                l--;
            }
        }
            arr[u-1]=')';
            cout<<"\nAns\n";
            for(i=0;i<u;i++)
            {
                cout<<"\t"<<arr[i];
            }
            cout<<"\nTotal multiplication required: "<<a[1][n];
    }

};
int main()
{
    Matrix m;
    return 0;
}