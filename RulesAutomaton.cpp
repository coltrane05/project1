//
// Created by Colton Crapo on 9/13/21.
//

#include "RulesAutomaton.h"

void RulesAutomaton::S0(const std::string& input) {
    if (input[index] == 'R') {
        indexRead++;
        index++;
        S1(input);
    }
    else {
        serr();
    }
}

void RulesAutomaton::S1(const std::string& input) {
    if (input[index] == 'u') {
        indexRead++;
        index++;
        S2(input);
    }
    else {
        serr();
    }
}

void RulesAutomaton::S2(const std::string& input) {
    if (input[index] == 'l') {
        indexRead++;
        index++;
        S3(input);
    }
    else {
        serr();
    }
}

void RulesAutomaton::S3(const std::string& input) {
    if (input[index] == 'e') {
        indexRead++;
        index++;
        S4(input);
    }
    else {
        serr();
    }
}

void RulesAutomaton::S4(const std::string& input) {
    if (input[index] == 's') {
        indexRead++;
    }
    else {
        serr();
    }
}