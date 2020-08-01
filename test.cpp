#include <iostream>
#include <unistd.h>
#include "coolurses.h"

int main() {
    std::cout << "           " << REVERSE_TEXT << "Main Screen" << DEFAULT_TEXT << std::endl;
    std::cout << std::endl;
    std::cout << RED_FOREGROUND << "Red   " << DEFAULT_TEXT;
    std::cout << DARK_RED_FOREGROUND << "Dark_Red   " << DEFAULT_TEXT;
    std::cout << YELLOW_FOREGROUND << "Yellow " << DEFAULT_TEXT;
    std::cout << DARK_YELLOW_FOREGROUND << "Dark_Yellow " << DEFAULT_TEXT;
    std::cout << std::endl;
    std::cout << GREEN_FOREGROUND << "Green " << DEFAULT_TEXT;
    std::cout << DARK_GREEN_FOREGROUND << "Dark_Green " << DEFAULT_TEXT;
    std::cout << CYAN_FOREGROUND << "Cyan   " << DEFAULT_TEXT;
    std::cout << DARK_CYAN_FOREGROUND << "Dark_Cyan " << DEFAULT_TEXT;
    std::cout << std::endl;
    std::cout << BLUE_FOREGROUND << "Blue  " << DEFAULT_TEXT;
    std::cout << DARK_BLUE_FOREGROUND << "Dark_Blue  " << DEFAULT_TEXT;
    std::cout << PURPLE_FOREGROUND << "Purple " << DEFAULT_TEXT;
    std::cout << DARK_PURPLE_FOREGROUND << "Dark_Purple " << DEFAULT_TEXT;
    std::cout << std::endl;
    std::cout << GRAY_FOREGROUND << "Gray  " << DEFAULT_TEXT;
    std::cout << DARK_GRAY_FOREGROUND << "Dark_Gray  " << DEFAULT_TEXT;
    std::cout << WHITE_FOREGROUND << "White  " << DEFAULT_TEXT;
    std::cout << BLACK_FOREGROUND << WHITE_BACKGROUND << "Black" << DEFAULT_TEXT;
    std::cout << std::endl << std::endl;
    sleep(3);
    std::cout << ALT_SCREEN_BUFFER;
    std::cout << "           " << PURPLE_FOREGROUND << WHITE_BACKGROUND << "Alt Screen" << DEFAULT_TEXT << std::endl;
    std::cout << MAIN_SCREEN_BUFFER;
    sleep(1);
    
    return 0;
}