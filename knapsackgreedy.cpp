#include<iostream>
#include<vector>
using namespace std;
#define Max 10
#define W 16
class Knapsack{
    int n,i,j;
    float d[Max],w[Max],v[Max],temp;
    public:
    Knapsack()
    {
        int cw=0;
        float m=0,k=0;
        cout<<"How many no. you want to enter?:";
        cin>>n;
        cout<<"Enter "<<n<<" elements weight one by one"<<endl;
        for(i=0;i<n;i++)
        cin>>w[i];
        cout<<endl<<"Enter "<<n<<" element value one by one"<<endl;
        for(i=0;i<n;i++)
        cin>>v[i];
        for(i=0;i<n;i++)
        d[i]=(float)(v[i]/w[i]);
        //Arranging according to density
        cout<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(d[i]>d[j])
                {
                    temp=d[i];
                    d[i]=d[j];
                    d[j]=temp;
                    temp=w[i];
                    w[i]=w[j];
                    w[j]=temp;
                    temp=v[i];
                    v[i]=v[j];
                    v[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<w[i]<<"\t"<<v[i]<<"\t"<<d[i]<<endl;
        }
        for(i=0;i<n;i++)
        {
            if(cw+w[i]<=W)
            {
                cw+=w[i];
                m+=v[i];
            }
            else
            {
                k=W-cw;
                cw+=k;
                m+=(k*d[i]);
            }
        }
        cout<<endl<<"Total profit = "<<m;
    }
};
int main()
{
    Knapsack k;
    return 0;
}