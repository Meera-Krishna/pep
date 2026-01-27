#include <iostream>
using namespace std;
int main(){
    int mark1,mark2,mark3;
    cin>>mark1;
    cin>>mark2;
    cin>>mark3;
    double avg=(mark1+mark2+mark3)/3.0;
    //or we can use double avg=(double)((mark1+mark2+mark3)/3);
    cout<<avg;
}