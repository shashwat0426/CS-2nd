#include <iostream>
using namespace std;
inline int square(int s)
{
	return s*s;
}
int main()
{
    int s;
    cout<<" enter the number: "<<s;
    cin>>s;
	cout << "The square of s is: " << square(s) << "\n";
	return 0;
}

