#!/usr/bin/env/python3

def is_prime(n):
    if n <= 1:
        return False

    # 2は素数なので、それ以外の偶数は素数ではない
    if n == 2:
        return True
    if n % 2 == 0:
        return False

    # 3からnの平方根までの奇数で割り切れるか判定
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i += 2

    return True

# 素数判定のテスト
number = int(input("整数を入力してください: "))
if is_prime(number):
    print(number, "は素数です")
else:
    print(number, "は素数ではありません")
