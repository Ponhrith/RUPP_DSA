#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class CaesarCipher {
private:
    int shift;

public:
    CaesarCipher(int shift) : shift(shift) {}

    string encrypt(const string& text) {
        string result = text;

        for (char& c : result) {
            if (isalpha(c)) {
                char base = isupper(c) ? 'A' : 'a';
                c = ((c - base + shift) % 26) + base;
            }
        }

        return result;
    }

    string decrypt(const string& text) {
        CaesarCipher decryptor(26 - shift); // Create a new CaesarCipher instance with inverse shift
        return decryptor.encrypt(text);
    }
};

int main() {
    int shift;
    string message;

    cout << "Encryption and Decryption Program" << endl;
    cout << "--------------------------------" << endl;

    // Input
    cout << "Enter a message: ";
    getline(cin, message);

    cout << "Enter a shift value (1-25): ";
    cin >> shift;

    // Ensure the shift value is within the valid range
    shift = max(1, min(25, shift));

    // Create the CaesarCipher instance
    CaesarCipher cipher(shift);

    // Encryption
    string encryptedMessage = cipher.encrypt(message);
    cout << "Encrypted Message: a%b1345sed" << encryptedMessage <<"hse3%q233ksndahsehbs"<< endl;

    // Decryption
    string decryptedMessage = cipher.decrypt(encryptedMessage);
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}
