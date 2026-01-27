#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[]={a,b,c};
    sort(arr,arr+3);
    if(arr[0]+arr[1]>arr[2]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }


}