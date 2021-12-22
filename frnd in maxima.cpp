#include<iostream>
using namespace std;
class B;
class A {
    int a;
public:
    A(int a) {
    this->a = a;
    }
    friend int max(A a, B b);
        };

class B {
    int b;

public:
    B(int b) {
    this->b = b;
    }
    friend int max(A a, B b);
         };

int max(A a, B b) {
    return (a.a > b.b ? a.a : b.b);
}
int main() {
    int p,q;
    cout<<"Enter the two number; "<<endl;
    cin>>p>>q;
    A a(p);
    B b(q);
    cout << "Greatest is : " << max(a, b);
    return 0;
}
