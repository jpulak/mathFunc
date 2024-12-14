//convert degrees to radian to utilize cmath built-in cos/sin/tan functions and convert

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   //intitialize variables
   
   double degrees;
   double radian; // (degree)(M_PI/180)
    
   //end of intitializing variables
    
   //get degrees n convert
   
   cout << "Enter angle: ";
   cin >> degrees;
   radian = degrees * (M_PI / 180);
    
   //output trig func thro radian
    
   cout << "The cosine of " << radian << " radians, " << degrees 
   << " degrees, is approximately " << double(cos(radian)) << "." << endl;
   
   cout << "The sine of " << radian << " radians, " << degrees 
   << " degrees, is approximately " << double(sin(radian)) << "." << endl;
   
   cout << "The tangent of " << radian << " radians, " << degrees 
   << " degrees, is approximately " << double(tan(radian)) << "." << endl;
    
   return 0;
} 
