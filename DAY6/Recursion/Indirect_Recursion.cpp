#include<iostream>
using namespace std;
void funA(int n);
void funB(int n){
    if(n>=0){
        cout<<"B: "<<n<<endl;
    }
    if(n==0){
        return;
    }

    funA(n-1);
}
void funA(int n){
    // Base case
    if(n>0){
        cout<<"A: "<<n<<endl;
    }
    if(n==0){
        return;
    }
    // Recursive case
    funB(n/2);
}

int main(){
    funA(10);
    return 0;
}