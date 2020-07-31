#include <iostream>
#include <unistd.h>
#include "coolurses.h"

int main() {

    std::cout << RED_BACKGROUND << "Main Screen" << DEFAULT_TEXT << std::endl;
    sleep(1);
    std::cout << ALT_SCREEN_BUFFER;
    std::cout << GREEN_FOREGROUND << WHITE_BACKGROUND << "Alt Screen" << DEFAULT_TEXT << std::endl;
    std::cout << MAIN_SCREEN_BUFFER;
    sleep(1);

    return 0;
}