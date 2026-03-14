#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    cout << "Assignment Operators:" << endl;
    int x = a;       
    x += b;          
    cout << "x += b : " << x << endl;

    x -= b;          
    cout << "x -= b : " << x << endl;

    x *= b;         
    cout << "x *= b : " << x << endl;

    x /= b;         
    cout << "x /= b : " << x << endl;

    
    cout << "\nLogical Operators:" << endl;
    cout << "(a > b && b > 0) : " << (a > b && b > 0) << endl;
    cout << "(a < b || b > 0) : " << (a < b || b > 0) << endl;
    cout << "!(a == b) : " << !(a == b) << endl;

    
    cout << "\nUnary Operators:" << endl;
    int c = 5;
    cout << "c = " << c << endl;
    cout << "++c = " << ++c << endl;  
    cout << "c++ = " << c++ << endl;  
    cout << "--c = " << --c << endl;  
    cout << "c-- = " << c-- << endl;  

    cout << "\nTernary Operator:" << endl;
    int max = (a > b) ? a : b;
    cout << "Maximum number is: " << max << endl;

    return 0;
} 
