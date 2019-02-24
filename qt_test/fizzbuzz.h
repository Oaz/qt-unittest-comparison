#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H

#include <QString>

class FizzBuzz
{
public:
    FizzBuzz();

    QString Next();

private:
    int current_;
};

#endif // FIZZBUZZ_H
