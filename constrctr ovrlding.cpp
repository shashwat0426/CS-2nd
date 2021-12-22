#include<iostream>
using namespace std;
class construct
{
public:
    float area;
    construct()
    {
        area = 0;
    }
    construct(int a, int b)
    {
        area = a * b;
    }
    void disp()
    {
        cout<< area<< endl;
    }
};

int main()
{
 int p,q;
 cout<<"enter two sides of rectangle: "<<endl;
 cin>>p>>q;
    construct o;
    construct o2( p, q);

    o.disp();
    o2.disp();
    return 1;
}
