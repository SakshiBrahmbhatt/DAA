#include<iostream>
using namespace std;
class Lcs{
    public:
    Lcs(){
        int n,m,i,j,k;
        cout<<"Enter how many element are their in 1st Subsequence?:";
        cin>>n;
        cout<<"Enter how many element are their in 2nd Subsequence?:";
        cin>>m;
        char a[n+1],b[m+1],ans[n+1];
        int v[n+1][m+1];
        cout<<"Enter "<<n<<" Character of 1st subsequence:";
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"Enter "<<m<<" Character of 2nd subsequence:";
        for(i=0;i<m;i++)
        cin>>b[i];
        for(i=1;i<=n;i++)
        {
            v[0][0]=0;
            v[i][0]=0;
            for(j=1;j<=m;j++)
            {
                v[0][j]=0;
                if(a[i-1]==b[j-1])
                v[i][j]=1+v[i-1][j-1];
                else if(v[i-1][j]>=v[i][j-1])
                v[i][j]=v[i-1][j];
                else v[i][j]=v[i][j-1];
            }
        }
        cout<<endl<<"Table"<<endl;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            cout<<v[i][j]<<"\t";
            cout<<endl;
        }
        k=0;
        while(n>0 && m>0)
        {
            if(b[m-1]==a[n-1])
            {
                n--;
                m--;
                ans[k]=b[m];
                k++;
            }
            else
            {
                int temp1,temp2;
                temp1=v[n-1][m];
                temp2=v[n][m-1] ;
                if(temp1>temp2) n--;
                else m--;
            }
            if(n==0 && m==0)
            break;
        }
        cout<<"Longest Common Subsequence :";
        for(i=k-1;i>=0;i--)
            cout<<ans[i]<<"\t";
    }
    
};
int main()
{
    Lcs l;
    return 0;
}