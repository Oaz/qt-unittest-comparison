#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "fizzbuzz.h"

using namespace testing;

TEST(FizzBuzz, RenvoieLeNombreCourant)
{
    FizzBuzz fb;
    ASSERT_THAT(fb.Next(), Eq("1"));
    ASSERT_THAT(fb.Next(), Eq("2"));
    fb.Next();
    ASSERT_THAT(fb.Next(), Eq("4"));
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), Eq("7"));
    ASSERT_THAT(fb.Next(), Eq("8"));
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), Eq("11"));
    fb.Next();
    ASSERT_THAT(fb.Next(), Eq("13"));
    ASSERT_THAT(fb.Next(), Eq("14"));
}

TEST(FizzBuzz, RenvoieFizzPourUnMultipleDe3)
{
    FizzBuzz fb;
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Fizz"));
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Fizz"));
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Fizz"));
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Fizz"));
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Fizz"));
}

TEST(FizzBuzz, RenvoieBuzzPourUnMultipleDe5)
{
    FizzBuzz fb;
    fb.Next();
    fb.Next();
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Buzz"));
    fb.Next();
    fb.Next();
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Buzz"));
    fb.Next();
    fb.Next();
    fb.Next();
    fb.Next();
    ASSERT_THAT(fb.Next(), HasSubstr("Buzz"));
}
