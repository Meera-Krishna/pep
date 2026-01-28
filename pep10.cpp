#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    cout<<"The factors of "<<n<<" are: ";
    for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
}
cout<<"Prime factors of "<<n<<" are: ";
for(int i=0;i<arr.size();i++){
    int count=0;
    for(int j=1;j<=arr[i];j++){
        if(arr[i]%j==0){
            count++;
        }
    }
    if(count==2){
        cout<<arr[i]<<" ,";
    }

}}
