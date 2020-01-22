#ifndef UNIT_TEST_BASIC_H
#define UNIT_TEST_BASIC_H

#include <unit_tests.h>

class UnitTestBasic : public UnitTestBase {
    public:
        UnitTestBasic();
        virtual void init();
        virtual bool run();
};

#endif // UNIT_TEST_BASIC_H