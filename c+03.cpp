#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE   
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    // find a number is odd or even

    int a;
    cin>>a;

    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

// sum of n numbers.....
    int b;
    cin>>b;
    int sum=0;
    for(int c=1; c<=b; c++){
        sum=sum+c;
    }
    cout<<sum<<endl;

    int n;
    int d;
    cin>>d;
    cin>>n;
    while(n>d){
        cout<<"aryan"<<endl;
        d++;
    }

    int f;
    cin>>f;

    do{
        cout<<f<<endl;
        cin>>f;
    }
    while (f>0);
    
    
    return 0;
}