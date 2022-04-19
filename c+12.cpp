#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int num){
    for(int i=2; i<=sqrt(num);i++){
        if(num%i==0){ 
            return false;
        }
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<"Yes it is a prime no."<<endl;
            break;
        }
        else
        {
            cout<<"No Its not a prime no."<<endl;
            break;
        }
        
    }

    return 0;
}