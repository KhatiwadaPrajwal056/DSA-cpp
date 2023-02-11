#include<iostream>
using namespace std;
unsigned long long *memo;

unsigned long long fibo(unsigned long long n){
    // unsigned long long *memo;
    if (n==1 || n==2 ){
        return n-1;
    }
    if(memo[n]!= -1){
        return memo[n];
    }
    else{
        long long result=fibo(n-1)+fibo(n-2);
        memo[n]=result;
        return result;
    }
}

int main()
{
    long long n;
    cout<<"ENter number of term:";
    cin>>n;
    memo= new unsigned long long;
    // memo = (unsigned long long*)malloc(sizeof(unsigned long long)*n);
    for (int i=0;i<n;i++){
        memo[i]=-1;
    }
    cout<<fibo(n-1)<<endl;
    return 0 ;
}