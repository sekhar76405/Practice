#include<iostream>
using namespace std;

int add(int x, int y)
{
int z=(x+y);
return z;
}

int main()
{
int a,b;
cin>>a>>b;
int c=add(a,b);
cout<<"Addition of two number is "<<c<<endl;
return 0;
}
