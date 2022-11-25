#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Turkish");
    int sayi;

    std::cout << "sayiyi giriniz";
    std::cin >> sayi;
    int onlarbasamagi = ((sayi % 100) - (sayi % 10)) / 10;
    int birlerbasamagi = sayi % 10;
    int yuzlerbasamagi = (sayi - onlarbasamagi * 10 - birlerbasamagi) / 100;

    if (sayi < 10) {
        switch (birlerbasamagi) {
            case 1:
                std::cout << "bir";
                break;
            case 2:
                std::cout << "iki";
                break;
            case 3:
                std::cout << "uc";
                break;
            case 4:
                std::cout << "dort";
                break;
            case 5:
                std::cout << "bes";
                break;
            case 6:
                std::cout << "alti";
                break;
            case 7:
                std::cout << "yedi";
                break;
            case 8:
                std::cout << "sekiz";
                break;
            case 9:
                std::cout << "dokuz";
                break;

            default:
                break;
        }
    } else if (sayi >= 10 && sayi < 100) {


        switch (onlarbasamagi) {
            case 1:
                std::cout << "on";
                break;
            case 2:
                std::cout << "yirmi";
                break;
            case 3:
                std::cout << "otuz";
                break;
            case 4:
                std::cout << "kirk";
                break;
            case 5:
                std::cout << "elli";
                break;
            case 6:
                std::cout << "altmis";
                break;
            case 7:
                std::cout << "yetmis";
                break;
            case 8:
                std::cout << "seksen";
                break;
            case 9:
                std::cout << "doksan";
                break;

            default:
                break;
        };
        switch (birlerbasamagi) {
            case 1:
                std::cout << "bir";
                break;
            case 2:
                std::cout << "iki";
                break;
            case 3:
                std::cout << "uc";
                break;
            case 4:
                std::cout << "dort";
                break;
            case 5:
                std::cout << "bes";
                break;
            case 6:
                std::cout << "alti";
                break;
            case 7:
                std::cout << "yedi";
                break;
            case 8:
                std::cout << "sekiz";
                break;
            case 9:
                std::cout << "dokuz";
                break;

            default:
                break;
        };
    } else {
        switch (yuzlerbasamagi) {
            case 1:
                std::cout << "yuz";
                break;
            case 2:
                std::cout << "ikiyuz";
                break;
            case 3:
                std::cout << "ucyuz";
                break;
            case 4:
                std::cout << "dortyuz";
                break;
            case 5:
                std::cout << "besyuz";
                break;
            case 6:
                std::cout << "altiyuz";
                break;
            case 7:
                std::cout << "yediyuz";
                break;
            case 8:
                std::cout << "sekizyuz";
                break;
            case 9:
                std::cout << "dokuzyuz";
                break;

            default:
                break;
        };
        switch (onlarbasamagi) {
            case 1:
                std::cout << "on";
                break;
            case 2:
                std::cout << "yirmi";
                break;
            case 3:
                std::cout << "otuz";
                break;
            case 4:
                std::cout << "kirk";
                break;
            case 5:
                std::cout << "elli";
                break;
            case 6:
                std::cout << "altmis";
                break;
            case 7:
                std::cout << "yetmis";
                break;
            case 8:
                std::cout << "seksen";
                break;
            case 9:
                std::cout << "doksan";
                break;

            default:
                break;
        };
        switch (birlerbasamagi) {
            case 1:
                std::cout << "bir";
                break;
            case 2:
                std::cout << "iki";
                break;
            case 3:
                std::cout << "uc";
                break;
            case 4:
                std::cout << "dort";
                break;
            case 5:
                std::cout << "bes";
                break;
            case 6:
                std::cout << "alti";
                break;
            case 7:
                std::cout << "yedi";
                break;
            case 8:
                std::cout << "sekiz";
                break;
            case 9:
                std::cout << "dokuz";
                break;

            default:
                break;
        }
    }
}