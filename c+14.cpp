#include<iostream>
using namespace std;


// factorial factorial............



int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;

    }   
    return factorial;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;;
    return 0;
}