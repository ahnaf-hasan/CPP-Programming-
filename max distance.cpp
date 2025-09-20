// C++ Program to find max distance between two occurrences


#include <iostream>
#include <vector>
using namespace std;

// function to find the maximum distance

int maxDistance(vector<int>& arr) {
    int res = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
          
           
            if (arr[i] == arr[j]) {
          
              
               res = max(res, j - i);
            }
        }
    }
    return res;
}


int main() {
    vector<int> arr = {1, 2, 4, 1, 3, 4, 2, 5, 6, 5};
    cout << maxDistance(arr) << endl;
    return 0;
}