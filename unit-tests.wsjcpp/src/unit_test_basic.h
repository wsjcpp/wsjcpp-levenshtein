#ifndef UNIT_TEST_BASIC_H
#define UNIT_TEST_BASIC_H

#include <wsjcpp_unit_tests.h>

class UnitTestBasic : public WsjcppUnitTestBase {
    public:
        UnitTestBasic();
        virtual bool doBeforeTest() override;
        virtual void executeTest() override;
        virtual bool doAfterTest() override;
};

#endif // UNIT_TEST_BASIC_H