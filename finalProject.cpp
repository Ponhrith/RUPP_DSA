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
    int choice;
    do {
        int shift;
        string message;

        cout << "Encryption and Decryption Program" << endl;
        cout << "--------------------------------" << endl;

        // User choice
        cout << "Click (1) to decrypt, (2) to encrypt: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character

        // Input
        cout << "Enter a message: ";
        getline(cin, message);

        cout << "Enter a shift value (1-25): ";
        cin >> shift;

        // Ensure the shift value is within the valid range
        shift = max(1, min(25, shift));

        // Create the CaesarCipher instance
        CaesarCipher cipher(shift);

        if (choice == 1) {
            // Decryption
            string decryptedMessage = cipher.decrypt(message);
            cout << "Decrypted Message: " << decryptedMessage << endl;
        } else if (choice == 2) {
            // Encryption
            string encryptedMessage = cipher.encrypt(message);
            cout << "Encrypted Message: " << encryptedMessage << endl;
        } else {
            cout << "Invalid choice. Please choose (1) for decryption or (2) for encryption." << endl;
        }

        // Prompt user to restart
        cout << "Do you want to start again? (1 for Yes, 0 for No): ";
        cin >> choice;

    } while (choice == 1);

    return 0;
}
