#include "fizzbuzz.h"
#include <sstream>

FizzBuzz::FizzBuzz()
{
    current_ = 0;
}

std::string FizzBuzz::Next()
{
    current_++;

    if(current_%15 == 0)
        return std::string("FizzBuzz");

    if(current_%3 == 0)
        return std::string("Fizz");

    if(current_%5 == 0)
        return std::string("Buzz");

    std::ostringstream convert;
    convert << current_;
    return std::string(convert.str().data());
}
