#include <iostream>
using namespace std;
int area(int);
float area(float , float) ;
float area(float);
int area(int, int);
int main()
{
int s,a,b;
float r,d,h;
cout<<"enter the side of square";
cin>>s;
cout<<"enter the sides of rectangle";
cin>>a>>b;
cout<<"enter the length of triangle";
cin>>d>>h;
cout<<"enter the radius of circle";
cin>>r;

cout <<"the area of square "<<area(s) <<"\n";
cout <<" the area of rectangle" <<area(a,b) <<"\n";
cout << "the area of triangle"<<area(d,h) <<"\n" ;
cout <<"the area of circle"<< area(r)<<"\n";

}
     int area(int s)
     {
      return(s*s);
      }
int area(int a, int b)
{
    return(a*b);
}
         float area(float d, float h)
          {
             return((d*h)/2);
            }
    float area(float r)
   {
       return(3.14*r*r);
   }
