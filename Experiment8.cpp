/*A Generic function for finding largest of three given numbers...*/
#include <iostream>
using namespace std;
class Generic
{
    private:
    int a, b, c;  // Data members
    public:
    Generic(int x, int y, int z)  // Parametrized Constructor
    {
        a = x; b = y; c = z;
    }
    public:
    int largest(int x, int y, int z);  // Function prototype ( declaration )
};
int main()
{
    int t1, t2, t3;
    cout << "Enter first number : ";
    cin >> t1;
    cout << "Enter second number : ";
    cin >> t2;
    cout << "Enter third number : ";
    cin >> t3;
    Generic object(t1, t2, t3); // object creation with parametrized constructor
    int lar = object.largest(t1, t2, t3);  // Method calling
    cout << "The largest number is : " << lar << endl;
}
int Generic::largest(int x, int y, int z)  // Function definition
{
    int temp = 0;
    if (x >= y)
    {
        if (x >= z)
            temp = x;
        else
            temp = z;
    }
    if (y >= z)
    {
        if (y >= x)
            temp = y;
        else
            temp = x;
    }
    if (z >= x)
    {
        if (z >= y)
            temp = z;
        else
            temp = y;
    }
    return temp;
}