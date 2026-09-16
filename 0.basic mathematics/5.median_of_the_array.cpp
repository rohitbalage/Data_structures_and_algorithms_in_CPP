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
