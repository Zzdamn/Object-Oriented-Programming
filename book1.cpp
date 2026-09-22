#include <windows.h>
#include "Book.h"
#include <iostream>

using namespace std;

int main()
{
    // Ensure console uses UTF-8 for output
    SetConsoleOutputCP(CP_UTF8);

    Book bk;
    bk.initData("C++ Programming Basics", "1145141919810", "Publisher", 11.4, 514, true);
    bk.print();
    if (bk.verifyIsbn()) {
        cout << "ISBN check passed" << endl;
    }
    else {
        cout << "Invalid ISBN" << endl;
    }
    return 0;
}
