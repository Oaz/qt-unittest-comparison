#include "fizzbuzz.h"
#include <sstream>

FizzBuzz::FizzBuzz()
{
    current_ = 0;
}

QString FizzBuzz::Next()
{
    current_++;

    if(current_%15 == 0)
        return QString("FizzBuzz");

    if(current_%3 == 0)
        return QString("Fizz");

    if(current_%5 == 0)
        return QString("Buzz");

    std::ostringstream convert;
    convert << current_;
    return QString(convert.str().data());
}
