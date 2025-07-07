// Contains Duplicate
// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

// Example 1:

// Input: nums = [1, 2, 3, 3]

// Output: true

// Example 2:

// Input: nums = [1, 2, 3, 4]

// Output: false

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;



class Solution {
    public:
         bool hasDuplicate(vector<int>& nums){

            unordered_set<int> seen;

           for (int num : nums){
            if(seen.count(num)){
                return true;
            }

            seen.insert(num);
           }
            return false;
           
         }
};



int main(){

    vector<int> nums = {1, 2, 3, 3};

    vector<int> nums2 = {1, 2, 3, 4};

    Solution solution;

    bool result1 = solution.hasDuplicate(nums);
    bool result2 = solution.hasDuplicate(nums2);

    cout << "result1: " << (result1 ) << endl;
    cout << "result2: " << (result2 ) << endl;


    return 0;
}