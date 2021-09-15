//
// Created by Colton Crapo on 9/13/21.
//

#include "FactsAutomaton.h"

void FactsAutomaton::S0(const std::string& input) {
    if (input[index] == 'F') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        serr();
    }
}

void FactsAutomaton::S1(const std::string& input) {
    if (input[index] == 'a') {
        inputRead++;
        index++;
        S2(input);
    }
    else {
        serr();
    }
}

void FactsAutomaton::S2(const std::string& input) {
    if (input[index] == 'c') {
        inputRead++;
        index++;
        S3(input);
    }
    else {
        serr();
    }
}

void FactsAutomaton::S3(const std::string& input) {
    if (input[index] == 't') {
        inputRead++;
        index++;
        S4(input);
    }
    else {
        serr();
    }
}

void FactsAutomaton::S4(const std::string& input) {
    if (input[index] == 's') {
        inputRead++;
    }
    else {
        serr();
    }
}