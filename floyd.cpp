#include<iostream>
using namespace std;
#define Max 5
class Floyd
{
    const int INF=1e2;
    public:
    Floyd()
    {
        int a0[Max][Max],a1[Max][Max],a2[Max][Max],a3[Max][Max],a4[Max][Max],i,j;
        a0[1][1]=0; a0[1][2]=5; a0[1][3]=INF; a0[1][4]=8;
        a0[2][1]=3; a0[2][2]=0; a0[2][3]=2; a0[2][4]=6; 
        a0[3][1]=INF; a0[3][2]=1; a0[3][3]=0; a0[3][4]=8;
        a0[4][1]=9; a0[4][2]=4; a0[4][3]=INF; a0[4][4]=0;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                a1[i][j]=min(a0[i][j],a0[i][1]+a0[1][j]);
            }
        }
        cout<<"First array"<<endl;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                cout<<a1[i][j]<<"\t";
            }
            cout<<endl;
        }
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                a2[i][j]=min(a1[i][j],a1[i][2]+a1[2][j]);
            }
        }
        cout<<"Second array"<<endl;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                cout<<a2[i][j]<<"\t";
            }
            cout<<endl;
        }
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                a3[i][j]=min(a2[i][j],a2[i][3]+a2[3][j]);
            }
        }
        cout<<"Third array"<<endl;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                cout<<a3[i][j]<<"\t";
            }
            cout<<endl;
        }
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                a4[i][j]=min(a3[i][j],a3[i][4]+a3[4][j]);
            }
        }
        cout<<"Final array"<<endl;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                cout<<a4[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
Floyd f;
return 0;
}