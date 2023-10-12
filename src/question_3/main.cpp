#include<iostream>
#include "question3.h"
using namespace std;

int main(){
    int looping=1;
    while(looping)
    {
        cout<<"Enter the number to find it's factorial: ";
        int n;
        cin>>n;
        if(n<11 &&n>0)
        {
            fact obj;
            int ans=obj.get_factorial_sequence(n);
            cout<<"Ans:"<<ans<<endl;
            cout<<"Enter 1 to continue and 0 to exit: ";
            cin>>looping;
        }
        else
            cout<<"Number must be in the range of 1 to 10"<<endl;
    }
    return 0;
}