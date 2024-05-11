/*
Assignment :
 
* Calculate takes  two parameters first is array/vector, second is a function which
* modifys the elements of the array:to be swapped with another array
* call std::sort for sorting array in ascending order.
*/

#include <iostream>
#include <bits/stdc++.h>

// another calculate using *call back lamda*
void _calculate(std::vector<int> &arr1, std::vector<int> &arr2,
                std::function<void(std::vector<int> &, std::vector<int> &)> swapArr,
                std::function<void(std::vector<int> &)> sortArr)
{
    swapArr(arr1, arr2);
    sortArr(arr1);
    sortArr(arr2);
}
int main()
{
    std::vector<int> arr1{5, 4, 3, 2, 1};
    std::vector<int> arr2{9, 8, 7, 6, 5};

    auto swapArr = [](std::vector<int> &arr1, std::vector<int> &arr2)
    {
        for (size_t i = 0; i < arr1.size(); ++i)
        {
            std::swap(arr1[i], arr2[i]);
        }
    };

    auto sortArr = [](std::vector<int> &arr)
    {
        std::sort(arr.begin(), arr.end());
    };

    auto Calculate = [&](auto swapArr, auto sortArr)
    {
        swapArr(arr1, arr2);
        sortArr(arr1);
        sortArr(arr2);
    };

    Calculate(swapArr, sortArr);
    //_calculate(arr1, arr2, swapArr, sortArr);

    for (int i : arr1)
        std::cout << i << " ,";
    std::cout << std::endl;
    for (int i : arr2)
        std::cout << i << " ,";
    std::cout << std::endl;

    return 0;
}