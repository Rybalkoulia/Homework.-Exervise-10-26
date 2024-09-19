#include <iostream>
#include <iomanip> // Для контролю точності виводу

int main() {
    // Введення даних
    double X, A, U, B;
    std::cout << "Введіть кількість кг шоколадних цукерок: ";
    std::cin >> X;
    std::cout << "Введіть вартість шоколадних цукерок (грн): ";
    std::cin >> A;
    std::cout << "Введіть кількість кг печива: ";
    std::cin >> U;
    std::cout << "Введіть вартість печива (грн): ";
    std::cin >> B;

    // Розрахунок вартості 1 кг шоколадних цукерок та 1 кг печива
    double pricePerKgChocolates = A / X;
    double pricePerKgCookies = B / U;

    // Розрахунок у скільки разів шоколадні цукерки дорожче печива
    double priceRatio = pricePerKgChocolates / pricePerKgCookies;

    // Вивід результатів з точністю до двох знаків після коми
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Вартість 1 кг шоколадних цукерок: " << pricePerKgChocolates << " грн" << std::endl;
    std::cout << "Вартість 1 кг печива: " << pricePerKgCookies << " грн" << std::endl;
    std::cout << "Шоколадні цукерки дорожчі печива у: " << priceRatio << " разів" << std::endl;

    return 0;
}