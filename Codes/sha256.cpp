#include <iostream>
#include <openssl/sha.h>
#include <cstring>

string sha256(const std::string str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.length());
    SHA256_Final(hash, &sha256);

    string hashStr = "";
    char hex[3];
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        sprintf(hex, "%02x", hash[i]);
        hashStr += hex;
    }
    return hashStr;
}

int main() {
    string userData = "user_data_to_hash";
    string hashedData = sha256(userData);
    cout << "Original Data: " << userData << endl;
    cout << "SHA-256 Hash: " << hashedData << endl;
    return 0;
}
