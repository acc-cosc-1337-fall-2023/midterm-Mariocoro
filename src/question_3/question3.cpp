#include<iostream>
#include "question3.h"
using namespace std;


int fact::get_factorial_sequence(int n)
{
    int ans=1;
    for (int i = 2; i <=n; i++)
    {
        ans*=i;
    }
    return ans;
}