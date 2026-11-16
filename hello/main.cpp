#include <cstdint>
#include <iostream>

int main() {
    std::int32_t altitude_m = 120;
    int x = 0;
    std::uint8_t battery_pct = 255; battery_pct = battery_pct + 1;
    std::cout << x << "\n";
    std::cout << "Hello, VTOL! altitude = " << altitude_m << " m\n";
    std::cout << "battery =" << static_cast<int>(battery_pct) << "m\n";
    std::cout << "sizeof(int32_t) = " << sizeof(altitude_m) << " bytes\n";
    std::cout << "static_cast<int>(uint8_t) = " << static_cast<int>(battery_pct) << "\n";
    return 0;
}
