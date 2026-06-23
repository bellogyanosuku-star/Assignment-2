#include <iostream>

int main() {
    double voltage;
    
    std::cout << "Enter current solar panel operational voltage reading (V): ";
    std::cin >> voltage;
    
    while (voltage >= 18.0) {
        std::cout << "System voltage operational. Enter next reading (V): ";
        std::cin >> voltage;
    }
    
    std::cout << "Warning: Solar panel voltage below operating level." << std::endl;
    return 0;
}
