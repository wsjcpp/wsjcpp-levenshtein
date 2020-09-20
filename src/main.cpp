
#include <string.h>
#include <iostream>
#include <algorithm>
#include <wsjcpp_core.h>
#include <wsjcpp_levenshtein.h>

int main(int argc, const char* argv[]) {
    std::string TAG = "MAIN";
    std::string appName = std::string(WSJCPP_APP_NAME);
    std::string appVersion = std::string(WSJCPP_APP_VERSION);

    std::vector<std::string> vArgs;
    for (int i = 0; i < argc; i++) {
        vArgs.push_back(std::string(argv[i]));
    }

    if (vArgs.size() != 3) {
        std::cout << " " << appName << " (" << appVersion << ")" << std::endl
            << "Usage: " << vArgs[0] << " <string1> <string2>" << std::endl;
        return -1;
    }

    std::string s1 = vArgs[1];
    std::string s2 = vArgs[2];
    int nDistance = WsjcppLevenshtein::distance(s1,s2);
    std::cout << "" << nDistance << std::endl;
    return 0;
}