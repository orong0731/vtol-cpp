#include <cstddef>
#include <iostream>

// 비행 중 1초마다 기록한 고도(m)
const int kAltitudes[] = {12, 35, 58, 80, 97, 103, 99, 74, 41, 18};
const std::size_t kCount = sizeof(kAltitudes) / sizeof(kAltitudes[0]);

int find_min(const int* data, std::size_t n) {
    int min_alt = data[0];
    for (std::size_t i = 0; i < n; ++i) {
        if (data[i] < min_alt) {
            min_alt = data[i];
        }
    }
    return min_alt;
}

double average(const int* data, std::size_t n) {
    int sum = 0;
    for (std::size_t i = 0; i < n; ++i) {
        sum += data[i];
    }
    return static_cast<double>(sum) / n;
}

int main() {
    int min_alt = find_min(kAltitudes, kCount);
    double avg = average(kAltitudes, kCount);
    std::cout << "samples = " << kCount << "\n";
    std::cout << "min altitude = " << min_alt << " m\n";
    std::cout << "avg altitude = " << avg << " m\n";
    return 0;
}
