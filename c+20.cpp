#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int Maxno=INT_MIN;
    int Minno=INT_MAX;

    for(int i=0;i<n;i++)
    {
        Maxno=max(Maxno,arr[i]);
        Minno=min(Minno,arr[i]); 
    }

    cout<<Maxno<<"  "<<Minno;
    return 0;
}