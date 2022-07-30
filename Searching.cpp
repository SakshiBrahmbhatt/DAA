#include<iostream>
using namespace std;
#define Max 30
class Searching
{
    int a[Max],i,n,temp,mid;
    public:
    Searching()
    {
        cout<<"Enter how many no. you want in array:";
        cin>>n;
        cout<<"Enter "<<n<<" no. in sorted manner:";
        for(i=0;i<n;i++)
        cin>>a[i];
    }
    void Sequential()
    {
        cout<<"Which no. you want from array:";
        cin>>temp;
        for(i=0;i<n;i++)
        {
            if(a[i]==temp)
            cout<<"No. "<<temp<<" is at position "<<i+1<<endl;
        }
    }
    void binary()
    {
        mid=n/2;
        cout<<"Which no. you want from array:";
        cin>>temp;
        if(temp<mid)
        {
            for(i=0;i<mid;i++)
            if(a[i]==temp)
            cout<<"No. "<<temp<<" is at position "<<i+1<<endl;
        }
        else if(temp>a[mid])
        {
            for(i=mid+1;i<n;i++)
            if(a[i]==temp)
            cout<<"No. "<<temp<<" is at position "<<i+1<<endl;
        }
        else
        cout<<"No. "<<temp<<" is at position "<<mid<<endl;
    }
};
int main()
{
    Searching s;
    s.Sequential();
    s.binary();
    return 0;
}