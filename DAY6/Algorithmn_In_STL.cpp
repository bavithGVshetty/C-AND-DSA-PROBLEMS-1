#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> v;
    int n;
    v={67,63,57,413,6,6};
    // cout<<"Enter the number of elements: ";
    // cin>>n;

    // cout<<"Enter "<<n<<" Elements";
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    cout<<"Original Array"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // 1.Sort
    sort(v.begin(),v.end());
    cout<<"After sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    // 2.Reverse
    cout<<"Reversed Vector"<<endl;
    reverse(v.begin(),v.end());
     for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // Finding Max and Min using algorithmns
    // 3.Max
    cout<<"Maximum elements: "<<*max_element(v.begin(),v.end())<<endl;
    // Question:1 ->Find min element;
    cout<<"Minimum elements: "<<*min_element(v.begin(),v.end())<<endl;

    // 4.Count
    int number=6;
    cout<<"Count of: "<<number<<"="<<count(v.begin(),v.end(),number)<<endl;

    //5.Linear search using Find()
     v.push_back(50);
     v.push_back(20);
    cout<<"After adding mannually using push_back fun"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\nThe size of vector now has become: "<<v.size()<<endl;
    auto it=find(v.begin(),v.end(),50);
    if(it!=v.end()){
        cout<<"Found at index: "<<(it-v.begin())<<endl;
    }
    else{
        cout<<"Not found the value";
    }
    // 6.Binary search
    sort(v.begin(),v.end());
    bool check=binary_search(v.begin(),v.end(),20);
    if(check){
        cout<<"Element 20 found\n";
    }
    else{
        cout<<"Elements 20 not found\n";
    }
    return 0;

}