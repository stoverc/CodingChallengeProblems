#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> temp;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums.at(i) + nums.at(j) == target) {
                temp.push_back(i);
                temp.push_back(j);
                break;
            }
        }
    }

    return temp;
}

int main() {
    std::vector<int> nums1{ 2,7,11,15 };
    std::vector<int> sol1 = twoSum(nums1, 9);

    for (int x : sol1)
        std::cout << x << " ";

    std::cout << std::endl;

    std::vector<int> nums2{ 3,2,4 };
    std::vector<int> sol2 = twoSum(nums2, 6);

    for (int x : sol2)
        std::cout << x << " ";

    std::cout << std::endl;

    std::vector<int> nums3{ 3,3 };
    std::vector<int> sol3 = twoSum(nums3, 6);

    for (int x : sol3)
        std::cout << x << " ";

    return 0;
}