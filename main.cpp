#include <iostream>
using namespace std;

int main() {
   return 0;
   float a=0, b=0, x=0, y=0;
    cin >> a;
    cin >> b;
    cin >> x;
    cin >> y;
    float z=0;
    if(x<0 && y>0)
    {
        z= a*x - b*y;
       cout << z;
    }else if (x>=0 && y<=0)
       cout << z << endl;
    {
        z= a*x*x - b*y;
       cout << z << endl;
    }else
    {
        z=a*x + b*y*y;
       cout << z << endl;
       }
   
   
   
   
   
   
   
   
   
   
}
