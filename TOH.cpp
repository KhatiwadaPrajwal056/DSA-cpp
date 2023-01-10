// Tower of hanoi using recursion
#include<iostream>
using namespace std;
void toh(int n,char src,char temp,char dest){
    if(n==1){
        cout<<"Moved disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    }
    else{
        toh(n-1,src,dest,temp);
        cout<<"Moved disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        toh(n-1,temp,src,dest);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of disk:";
    cin>>n;
    toh(n,'a','b','c');
    return 0 ;
}