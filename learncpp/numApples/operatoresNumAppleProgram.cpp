#include <iostream>

std::string getQuantityPhrase(int numApples){
    if (numApples <  0) return "negative";
    if (numApples == 0) return "no";
    if (numApples == 1) return "a single";
    if (numApples == 2) return "a couple of";
    if (numApples == 3) return "a few";
    if (numApples >  3) return "many";
};

std::string getApplesPluralized(int numApples){
    if (numApples ==  1) {
        return "apple";
    } else return "apples";
}

int main(){
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
