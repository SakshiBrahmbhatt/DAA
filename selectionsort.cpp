#include<iostream>
using namespace std;
#define Max 30
class Selection
{
   int a[Max],i,j,n,temp;
   public:
   Selection()
   {
   	cout<<"Enter how many no. you want to enter?:";
   	cin>>n;
   	cout<<"Enter "<<n<<" no.:";
   	for(i=0;i<n;i++)
   	cin>>a[i];
	   }	
	void sorting()
	{
	  for(i=0;i<n;i++)
	  {
	  	for(j=i;j<n;j++)
	  	{
	  		if(a[j]<a[i])
	  		{
	  			temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted array:"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<","; 	
	}
};
int main()
{
	Selection s;
	s.sorting();
	return 0;
}