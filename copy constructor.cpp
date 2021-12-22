#include<iostream>
using namespace std;
class Sample
{
    int x, y;
    public:
    Sample(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Sampl(const Sample &cpy)
    {
        x = cpy.x;
        y = cpy.y;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{  int p,q;
  cout<< "enter two number; "<<endl;
  cin>>p>>q;
    Sample obj1(p, q);
    Sample obj2 = obj1;
    cout<<"Copy constructor : ";
    obj2.display();
    return 0;
}
