cmake_minimum_required(VERSION 3.20)
project(project1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project1
        AddAutomaton.cpp
        AddAutomaton.h
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        CommaAutomaton.cpp
        CommaAutomaton.h
        CommentAutomaton.cpp
        CommentAutomaton.h
        FactsAutomaton.cpp
        FactsAutomaton.h
        IdAutomaton.cpp
        IdAutomaton.h
        LeftParenAutomaton.cpp
        LeftParenAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        MultiplyAutomaton.cpp
        MultiplyAutomaton.h
        PeriodAutomaton.cpp
        PeriodAutomaton.h
        QMarkAutomaton.cpp
        QMarkAutomaton.h
        QueriesAutomaton.cpp
        QueriesAutomaton.h
        RightParenAutomaton.cpp
        RightParenAutomaton.h
        RulesAutomaton.cpp
        RulesAutomaton.h
        SchemesAutomaton.cpp
        SchemesAutomaton.h
        StringAutomaton.cpp
        StringAutomaton.h
        Token.cpp
        Token.h)
