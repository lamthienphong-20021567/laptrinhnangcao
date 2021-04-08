#include<iostream>
using namespace std;
/* a:int main( )
{
 char a[4] = "abc";
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}*/
/*b:int main( )
{
 int a[4] = {1,2,3,4};int *cp;
 cp = a;
 for (int i=0;i<4;i++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 *cp++;
 }
 return 0;
}*/
/* c:int main( )
{
 double a[4] = {1.2,3.4,7.8,3.8};
 double *cp = &a[0];
 for (int i=0;i<4;i++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 cp++;
}
 return 0;
}*/
int main( )
{
 double a[4] = {1.2,3.4,7.8,3.8};
 double *cp = &a[0];
 for (int i=0;i<4;i++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 cp+=2;
}
 return 0;
}


