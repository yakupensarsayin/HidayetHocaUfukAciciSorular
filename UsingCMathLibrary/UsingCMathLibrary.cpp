#include <clocale>
#include "myfunctions.h"

int main()
{
    setlocale(LC_ALL, "Turkish");

    do
    {
        int operationNumber = 0;
        bool isOperationNumberUsable = false;

        myfunctions::MathematicalOperation* MathOperation[1]{};
        int questionType = 0; // tek girdi isteyenler 1. tip, iki girdi isteyenler 2. tip
        std::string selectedOperation = "";
        std::string firstQuestion = "";
        std::string secondQuestion = "";
        std::string operationName = "";

        while (isOperationNumberUsable == false)
        {
            myfunctions::ClearConsoleWindow();
            myfunctions::ShowMainMenu();

            bool couldGetInput = false;
            do
            {
                std::cin >> operationNumber;

                if (std::cin.fail())
                {
                    myfunctions::ClearInputStream();
                    myfunctions::ClearConsoleWindow();
                    myfunctions::ShowMainMenu();
                }
                else
                {
                    couldGetInput = true;
                }

            } while (couldGetInput == false);

            switch (operationNumber)
            {
            case 1:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateCosine();
                questionType = 1;
                operationName = "cos";
                selectedOperation = "Kosinüs hesaplaması yapmayı seçtiniz.\n";
                firstQuestion = "Kosinüsünü hesaplayacağınız açı değerini giriniz: ";
                break;
            case 2:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateSine();
                questionType = 1;
                operationName = "sin";
                selectedOperation = "Sinüs hesaplaması yapmayı seçtiniz.\n";
                firstQuestion = "Sinüsünü hesaplayacağınız açı değerini giriniz: ";
                break;
            case 3:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateTangent();
                questionType = 1;
                operationName = "tan";
                selectedOperation = "Tanjant hesaplaması yapmayı seçtiniz.\n";
                firstQuestion = "Tanjantını hesaplayacağınız açı değerini giriniz: ";
                break;
            case 4:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateArcCosine();
                questionType = 1;
                operationName = "arccos";
                selectedOperation = "Kosinüsün tersinin hesaplanasını seçtiniz.\n";
                firstQuestion = "Açısını bulmak istediğiniz kosinüs değerini giriniz: ";
                break;
            case 5:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateArcSine();
                questionType = 1;
                operationName = "arcsin";
                selectedOperation = "Sinüsün tersinin hesaplanasını seçtiniz.\n";
                firstQuestion = "Açısını bulmak istediğiniz sinüs değerini giriniz: ";
                break;
            case 6:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateArcTangent();
                questionType = 1;
                operationName = "arctan";
                selectedOperation = "Tanjantın tersinin hesaplanasını seçtiniz.\n";
                firstQuestion = "Açısını bulmak istediğiniz tanjant değerini giriniz: ";
                break;
            case 7:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculatePower();
                questionType = 2;
                operationName = "pow";
                selectedOperation = "Bir sayının üssünün alınmasını seçtiniz.\n";
                firstQuestion = "Taban: ";
                secondQuestion = "Üs: ";
                break;
            case 8:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateSquareRoot();
                questionType = 1;
                operationName = "sqrt";
                selectedOperation = "Karekök hesaplanasını seçtiniz.\n";
                firstQuestion = "Karekökünü bulmak istediğiniz sayıyı giriniz: ";
                break;
            case 9:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateCubicRoot();
                questionType = 1;
                operationName = "cbrt";
                selectedOperation = "Küpkök hesaplanasını seçtiniz.\n";
                firstQuestion = "Küpkökünü bulmak istediğiniz sayıyı giriniz: ";
                break;
            case 10:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateHypotenuse();
                questionType = 2;
                operationName = "hypot";
                selectedOperation = "Hipotenüs hesaplanmasını seçtiniz.\n";
                firstQuestion = "1. kenar: ";
                secondQuestion = "2. kenar: ";
                break;
            case 11:
                isOperationNumberUsable = true;
                MathOperation[0] = new myfunctions::CalculateFloor();
                questionType = 1;
                operationName = "floor";
                selectedOperation = "Tam değer hesaplanasını seçtiniz.\n";
                firstQuestion = "Tam değerini bulmak istediğiniz sayıyı giriniz: ";
                break;
            case 12:
                return 0;
            default:
                isOperationNumberUsable = false;
                break;
            }
        }

        myfunctions::ClearConsoleWindow();

        if (questionType == 1)
        {
            double param = 0;

            bool couldGetInput = false;
            do
            {
                std::cout << selectedOperation;
                std::cout << firstQuestion;
                std::cin >> param;

                if (std::cin.fail())
                {
                    myfunctions::ClearInputStream();
                    myfunctions::ClearConsoleWindow();
                }
                else
                {
                    couldGetInput = true;
                }

            } while (couldGetInput == false);

            double arr[1] = { param };
            MathOperation[0]->SetEntry(arr);

            std::cout << operationName << "(" << param << ") = " << MathOperation[0]->MakeCalculation() << std::endl;

            system("pause");
        }
        else if (questionType == 2)
        {
            double param1 = 0, param2 = 0;

            bool couldGetInput = false;
            do
            {
                std::cout << selectedOperation;
                std::cout << firstQuestion;
                std::cin >> param1;

                if (std::cin.fail())
                {
                    myfunctions::ClearInputStream();
                    myfunctions::ClearConsoleWindow();
                }
                else
                {
                    couldGetInput = true;
                }

            } while (couldGetInput == false);

            myfunctions::ClearConsoleWindow();

            couldGetInput = false;
            do
            {
                std::cout << selectedOperation;
                std::cout << firstQuestion << param1 << std::endl;
                std::cout << secondQuestion;
                std::cin >> param2;

                if (std::cin.fail())
                {
                    myfunctions::ClearInputStream();
                    myfunctions::ClearConsoleWindow();
                }
                else
                {
                    couldGetInput = true;
                }

            } while (couldGetInput == false);
         
            double arr[2] = { param1, param2};
            MathOperation[0]->SetEntry(arr);
            std::cout << operationName << "(" << param1 << ", " << param2 << ") = " << MathOperation[0]->MakeCalculation() << std::endl;

            system("pause");
        }

    }while (true);
}
