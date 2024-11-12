//4B3G0132 徐勝益 程式作業

#include <iostream>

int main()
{
    int n = 1;
    int sum = 0;
    std::cout << "請輸入一個正整數n :";
    std::cin >> n;

    //for loop
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sum += i;
    }
    std::cout << "1~" << n << "之間所有偶數的和為: " << sum << std::endl;
    return 0;
}

