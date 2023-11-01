#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    string alphabet = "AEFIOUaefiouАЕЁИОУЫЭЮЯаеёиоуыэюя";
    for (int i = 0; i < s.length() + 1; i++) {
        if (alphabet.find(s[i]) != string::npos) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}