#include<iostream>
using namespace std;
#define Max 30
class Heap
{
    public:
void heapify(int arr[], int n, int i)
{
int largest = i;
int l = 2 * i + 1;
int r = 2 * i + 2;
if (l < n && arr[l] > arr[largest])
largest = l;
if (r < n && arr[r] > arr[largest])
largest = r;
if (largest != i) {
swap(arr[i], arr[largest]);
heapify(arr, n, largest);
}
}
void heapSort(int arr[], int n)
{
for (int i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
for (int i = n - 1; i >= 0; i--)
{
swap(arr[0], arr[i]);
heapify(arr, i, 0);
}
}
void printArray(int arr[], int n)
{
for (int i = 0; i < n; ++i)
cout << arr[i] << " ";
cout << "\n";
}
};
int main()
{
int n,i;
cout<<"Enter how many no. you want to enter:";
cin>>n;
int arr[n];
cout<<"Enter "<<n<<" no.:";
for(i=0;i<n;i++)
cin>>arr[i];
Heap h;
h.heapSort(arr, n);
cout << "Sorted array is \n";
h.printArray(arr, n);
}