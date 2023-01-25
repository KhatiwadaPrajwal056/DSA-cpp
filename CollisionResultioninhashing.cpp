#include<iostream>
#include</Users/khatiwadaprajwal22icloud.com/Desktop/Visual studio code/DSA C++/bits/stdc++.h>
using namespace std;
class Hash{
    int bucket;
    list<int> *table; //Pointer to an array containing bucket
    public:
        Hash(int v);
        void insertItem(int x);
        void searchItem(int x);
        int hashfunc(int x){
            return(x%bucket);
        }
        
};
Hash::Hash(int b){
    this->bucket=b;
    table=new list(int>[bucket];)
}
void Hash::insertItem(int key){
    int index=hashfunc(key);
    table[index].push_back(key);
}
void Hash::searchItem(int key){
    int index =hashfunc(key);
    list<int>::iterator i;
    int found =0;
    for(i=table[index].begin(;i!=table[index].end();i++)){
        if(*i==key){
            cout<<"Data "<<key<<" found in index "<<index<<endl;
            found=1;
        }
    }
    if(found!=1){
        cout<<"Data not in the hash table "<<endl;
    }
}
int main()
{
    int a[]=[15,11,27,8,12];
    int n = sizeof(a)/sizeof(a[0]);
    int searchitem;
    Hash h(7);
    for (int i=0;i<n;i++){
        h.insertItem(a[i]);
    }
    cout<<"Enter the item to be searched: ";
    cin>>searchitem;
    h.searchItem(searchitem);
    return 0 ;
}