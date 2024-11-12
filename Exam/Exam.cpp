//4B3G0132 徐勝益 程式作業

#include <iostream>

int main()
{
    int month = 1;

    std::cout << "請輸入月份(1~12月) : ";
    std::cin >> month;
    if (month > 12 || month < 1) {
        std::cout << "請輸入正確的月份" << std::endl;
        std::cout << "請輸入月份(1~12月) : ";
        std::cin >> month;
    }
    else {
        if (month >= 3 && month <= 5) {
            std::cout << "春季" << std::endl;
        }
        else if (month >= 6 && month <= 8) {
            std::cout << "夏季" << std::endl;
        }
        else if (month >= 9 && month <= 11) {
            std::cout << "秋季" << std::endl;
        }
        else {
            std::cout << "冬季" << std::endl;
        }
    }

    return 0;
}

