/*
Given an array arr[] of integers, calculate the median.

Examples:

Input: arr[] = [90, 100, 78, 89, 67]
Output: 89
Explanation: After sorting the array middle element is the median 
Input: arr[] = [56, 67, 30, 79]
Output: 61.5
Explanation: In case of even number of elements, average of two middle elements is the median. 
Input: arr[] = [1, 2]
Output: 1.5
Explanation: The average of both elements will result in 1.5.
*/





class Solution {
	public:
	double findMedian(vector<int> &arr) {
		// code here.
		int n = arr.size();
		
		// 1. Always sort the array first
		sort(arr.begin(), arr.end());
		
		// 2. If the size is even, average the two middle elements
		if (n % 2 == 0) {
			return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
		}
		// 3. If the size is odd, return the middle element
		else {
			return arr[n / 2];
		}
	}
};
