#include <iostream>
#include<cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // find prime or non prime number


    int n;
    cin>>n;
    
    // bool flag=0;
    int i;
    for(i=2; i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"NON-PRIME"<<endl;
            // flag=1;
            break;
        }
    }
        if(n%i!=0){
            cout<<"PRIME";
        }

    // if(flag==0){
    //     cout<<"PRIME"<<endl;
    // }
    return 0;
}