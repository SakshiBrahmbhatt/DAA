#include<iostream>
#include<vector>
using namespace std;
class Makechange{
    
    int i;
    vector<int> v;
    public:
    Makechange(){
    int a[]={1,2,5,10,20,50,100,500,2000};
    int n=sizeof(a)/sizeof(a[0]);
    int no;
    cout<<"Enter the no. whose change you want:";
    cin>>no;
    cout<<"Change of "<<no<<" is:";
    for(i=n-1;i>=0;i--)
    {
        while(no>=a[i])
        {
            no-=a[i];
            v.push_back(a[i]);
        }
    }  
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<",";
    }
    }
};
int main()
{
    Makechange m;
    return 0;
}