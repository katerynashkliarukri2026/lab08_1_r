#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "Number of groups: " << Count(str, 0) << endl;

    char* dest = new char[101];

    Change(dest, str, 0, 0);

    cout << "Modified string: " << dest << endl;

    delete[] dest;

    return 0;
}