#include <QtTest>

// add necessary includes here
#include "fizzbuzz.h"

class TestFizzBuzz : public QObject
{
    Q_OBJECT

public:
    TestFizzBuzz();
    ~TestFizzBuzz();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_RenvoieLeNombreCourant();
    void test_RenvoieFizzPourUnMultipleDe3();
    void test_RenvoieBuzzPourUnMultipleDe5();

};

TestFizzBuzz::TestFizzBuzz()
{

}

TestFizzBuzz::~TestFizzBuzz()
{

}

void TestFizzBuzz::initTestCase()
{

}

void TestFizzBuzz::cleanupTestCase()
{

}

void TestFizzBuzz::test_RenvoieLeNombreCourant()
{
    FizzBuzz fb;
    QCOMPARE(fb.Next(), QString("1"));
    QCOMPARE(fb.Next(), QString("2"));
    fb.Next();
    QCOMPARE(fb.Next(), QString("4"));
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("7"));
    QCOMPARE(fb.Next(), QString("8"));
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("11"));
    fb.Next();
    QCOMPARE(fb.Next(), QString("13"));
    QCOMPARE(fb.Next(), QString("14"));
}

void TestFizzBuzz::test_RenvoieFizzPourUnMultipleDe3()
{
    FizzBuzz fb;
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("Fizz"));
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("Fizz"));
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("Fizz"));
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("Fizz"));
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("FizzBuzz"));
}

void TestFizzBuzz::test_RenvoieBuzzPourUnMultipleDe5()
{
    FizzBuzz fb;
    fb.Next();
    fb.Next();
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("Buzz"));
    fb.Next();
    fb.Next();
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("Buzz"));
    fb.Next();
    fb.Next();
    fb.Next();
    fb.Next();
    QCOMPARE(fb.Next(), QString("FizzBuzz"));
}

QTEST_APPLESS_MAIN(TestFizzBuzz)

#include "tst_fizzbuzz.moc"
