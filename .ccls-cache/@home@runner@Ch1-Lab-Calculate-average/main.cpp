//
// File: main.cpp
// Description: Calculate Avergae
// Created: Sun. Feb 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include <iostream>
#include <vector>
using namespace std;

// CalcAverage() takes in an int vector and returns the average value of elements in the vector as a double.
double CalcAverage(vector<int>nums) {
   double sum = 0;
    int count = nums.size();
    for (int i = 0; i < count; i++) {
        sum += nums[i];
    }
    return sum/count;
}

int main() {
   vector<int> nums = {1, 2, 3, 4, 5};
   cout << CalcAverage(nums) << endl; // CalcAverage() should return 3.0.
   return 0;
}
