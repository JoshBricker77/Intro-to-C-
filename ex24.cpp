#include <iostream>
#include <thread>
#include <chrono>

int main() {
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Wait for 1 second
    }
    std::cout << "Blast off!" << std::endl;
    return 0;
}