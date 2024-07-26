#include <iostream>
#include <string>
#include <map>

using namespace std;

string intToRoman(int num) {
    // Define the mapping of integers to Roman numerals
    map<int, string> romanMap;
    romanMap[1] = "I";
    romanMap[4] = "IV";
    romanMap[5] = "V";
    romanMap[9] = "IX";
    romanMap[10] = "X";
    romanMap[40] = "XL";
    romanMap[50] = "L";
    romanMap[90] = "XC";
    romanMap[100] = "C";
    romanMap[400] = "CD";
    romanMap[500] = "D";
    romanMap[900] = "CM";
    romanMap[1000] = "M";

    string roman;
    // Iterate through the map and subtract the largest possible key
    // until the number is reduced to 0
    for (auto rit = romanMap.rbegin(); rit != romanMap.rend(); ++rit) {
        while (num >= rit->first) {
            roman += rit->second;
            num -= rit->first;
        }
    }
    return roman;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Roman numeral representation: " << intToRoman(num) << endl;

    return 0;
}
