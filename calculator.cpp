#include <iostream>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char op;
    int num1;
    int num2;
    int result;

    std::cout << "Привет! Ты запустил калькулятор! Автор калькулятора: TersyPC\n";
    Sleep(500);
    std::cout << "Сразу говорю, можно только: умножить: *, разделить: /, вычесть: -, скласть: + \n";
    Sleep(400);
    std::cout << "Введи твой пример (например 2*2): ";
    std::cin >> num1;
    std::cin >> op;
    std::cin >> num2;

    // Плюсование
    if (op == '+') {
        result = num1 + num2;
        std::cout << "Результат: " << result << std::endl;
    }
    // Деление
    else if (op == '/') {
        if (num2 == 0) {
            std::cout << "Результат: Деление на ноль невозможно!";
            return 0;
        }
        result = num1 / num2;
        std::cout << "Результат: " << result << std::endl;
    }
    // Умножение
    else if (op == '*') {
        result = num1 * num2;
        std::cout << "Результат: " << result << std::endl;
    }
    // Минусование
    else if (op == '-') {
        result = num1 - num2;
        std::cout << "Результат: " << result << std::endl;
    }

    std::cout << "\n";
    Sleep(500);
    std::cout << "  /\\_/\\\n";
    Sleep(200);
    std::cout << " ( o.o )\n";
    Sleep(200);
    std::cout << "  > ^ <\n";
    Sleep(300);
    std::cout << "Made by TersyPC, my tg: @asaad23123, my tgk: @TersyPC\n";
    Sleep(300); 
    std::cout << "Thanks you for using!";


    std::cout << "\n\nНажмите Enter для выхода...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}