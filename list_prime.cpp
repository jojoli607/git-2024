#include <iostream>

bool is_prime(int number) {
    if (number <= 1) return false;
    int i = 2;
    while (i * i <= number) {
        if (number % i == 0) return false;
        i++;
    }
    return true;
}

void list_primes(int limit) {
    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int limit;
    std::cout << "Enter the limit: ";
    std::cin >> limit;

    std::cout << "Prime numbers up to " << limit << ": ";
    list_primes(limit);

    return 0;
}
