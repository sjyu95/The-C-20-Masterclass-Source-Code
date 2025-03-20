#include <iostream>
#include "scores.h"

void Scores::Print() const {
    std::cout << m_subject << " : [ ";

    for (size_t i{}; i < SCORE_SIZE; i++) {
        std::cout << m_scores[i] << ", ";
    }

    std::cout << " ]" << std::endl;
}