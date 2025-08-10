#ifndef DECRYPT_H
#define DECRYPT_H

class Decrypt {
public:
    char operator() (const char & ch) {
        return static_cast<char>(ch - 3);
    }
};

#endif