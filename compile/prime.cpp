#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    // 2は素数なので、それ以外の偶数は素数ではない
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    // 3からnの平方根までの奇数で割り切れるか判定
    int sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    std::cout << "整数を入力してください: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " は素数です" << std::endl;
    } else {
        std::cout << number << " は素数ではありません" << std::endl;
    }

    return 0;
}
