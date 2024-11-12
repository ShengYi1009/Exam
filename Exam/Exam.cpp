//4B3G0132 徐勝益 程式作業
//利用遞迴與非遞迴計算n!的結果

#include <iostream>

int factorial(int k) {
    if (k == 0)return 1;
    else return k * factorial(k - 1);
}


int main()
{
    int num;

    std::cout << "輸入一個正整數: ";
    std::cin >> num;

    //非遞迴計算n!
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    std::cout << "非遞迴版本" << num << "! = " << result << std::endl;

    //遞迴計算
    result = factorial(num);
    std::cout << "遞迴版本" << num << "! = " << result << std::endl;

    return 0;
}

