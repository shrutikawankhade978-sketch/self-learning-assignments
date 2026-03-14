#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void add(int &c, int &d){

    int sum= c+d;
    cout << "Sum = " << sum << endl;
}

int main()
{   int  g= 10, h= 20;
    add(g, h);   
    int x = 10, y = 20;
    cout << "Before Swap: " << x << " " << y << endl;
    swap(x, y);   
    cout << "After Swap: " << x << " " << y << endl;
    return 0;
}