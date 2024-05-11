/*
We are given an array of integer elements which contains duplicate values
 and the task is to calculate the frequencies of the distinct elements
present in an array and print the result.

a { 3,3,5,8,9,8,9,10,17,10,11,17,10}

element : frequency
3 : 2
5 : 2
8 : 1

*/


#include <iostream>
#include <bits/stdc++.h>

int main()
{
    std::vector<int> a{3, 3, 5, 8, 9, 8, 9, 10, 17, 10, 11, 17, 10};

    int max_val = -100000;
    for (int i = 0; i < a.size(); i++)
        if (a[i] > max_val)
            max_val = a[i];

    int *freq = new int[max_val + 1];
    std::fill(freq, freq + max_val + 1, 0);

    for (int i = 0; i < a.size(); i++)
    {
        (freq[a[i]])++;
    }

    for (int i = 0; i < max_val + 1; i++)
        if (freq[i] > 0)
            std::cout << "element : " << i << " frequency : " << freq[i] << std::endl;

    return 0;
}