#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vector1 = { 1, 3, 5, 8, 12, 15, 19};
    std::vector<int> vector2 = { 2, 4, 5, 9, 11, 15};

    std::vector<int> intersectOfVectors = { };

    for (size_t i = 0; i < vector1.size(); i++)
    {
        for (size_t j = 0; j < vector2.size(); j++)
        {
            if (vector1[i] == vector2[j])
            {
                intersectOfVectors.insert(intersectOfVectors.begin() + intersectOfVectors.size(), vector2[j]);
                break;
            }
        }
    }
    for (size_t k = 0; k < intersectOfVectors.size(); k++)
    {
        std::cout << intersectOfVectors[k] << std::endl;
    }

    return 0;
}