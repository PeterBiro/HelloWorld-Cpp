#include <iostream>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "Hello, World!" << std::endl;
    } else {
        for (int i = 1; i < argc; i++ ){
            std::cout << "Hello, " << argv[i] << "!" << std::endl;
        }
    }
    return 0;
}