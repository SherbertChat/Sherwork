#include <iostream>
#include <string>
#include <cstdlib>

void displayHelp() {
    std::cout << "Sherwork 0.0.1\n"
              << "Usage: my_tool [options]\n\n"
              << "Options:\n"
              << "  --help             Display this help message\n"
              << "  --greet [name]     Print a greeting message\n"
              << "  --version          Show the version of the application\n";
}

void displayVersion() {
    std::cout << "C++ Multiplatform Tool v1.0\n";
}

void greetUser(const std::string& name) {
    if (name.empty()) {
        std::cout << "Hello, World!\n";
    } else {
        std::cout << "Hello, " << name << "!\n";
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "No options provided. Use --help for usage information.\n";
        return 1;
    }

    std::string option = argv[1];

    if (option == "--help") {
        displayHelp();
    } 
    else if (option == "--version") {
        displayVersion();
    } 
    else if (option == "--greet") {
        std::string name;
        if (argc > 2) {
            name = argv[2];
        } else {
            std::cout << "Enter a name: ";
            std::getline(std::cin, name);
        }
        greetUser(name);
    } 
    else {
        std::cout << "Unknown option: " << option << "\nUse --help for usage information.\n";
        return 1;
    }

    return 0;
}
