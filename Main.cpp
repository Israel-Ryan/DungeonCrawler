#include <iostream>

int getUserInput();

int main() {

    bool running = true;
    int quit = 0;

    while(running) {

        std::cout << "Would you like to quit? \n";
        std::cout << "1) Yes\n";
        std::cout << "2) No\n";

        quit = getUserInput();

        std::cout << quit;

        

        if(quit == 1) {
            running = false;
        } else {
            quit = 0;
        }
    }

    return 0;
}


int getUserInput() {

    std::string input;
    int quit;
    while(quit != 1 && quit != 2) {
        try {
            std::getline(std::cin, input);
            quit = std::stoi(input);

            if(quit > 2 || quit < 1) {
                std::cout << "That is not a valid option\n";
            }
        } catch(std::exception e) {
            std::cout << "That's not a number\n";
        }
    }

    return quit;

}