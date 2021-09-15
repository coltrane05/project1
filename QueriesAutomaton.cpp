//
// Created by Colton Crapo on 9/15/21.
//

#include "QueriesAutomaton.h"

void QueriesAutomaton::S0(const std::string& input) {
    if (input[index] == 'Q') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        serr();
    }
}

void QueriesAutomaton::S1(const std::string& input) {
    if (input[index] == 'u') {
        inputRead++;
        index++;
        S2(input);
    }
    else {
        serr();
    }
}

void QueriesAutomaton::S2(const std::string& input) {
    if (input[index] == 'e') {
        inputRead++;
        index++;
        S3(input);
    }
    else {
        serr();
    }
}

void QueriesAutomaton::S3(const std::string& input) {
    if (input[index] == 'r') {
        inputRead++;
        index++;
        S4(input);
    }
    else {
        serr();
    }
}

void QueriesAutomaton::S4(const std::string& input) {
    if (input[index] == 'i') {
        inputRead++;
        index++;
        S5(input);
    }
    else {
        serr();
    }
}

void QueriesAutomaton::S5(const std::string& input) {
    if (input[index] == 'e') {
        inputRead++;
        index++;
        S6(input);
    }
    else {
        serr();
    }
}

void QueriesAutomaton::S6(const std::string& input) {
    if (input[index] == 's') {
        inputRead++;
    }
    else {
        serr();
    }
}