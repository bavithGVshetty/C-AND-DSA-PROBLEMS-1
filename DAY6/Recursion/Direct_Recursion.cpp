#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n=5;
    int output=factorial(n);
    
    cout<<"The factorial using recurision:"<<output<<endl;
}