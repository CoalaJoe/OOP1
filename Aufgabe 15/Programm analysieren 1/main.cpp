#include<iostream>

using namespace std;

int main()
{
    int a(6), b(2);
    int *pa, *pb;
    pa = &a;
    *pa += 1;
    cout << "a = ? " << a << endl;
    pb = &b;
    *pb = *pb * *pa;
    b = b++ + ++a;
    cout << "b = ? " << b << endl;
    return 0;
}


/*
    int a(6), b(2);
    int *pa, *pb;
    pa = &a;                            || pa = 6
    *pa += 1;                           || dereference pa and add +1 to 6
    cout << "a = ? " << a << endl;      || Should print 7.
    pb = &b;                            || pb = 2
    *pb = *pb * *pa;                    || dereference pb and set it equal to pb * dereferenced pa. pb = 2 * 7 = 14
    b = b++ + ++a;                      || b = 14 + 7 + 1 => 22 | Add 1 to a. => 8
    cout << "b = ? " << b << endl;      || Should print 22.
    return 0;
*/
