#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt {
public:
    char operator() (const char& ch) {
        return static_cast<char>(ch + 3);
    }
};

#endif