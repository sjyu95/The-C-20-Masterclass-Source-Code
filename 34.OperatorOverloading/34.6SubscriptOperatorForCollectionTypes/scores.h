#ifndef SCORES_H
#define SCORES_H

#include <cassert>
#include <string>

const int SCORE_SIZE{20};

class Scores{
public:
    Scores() = default;
    Scores(std::string_view subject) : m_subject{subject} {}

    double operator[](size_t index) const {
        assert(index >= 0 && index < SCORE_SIZE);
        return m_scores[index];
    }
    double& operator[](size_t index) {
        assert(index >= 0 && index < SCORE_SIZE);
        return m_scores[index];
    }

    void Print() const;

private:
    std::string m_subject;
    double m_scores[SCORE_SIZE]{};
};

#endif