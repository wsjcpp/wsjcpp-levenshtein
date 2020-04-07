#ifndef UNIT_TEST_BASIC_H
#define UNIT_TEST_BASIC_H

#include <wsjcpp_unit_tests.h>

class UnitTestBasic : public WsjcppUnitTestBase {
    public:
        UnitTestBasic();
        virtual void init();
        virtual bool run();
};

#endif // UNIT_TEST_BASIC_H