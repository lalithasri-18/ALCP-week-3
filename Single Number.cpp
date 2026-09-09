#include <iostream>
using namespace std;
int main()
{
    int n,a[100],result=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        result=result^a[i];
    cout<<"Single Number = "<<result;
    return 0;
}
