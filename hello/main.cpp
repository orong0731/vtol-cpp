#include <cstdint>
#include <iostream>

int main() {
    std::uint8_t battery_pct = 255;
    battery_pct = battery_pct + 1;
    std::cout << "battery = " << static_cast<int>(battery_pct) << "\n";

    if (battery_pct < 20) {
        std::cout << "LOW BATTERY\n";
    }
    return 0;
}
