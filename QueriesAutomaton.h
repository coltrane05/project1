//
// Created by Colton Crapo on 9/15/21.
//

#ifndef PROJECT1_QUERIESAUTOMATON_H
#define PROJECT1_QUERIESAUTOMATON_H

#include "Automaton.h"

class QueriesAutomaton : public Automaton {
private:
    S1(const std::string& input);
    S2(const std::string& input);
    S3(const std::string& input);
    S4(const std::string& input);
    S5(const std::string& input);
    S6(const std::string& input);

public:
    QueriesAutomaton() : Automaton(TokenType::QUERIES) {}

    void S0(const std::string& input);
};
#endif //PROJECT1_QUERIESAUTOMATON_H
