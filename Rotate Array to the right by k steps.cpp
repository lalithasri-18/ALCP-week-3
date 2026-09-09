#include <iostream>
using namespace std;
void reverseArray(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
int main()
{
    int n,k,a[100];
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter number of rotations: ";
    cin>>k;
    k=k%n;
    reverseArray(a,0,n-1);
    reverseArray(a,0,k-1);
    reverseArray(a,k,n-1);
    cout<<"Rotated Array: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
