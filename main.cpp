#include <iostream>
using namespace std;

void display(int && var)
{
    cout<<"Inside Rvalue ref: "<<2*var<<endl;
}

void display(int & var)
{
    cout<<"Inside Lvalue ref: "<<3*var<<endl;
}

template<typename T>
void commonDisplay(T&& param)
{
    //display(static_cast<T&&>(param));
    display(std::forward<T>(param));
}

int main()
{
   int val=10;
   commonDisplay(val);
   commonDisplay(50);


   return 0;
}
