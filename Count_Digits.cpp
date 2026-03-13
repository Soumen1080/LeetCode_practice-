#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
 
int countDigits(int num){
    int count = (int)log10(num) + 1; // Calculate the number of digits using logarithm
    return count;
}
};

int main() {
    Solution solution;
    int num = 12345; // Example number
    cout << "Number of digits in " << num << " is: " << solution.countDigits(num) << endl;
    return 0;
}
