#include<iostream>
#include<queue>
using namespace std;
// Implementaion of function
int kthSmallElement(int arr[],int n,int k){
    priority_queue<int> mpq;
    for(int i=0;i<n;i++){
        mpq.push(arr[i]);
        if(mpq.size()>k){//Remove largest if >k
            mpq.pop();
        }
        return mpq.top();
    }



return 0;
}

int main(){
    int arr[]={3,2,1,5,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;

    int result=kthSmallElement(arr,n,k);


}