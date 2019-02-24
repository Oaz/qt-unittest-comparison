#pragma once

#include <string>

class FizzBuzz
{
public:
    FizzBuzz();

    std::string Next();

private:
    int current_;
};
