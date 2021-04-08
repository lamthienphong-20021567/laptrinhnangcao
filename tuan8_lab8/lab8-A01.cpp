#include<iostream>
using namespace std;
void f(int xval)
{
 int x;
 x = xval;
 // in dia chi cua x tai dây
 cout<<&x<<endl;
}
void g(int yval)
{
 int y;
 // in dia chi cua y tai dây
 cout<<&y;
}
int main()
{
 f(7);
 g(11);
 return 0;
} 
// dia chi cua x va y la giong nhau
// vi khi truyen vao ham thi ta sao chep gia tri cuaa xval gan cho x,dia chi cua x van la dia chi cua bien trong ha,
//giong dia chi cua y
