#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}

// Function to convert decimal to octal
string decimalToOctal(int num) {
    string octal = "";
    while (num > 0) {
        octal = to_string(num % 8) + octal;
        num /= 8;
    }
    return octal;
}

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int num) {
    string hex = "";
    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10)
            hex = to_string(remainder) + hex;
        else
            hex = char('A' + remainder - 10) + hex;
        num /= 16;
    }
    return hex;
}

// Function to convert decimal to Roman numeral
string decimalToRoman(int num) {
    string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; num > 0; i++) {
        while (num >= values[i]) {
            roman += numerals[i];
            num -= values[i];
        }
    }
    return roman;
}

// Function to convert decimal to BCD (Binary Coded Decimal)
string decimalToBCD(int num) {
    string bcd = "";
    while (num > 0) {
        bcd = decimalToBinary(num % 10) + bcd;
        num /= 10;
    }
    return bcd;
}

int main() {
    int num;
    string fromBase, toBase;

    cout << "Enter the type of number to convert (decimal, binary, octal, hexadecimal, roman, bcd): ";
    cin >> fromBase;

    cout << "Enter the type of number to convert into (decimal, binary, octal, hexadecimal, roman, bcd): ";
    cin >> toBase;

    cout << "Enter the number to convert: ";
    cin >> num;

    string result;

    if (fromBase == "decimal") {
        if (toBase == "binary") {
            result = decimalToBinary(num);
        } else if (toBase == "octal") {
            result = decimalToOctal(num);
        } else if (toBase == "hexadecimal") {
            result = decimalToHexadecimal(num);
        } else if (toBase == "roman") {
            result = decimalToRoman(num);
        } else if (toBase == "bcd") {
            result = decimalToBCD(num);
        } else {
            result = to_string(num); // No conversion needed
        }
    } else if (fromBase == "binary") {
        if (toBase == "decimal") {
            // Add code to convert from binary to decimal
            // result = ...
        } else {
            cout << "Unsupported output base for binary input." << endl;
            return 1;
        }
    } else if (fromBase == "octal") {
        if (toBase == "decimal") {
            // Add code to convert from octal to decimal
            // result = ...
        } else {
            cout << "Unsupported output base for octal input." << endl;
            return 1;
        }
    } else if (fromBase == "hexadecimal") {
        if (toBase == "decimal") {
            // Add code to convert from hexadecimal to decimal
            // result = ...
        } else {
            cout << "Unsupported output base for hexadecimal input." << endl;
            return 1;
        }
    } else if (fromBase == "roman") {
        cout << "Unsupported input base for Roman numerals." << endl;
        return 1;
    } else if (fromBase == "bcd") {
        cout << "Unsupported input base for BCD." << endl;
        return 1;
    } else {
        cout << "Unsupported input base." << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

