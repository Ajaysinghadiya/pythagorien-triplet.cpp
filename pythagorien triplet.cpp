#include <iostream>
using namespace std;

bool check(int a, int b, int c)//the return type is bool because we want values in only true and false
{
    int p;
    p = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);//finding the max number by using turnary opeator
    int q, r;
    if (p == a)
    {
        q = b;
        r = c;
    }
    else if (p == b)
    {
        q = a;
        r = c;
    }
    else
    {
        q = a;
        r = b;
    }
    if (p * p == ((q * q) + (r * r)))//condition for pythagorien triplet
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()//execution begins from here
{
    int x, y, z;//declaring three variables
    cout << "enter three number to check pythagorien triplet" << endl;
    cin >> x >> y >> z;//taking input
    if (check(x, y, z))//checking the true condition
    {
        cout << "it is a pythagorien triplet number" << endl;
    }
    else//for the false statement
    {
        cout << "it is not a pythagoriean triplet" << endl;
    }
    return 0;
}
