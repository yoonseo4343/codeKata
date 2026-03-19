#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n=(to_string(b)).length();
    cout<<a+b-c<<endl;
    cout<<a*(int)pow(10,n)+b-c;
    return 0;
}