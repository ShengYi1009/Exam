//4B3G0132 徐勝益 程式作業
//switch版本的判斷月份

#include <iostream>

int main()
{
    int month = 1;
    std::string result = "";

    std::cout << "請輸入月份(1~12月) : ";
    std::cin >> month;
    if (month > 12 || month < 1) {
        std::cout << "請輸入正確的月份" << std::endl;
    }
    else {
        switch (month) {
        case 3:
        case 4:
        case 5:
            result = "春季";
            break;
        case 6:
        case 7:
        case 8:
            result = "夏季";
            break;
        case 9:
        case 10:
        case 11:
            result = "秋季";
            break;
        default:
            result = "冬季";
        }
        std::cout << month << "月是" << result;
    }

    return 0;
}

