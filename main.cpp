#include <iostream>
#include <vector>

int main() {
    //Intro to the game
    std::cout << "***********************************\n";
    std::cout << "Welcome to the Journey To The gods!\n";
    std::cout << "***********************************\n\n";
    std::cout << "Your goal is to escape a crumbling world of evil and destruction and find your place among the gods of old.\n";
    std::cout << "Should you fail you will be destroyed...\n";
    std::cout << "But if you can survive until the end your reward will be great!\n\n";

    //Beginning of users choices 
    //std::vector<char> pack;
    int usersChoice;

    std::cout << "Savage beasts have just overthrown the last human run government building and you need to run to the woods.\n";
    std::cout << "What will you grab to take with you?\n";
    std::cout << "A) Flashlight     B) Knife\n";
    std::cout << "C) Tape Measurer  D) A can of beans\n";

    std::vector<std::string> pack;

    pack = {"Flashlight", "Knife"};
    

    std::cout << pack[1] << "\n";
}