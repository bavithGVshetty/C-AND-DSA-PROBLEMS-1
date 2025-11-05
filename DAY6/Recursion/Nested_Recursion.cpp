#include<iostream>

using namespace std;
int nestedR(int n){
    if(n>100){
        return n-10;
    }
return nestedR(nestedR(n+11));
}

int main(){
    cout<<"Nested Recursion result for 91: "<<nestedR(91)<<endl;
}