#include<iostream>
using namespace std;
int findways(int n)
{
    if(n<0)
    return 0;
    if(n==0)
    return 1;
int small_operation = findways(n-1) + findways(n-2);
return small_operation;
    
}
int main()
{
    int n = 10;
    cout<<"No of ways : "<<findways(n)<<endl;
 return 0;   
}