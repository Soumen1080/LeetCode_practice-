// what is a palindrome number ?
// A palindrome number is a number that remains the same when its digits are reversed. For example, 121 is a palindrome number because it reads the same backward as forward, while 123 is not a palindrome number because it reads differently when reversed (321).
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
    
        int revNum = 0 ;
        int dup = n ;
        while(n>0){
            int id = n%10;
            revNum = (revNum*10) + id;
            n = n/ 10 ;
        }
        if(dup == revNum) {
            return true ;
        }
         else return false;

     }
        
    
};

int main (){
    Solution solution ;
    int n ;
    cout << "Enter a number: ";
    cin >> n ;
    if(solution.isPalindrome(n)){
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }

    
}