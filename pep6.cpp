#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=10,y=50;
    int *p=&x;
    int **pp=&p;
    cout<<x<<" "<<y<<endl;
    x=15;
    cout<<x<<" "<<y<<endl;
    *p=20;
    cout<<x<<" "<<y<<endl;
    **pp=25;
    cout<<x<<" "<<y<<endl;
    p=&y;
    cout<<x<<" "<<y<<endl;
    *p=55;
    cout<<x<<" "<<y<<endl;
    **pp=60;
    cout<<x<<" "<<y<<endl;
    (*p)++;
    cout<<x<<" "<<y<<endl;
    p--; ///here we get garbage value
    cout<<x<<" "<<y<<endl;
    *pp=&x;
    cout<<x<<" "<<y<<endl;
    x=x+**pp+*p;
    cout<<x<<" "<<y<<endl;

    cin.get();
    cin.get();
    return 0;
            
    
    
}