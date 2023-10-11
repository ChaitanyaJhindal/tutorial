#include <iostream>
#include <random>

int main() {
    // Create a random number generator engine
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 6); // Range: 1 to 6

    std::cout << "Rolling a dice..." << std::endl;

    // Generate a random number (simulating a dice roll)
    int result = distribution(gen);

    std::cout << "You rolled a " << result << std::endl;

    return 0;
}
