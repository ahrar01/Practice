class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int N = arr.size();
    bool inc = true;
    bool dec = true;
 
    // Loop to check if array is increasing
    for (int i = 0; i < N - 1; i++) {
 
        // To check if
        // array is not increasing
        if (arr[i] > arr[i + 1]) {
            inc = false;
        }
    }
 
    // Loop to check if array is decreasing
    for (int i = 0; i < N - 1; i++) {
 
        // To check if
        // array is not decreasing
        if (arr[i] < arr[i + 1]) {
            dec = false;
        }
    }
 
    // Pick one whether inc or dec
    return inc || dec;
    }
};