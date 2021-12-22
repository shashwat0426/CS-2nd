#include<iostream>
using namespace std;
int add(int , int);
float add(float, float);
double add(double, double);

int main()
          {
              int a,b;
              float c,d;
              double e,f;
              cout <<"inter two integers";
              cin>>a>>b;
              cout <<"inter two decimal number";
              cin>>c>>d;
              cout <<"inter two double";
              cin>>e>>f;

cout<<" the sum of integers"<<add(a,b)<<endl;
cout<<" the sum of decimal"<<add(c,d)<<endl;
cout<<" the sum of double"<<add(e,f)<<endl;
   return 0;

          }

     int add(int a, int b)
     {
         return(a+b);

     }
     float add(float c,float d)
     {
         return (c+d);
     }
     double add (double e, double f)
     {
         return (e+f);
     }



