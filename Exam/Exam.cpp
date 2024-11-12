//4B3G0132 徐勝益 程式作業
//利用 For loop、While loop、Do-While loop 計算小於等於n的所有偶數的和
#include <iostream>

int main()
{
    int n = 1;
    int sum = 0;
    std::cout << "請輸入一個正整數n :";
    std::cin >> n;

    //For loop
    for (int i = 2; i <= n; i+=2) {
        sum += i;
    }
    std::cout << "For Loop: " << "1~" << n << "之間所有偶數的和為: " << sum << std::endl;

    //While loop
    int i = 1;
    sum = 0;
    while (i <= n) {
        if (i % 2 == 0) sum += i;
        i++;
    }
    std::cout << "While Loop: " << "1~" << n << "之間所有偶數的和為: " << sum << std::endl;

    //Do-While loop
    i = 2;
    sum = 0;
    do {
        sum += i;
        i+=2;
    } while (i <= n);
    std::cout << "Do-While loop: " << "1~" << n << "之間所有偶數的和為: " << sum << std::endl;

    return 0;
}

