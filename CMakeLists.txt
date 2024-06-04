cmake_minimum_required(VERSION 3.28)
project(TypeScriptKnockoff)

set(CMAKE_CXX_STANDARD 17)

add_executable(TypeScriptKnockoff main.cpp
        components/parser.cpp
        components/evaluator.cpp
        components/ast.cpp
        components/lexer.cpp
        components/lexer.h)
