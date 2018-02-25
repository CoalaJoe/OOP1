#include<iostream>

using namespace std;

int main()
{
    float *f1, f2, f3(1), *f4;
    f2 = 23;
    float &f5 = f2;
    f1 = &f5;
    *f1 = 5;
    f1 = NULL;
    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << endl;
    f4 = f1 = &f2;
    *f1 = 23;
    f4 = &f3;
    f3 = 17;
    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << endl;
    cout << "f3: " << f3 << endl;
    cout << "++*f4: " << ++*f4 << endl;
    return 0;
}

/*
    float *f1, f2, f3(1), *f4;          || f3 = 1
    f2 = 23;                            || f2 = 23
    float &f5 = f2;                     || f5 = &f2
    f1 = &f5;                           || f1 = &f5(f2) = 23
    *f1 = 5;                            || f2 = 5
    f1 = NULL;                          || f1 = null
    cout << "f1: " << f1 << endl;       || Should print null
    cout << "f2: " << f2 << endl;       || Should print 5
    f4 = f1 = &f2;                      || f4 = f1 = &f2
    *f1 = 23;                           || f4, f1, f2 = 23
    f4 = &f3;                           || f4 = &f3
    f3 = 17;                            || f4, f3 = 17
    cout << "f1: " << f1 << endl;       || Should print a memory address
    cout << "f2: " << f2 << endl;       || Should print 23
    cout << "f3: " << f3 << endl;       || Should print 17
    cout << "++*f4: " << ++*f4 << endl; || Should print 18
    return 0;
*/
