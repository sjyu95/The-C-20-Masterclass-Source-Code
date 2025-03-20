#include "scores.h"

int main(int argc, char** argv) {
    Scores math{"math"};
    math.Print();

    for (size_t i{}; i < SCORE_SIZE; i++) {
        if (i == 0) {
            math[i] = 80.0;
        } else {
            math[i] = math[i-1] + 0.76;
        }
    }
    math.Print();

    const Scores english{"english"};
    english.Print();
    // english[0] = 100;

    return 0;
}