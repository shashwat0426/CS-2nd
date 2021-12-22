#include <iostream>

using namespace std;
class Type_of_functions
{
public:
    int number;
    void no_arg_no_return();
    void arg_no_return(int);
    int no_arg_return();
    int arg_return(int);
};
void Type_of_functions::no_arg_no_return()
{
    cout<<"The function number 1 doesn't accept or return any value"<<endl;
    }
void Type_of_functions:: arg_no_return(int n)
{
   cout<<"Function 2 gives the cube of number entered. number entered= "<<n<<" cube is "<<n*n*n<<endl  ;


    }
int Type_of_functions:: no_arg_return()
{
   cout<<"Function 3 give back the number entered to the main"<<endl;
    cout<<"enter a number"<<endl;
    cin>>number;
    return number;
}
int Type_of_functions::arg_return(int n)
{
    cout<<"Function 4 returns the sum of number entered= "<< n+n<<endl;
    return n+n;

}
int main()
{
    int num1,num2;
    Type_of_functions ob;
    ob.no_arg_no_return();
    cout<<"Enter a number"<<endl;
    cin>>num1;
    ob.arg_no_return(num1);
    cout<<ob.no_arg_return()<<endl;
    cout<<"enter another number"<<endl;
    cin>>num2;
    ob.arg_return(num2);
}


