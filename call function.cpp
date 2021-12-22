#include<iostream>

using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap1(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap2(int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


}

int main()
{
    int a,b, ch;
    cout<<"enter the two numbers a and b"<<a<<b;
    cin>>a>>b;
    cout<<"choice 1 for call by reference"<<endl;
        cout<<"choice 2 for call by value"<<endl;
            cout<<"choice 3 for call by address"<<endl;
    cout<<"enter the choice";
    cin>>ch;
    switch(ch)
    {
      case 1:cout<<"call by reference"<<endl;
    swap(a, b);  // passing value to function
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    break;
    case 2:cout<<"call by value"<<endl;
    swap1(a, b);  // passing value to function
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    break;
    case 3: cout<<"call by address";
    swap2(&a,&b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    break;
     default: cout<<" NO ANY FUNCTION";
    }


    return 0;
}

