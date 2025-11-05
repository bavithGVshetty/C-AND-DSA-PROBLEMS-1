#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
    int n=3;
    int *arr=(int*) malloc(n*sizeof(int));
    cout<<"Original array input: ";
    for(int i=0;i<n;i++){
       arr[i]=i+1;
    }
    cout<<"Original array output: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  
    arr=(int*) realloc(arr,5*sizeof(int));
    arr[3]=4;
    arr[4]=5;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }



}