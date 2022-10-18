#pragma once
#include <iostream>
#include <cmath>

#define PI 3.14159265

namespace myfunctions
{
    void ClearInputStream();

    void ClearConsoleWindow();

    void ShowMainMenu();

    //

    double ConvertDegreesToRadians(double degrees);

    double ConvertRadiansToDegrees(double radians);

    class MathematicalOperation
    {
    public:
        virtual double MakeCalculation() = 0;    
        virtual void SetEntry(double arr[]) {};

    };

    class CalculateCosine : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return cos(ConvertDegreesToRadians(degree));
        }

        void SetEntry(double arr[])
        {
            degree = arr[0];
        }

    private:
        double degree;
    };

    class CalculateSine : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return sin(ConvertDegreesToRadians(degree));
        }

        void SetEntry(double arr[])
        {
            degree = arr[0];
        }

    private:
        double degree;
    };

    class CalculateTangent : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return tan(ConvertDegreesToRadians(degree));
        }

        void SetEntry(double arr[])
        {
            degree = arr[0];
        }

    private:
        double degree;
    };

    class CalculateArcCosine : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return ConvertRadiansToDegrees(acos(param));
        }
        void SetEntry(double arr[])
        {
            param = arr[0];
        }
    private:
        double param;
    };

    class CalculateArcSine : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return ConvertRadiansToDegrees(asin(param));
        }
        void SetEntry(double arr[])
        {
            param = arr[0];
        }
    private:
        double param;
    };

    class CalculateArcTangent : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return ConvertRadiansToDegrees(atan(param));
        }
        void SetEntry(double arr[])
        {
            param = arr[0];
        }
    private:
        double param;
    };

    class CalculatePower : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return pow(givenNumber, toWhichPower);
        }
        void SetEntry(double arr[])
        {
            givenNumber = arr[0];
            toWhichPower = arr[1];
        }
    private:
        double givenNumber;
        double toWhichPower;
    };

    class CalculateSquareRoot : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return sqrt(givenNumber);
        };

        void SetEntry(double arr[])
        {
            givenNumber = arr[0];
        }

    private:
        double givenNumber;
    };

    class CalculateCubicRoot : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return cbrt(givenNumber);
        };

        void SetEntry(double arr[])
        {
            givenNumber = arr[0];
        }

    private:
        double givenNumber;
    };

    class CalculateHypotenuse : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return hypot(legX, legY);
        };

        void SetEntry(double arr[])
        {
            legX = arr[0];
            legY = arr[1];
        }

    private:
        double legX;
        double legY;
    };

    class CalculateFloor : public MathematicalOperation
    {
    public:
        double MakeCalculation()
        {
            return floor(param);
        };

        void SetEntry(double arr[])
        {
            param = arr[0];
        }

    private:
        double param;
    };
}
