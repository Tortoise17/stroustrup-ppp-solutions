/* The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a
loop to write out a table of characters with their corresponding
integer values: */

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while(i < 26) {
        cout << char('a' + i) << "\t" << int('a' + i) << "\n";
        i++;
    }
}