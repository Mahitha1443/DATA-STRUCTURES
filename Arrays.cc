
/*Solution for how to remove elements from an array*/
#include <iostream>
using namespace std;



int main()
{
    int size =3;
    int a[3] = {1,2,3};
    int k =2;
    for(int i =0;i<3;i++)
    {
    if( a[i] == k )
    {
     while(i<size)
     {
        a[i] = a[i+1];
        i++;
    }
    size--;
    break;
    
   }
    
 }
 for(int i =0;i<size;i++)
 {
 cout << " " << a[i] <<endl; 
 }
}