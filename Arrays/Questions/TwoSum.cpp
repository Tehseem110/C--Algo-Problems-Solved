// Two Sum
// Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

// You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

// Return the answer with the smaller index first.

// Example 1:

// Input: 
// nums = [3,4,5,6], target = 7

// Output: [0,1]
// Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

// Example 2:

// Input: nums = [4,5,6], target = 10

// Output: [0,2]
// Example 3:

// Input: nums = [5,5], target = 10

// Output: [0,1]
// Constraints:

// 2 <= nums.length <= 1000
// -10,000,000 <= nums[i] <= 10,000,000
// -10,000,000 <= target <= 10,000,000

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public:
   vector<int> twosum(vector<int>& nums,int target){

    
      
  

    for (int i = 0 ; i < nums.size(); i++){

         for(int j = i + 1; j < nums.size(); j++){

           if(nums[j] + nums[i] == target){
             return {i,j};
           }
           
           
             
         }
    }


   }


    vector<int> twosumEfficient(vector<int>& nums,int target){

    unordered_map<int,int> numIndexMap;
      
    // vector<int> nums = {6, 3, 2, 4};

    for (int i = 0 ; i < nums.size(); i++){

        int complement = target - nums[i];

        if(numIndexMap.count(complement)){

            return {numIndexMap[complement],i};
        }

        numIndexMap[nums[i]] = i;



        
    }

   
   }
};



int main() {

    vector<int> nums = {6, 3, 2, 4};
    int target = 10;

    Solution solution;

    vector<int> result =   solution.twosumEfficient(nums,target);

      cout << "Result: ";
      for (int index : result) {
           cout << index << " ";
       }

 

     
     cout << "Hello, World!" << endl;
    return 0;
}