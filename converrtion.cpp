#include<bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    string num;

    cout << "1. Binary\n2. Octal\n3. Decimal\n4. Hexadecimal\n";
    cout << "Enter source base: ";
    cin >> choice;
    cout << "Enter number: ";
    cin >> num;
    int decimal;
    if (choice == 1)
        decimal = stoi(num, 0, 2);
    else if (choice == 2)
        decimal = stoi(num, 0, 8);
    else if (choice == 3)
        decimal = stoi(num);
    else if (choice == 4)
        decimal = stoi(num, 0, 16);
    else {
        cout << "Invalid Choice";
        return 0;
    }
    cout << "\nDecimal     : " << decimal << endl;
    cout << "Binary      : " << bitset<16>(decimal) << endl;

    cout << "Octal       : " << oct << decimal << endl;
    cout << "Hexadecimal : " << uppercase << hex << decimal << endl;
    return 0;
}
