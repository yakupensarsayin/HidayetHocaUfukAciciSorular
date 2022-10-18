#include "myfunctions.h"

namespace myfunctions
{
    void ClearInputStream()
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    void ClearConsoleWindow()
    {
        system("cls");
    }

    void ShowMainMenu()
    {
        std::cout << "> Yapmak istedi�in i�lemin numaras�n� gir:\n"
            << "\n" << "1 - Kosin�s hesapla\n"
            << "2 - Sin�s hesapla\n"
            << "3 - Tanjant hesapla\n"
            << "-----------------------------------\n"
            << "4 - Kosin�s�n tersini hesapla\n"
            << "5 - Sin�s�n tersini hesapla\n"
            << "6 - Tanjant�n tersini hesapla\n"
            << "-----------------------------------\n"
            << "7 - Bir say�n�n �ss�n� al\n"
            << "8 - Bir say�n�n karek�k�n� al\n"
            << "9 - Bir say�n�n k�pk�k�n� al\n"
            << "-----------------------------------\n"
            << "10 - Hipoten�s hesapla\n"
            << "-----------------------------------\n"
            << "11 - Tam de�er hesapla\n"
            << "-----------------------------------\n"
            << "12 - Programdan ��k�� yap\n"
            << "\n" << "> ��lem numaras�: ";
    }

    double ConvertDegreesToRadians(double degrees)
    {
        return (degrees * PI / 180);
    }

    double ConvertRadiansToDegrees(double radians)
    {
        return radians * 180 / PI;
    }
}