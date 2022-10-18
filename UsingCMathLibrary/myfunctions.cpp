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
        std::cout << "> Yapmak istediðin iþlemin numarasýný gir:\n"
            << "\n" << "1 - Kosinüs hesapla\n"
            << "2 - Sinüs hesapla\n"
            << "3 - Tanjant hesapla\n"
            << "-----------------------------------\n"
            << "4 - Kosinüsün tersini hesapla\n"
            << "5 - Sinüsün tersini hesapla\n"
            << "6 - Tanjantýn tersini hesapla\n"
            << "-----------------------------------\n"
            << "7 - Bir sayýnýn üssünü al\n"
            << "8 - Bir sayýnýn karekökünü al\n"
            << "9 - Bir sayýnýn küpkökünü al\n"
            << "-----------------------------------\n"
            << "10 - Hipotenüs hesapla\n"
            << "-----------------------------------\n"
            << "11 - Tam deðer hesapla\n"
            << "-----------------------------------\n"
            << "12 - Programdan çýkýþ yap\n"
            << "\n" << "> Ýþlem numarasý: ";
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