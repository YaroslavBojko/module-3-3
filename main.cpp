#include <iostream>

int main() {
    int beginHeight = 100;
    int dailyGrowth = 50;
    int nightFade = 20;

    int finalHeight = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

    std::cout << "Bamboo height by the middle of the third day: " << finalHeight << std::endl;
}
