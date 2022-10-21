// Exploration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>

bool unordered_map_test()
{
    std::unordered_map<int, int> um;
    // (34, 0), (100, 1), (34, 2)


    // stores the key-value pair (34, 0)
    um[34] = 0;
    // prints 0
    std::cout << um[34] << "\n";
    // stores the key-value pair (100, 1)
    um[100] = 1;
    // prints 1
    std::cout << um[100] << "\n";
    // stores the key-value pair (34, 2), replacing the previous key-value pair (34, 0)
    um[34] = 2;
    // prints 2
    std::cout << um[34] << "\n";

    return true;
}

int main()
{
    std::cout << "Hello World!\n";
    //std::vector<int> vc = { 1,2,3 };
    //containsNearbyDuplicate(vc, 4);

    unordered_map_test();

    return 0;
}

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        // if this value was found in the array at least once before
        if (mp.count(nums[i]))
            // if the distance is less than k
            if (abs(i - mp[nums[i]]) <= k) return true;
        mp[nums[i]] = i;
    }

    return false;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
