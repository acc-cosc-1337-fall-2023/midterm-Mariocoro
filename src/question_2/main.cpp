#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
//get_cookie_ingredients function
vector<double> get_cookie_ingredients(int n){
    //creating a vector of double
    vector<double> a;
    // calculating the values for n cookies
    double sugar=(1.5/48)*n;
    double butter=(1.0/48)*n;
    double flour=(2.75/48)*n;
    // appending the values to the vector
    a.push_back(sugar);
    a.push_back(butter);
    a.push_back(flour);
    // returning the vector
    return a;
    }
int main(){
    float n;
    vector<double> c;
    //taking input from user
    cout<<"Enter any alphabet or 0 to quit.."<<endl;
    cout<<"Enter number of cookies:";
    cin >>n ;
    while(n){
        int p=(int)(n);
        if((n==p) && n>=1){
            // calling the function get_cookie_ingredients
            c=get_cookie_ingredients(n);
            cout<<"The following recipe produces "<<n<<" cookies:"<<endl;
            // Printing the output 
            cout<<"Cups of Sugar "<<c[0]<<endl;
            cout<<"Cups of Butter "<<c[1]<<endl;
            cout<<"Cups of Flour "<<c[2]<<endl;
            cout<<"Enter any alphabet or 0 to quit.."<<endl;
            cout<<"Enter number of cookies:";
            cin >>n ;
        }
        else{
            cout<<"Please enter integer:"<<endl;
            cin>>n;
        }
    }
    return 0;
}