#include "unit_test_basic.h"
#include <vector>
#include <iostream>
#include <wsjcpp_levenshtein.h>

REGISTRY_WSJCPP_UNIT_TEST(UnitTestBasic)

UnitTestBasic::UnitTestBasic()
    : WsjcppUnitTestBase("UnitTestBasic") {
    //
}

// ---------------------------------------------------------------------

void UnitTestBasic::init() {
    // nothing
}

// ---------------------------------------------------------------------

bool UnitTestBasic::run() {

    struct LineTest {
        LineTest(std::string s1, std::string s2, int nExpectedDistance) 
            : s1(s1), s2(s2), nExpectedDistance(nExpectedDistance) {}
        std::string s1;
        std::string s2;
        int nExpectedDistance;
    };

    std::vector<LineTest> vTestLines;
    vTestLines.push_back(LineTest("test", "test", 0));
    vTestLines.push_back(LineTest("tttt", "aaaa", 4));
    vTestLines.push_back(LineTest("ta", "t0", 1));
    vTestLines.push_back(LineTest("taf", "t0", 2));
    vTestLines.push_back(LineTest("111111111111111", "1111111112111111", 1));
    vTestLines.push_back(LineTest("!@#$%^&*()_+", "!@#%$^&*()+", 3));

    bool bTestSuccess = true;
    for (unsigned int i = 0; i < vTestLines.size(); i++) {
        LineTest test = vTestLines[i];
        int nGotDistance = WsjcppLevenshtein::distance(test.s1, test.s2);
        compareN(bTestSuccess, "compare ", nGotDistance, test.nExpectedDistance);
    }
    return bTestSuccess;
}