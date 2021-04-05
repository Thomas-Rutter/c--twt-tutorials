#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    name = "Thomas";
    int num = 5;
    float nim = 7.6;
    bool boo = true;
    char chr = 't';
    cout << "string = " << name << endl;
    cout << "int = " << num << endl;
    cout << "float = " << nim << endl;
    cout << "bool = " << boo << endl;
    cout << "char = " << chr << endl;
    name = "Ella";
    cout << "string = " << name << endl;
    return 0;
}