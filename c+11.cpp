#include <iostream>
#include<math.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    
    int sum=0;
    int original=n; 
    while(n>0){
        int lastdigit=n%10;
        sum+=(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==original){
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    cout<<original<<endl;
    cout<<sum<<endl;
    
    return 0;
}