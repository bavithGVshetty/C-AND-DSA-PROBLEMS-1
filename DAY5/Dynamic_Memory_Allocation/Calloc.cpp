#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n=5;
    int* arr=(int*)calloc(n,sizeof(int));
    // Calloc is initialized by zero

    if(arr==NULL){
        cout<<"Memory allocation Failed"<<endl;
        return 1;
    }
    cout<<"Array elements after calloc: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;

     free(arr);
     arr=nullptr;
     
     return 0;

}
// *Malloc*
// 1.single block
// 2.Garbage values initialized
// 3.* void types
// 4. Faster bcse no initialization

