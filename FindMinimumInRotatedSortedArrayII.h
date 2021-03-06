/*
 Author:     King, higuige@gmail.com
 Date:       Oct 22, 2014
 Problem:    Find Minimum in Rotated Sorted ArrayII
 Difficulty: Hard
 Source:     https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
 Notes:
 Suppose a sorted array is rotated at some pivot unknown to you beforehand.
 (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

 Find the minimum element.

 The array may contain duplicates.
*/
class Solution {
public:
    int findMin(vector<int> &num) {
        if(num.empty()) return 0;
        int size = num.size();
        int left = 0;
        int right = size - 1;
        while (left < right && num[left] >= num[right]) {
            int mid = (left + right) / 2;
            if (num[mid] > num[right]) {
                left = mid + 1;
            } else if (num[mid] < num[left]) {
                right = mid;
            } else {
                ++left;
            }
        }
        return num[left];
    }
};