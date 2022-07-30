#include<iostream>
using namespace std;
#define Max 30
class Searching
{
    int a[Max],i,j,n,temp;
    public:
    Searching()
    {
        cout<<"Enter how many no. you want in array:";
        cin>>n;
        cout<<"Enter "<<n<<" no.";
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
            cout<<"No. "<<temp<<" is at position "<<i+1;
        }
    }
};
int main()
{
    Searching s;
    s.Sequential();
    return 0;
}