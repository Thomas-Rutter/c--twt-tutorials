#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 8;
    int y = 9;
    float a = 8;
    cout << "Addition " << x + y << endl;
    cout << "Subtraction " << x - y << endl;
    cout << "Multiple " << x * y << endl;
    cout << "Divide " << a / y << endl;
    cout << "Modulo " << x % y << endl;
    int count = 3;
    int i;
    for (int i = 0; i < count; ++i)
    {
        x++;
        cout << "Iteration " << x << endl;
    }
}

/*
+
-
/
*
++
--
*/

