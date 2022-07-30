#include<iostream>
using namespace std;
#define Max 30
class Bubble
{
    int a[Max],i,j,temp,n;
    public:
Bubble()
{
     cout<<endl<<"Enter how many no. you want to enter inside the array? ";
     cin>>n;
     cout<<endl<<"Enter "<<n<<" numbers:";
     for(i=0;i<n;i++)
     cin>>a[i];
}
void sorting()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting is:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<",";
}
};
int main()
{
    Bubble b1;
    b1.sorting();
    return 0;
}