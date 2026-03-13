// what is armstrong number? 
// An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.  

#include <iostream>
#include <cmath>    
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
    int x = n;
       long long  Arms = 0;
       int num = 0;
    while(n>0){
       num = n%10;
       Arms = Arms + num*num*num ;
        n = n/10;
 } 
 if(Arms == x) return true ;
 else return false ;
 }
};

int main(){
   Solution s; 
   
   
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(s.isArmstrong(n)){
        cout<<n<<" is an Armstrong number."<<endl;
    } else {
        cout<<n<<" is not an Armstrong number."<<endl;
    }


}// why we need to create an object of the class Solution?
 // We need to create an object of the class Solution because the function isArmstrong is a member function of the class. In C++, non-static member functions can only be called on an instance of the class (an object). By creating an object of the class Solution, we can call the isArmstrong function using that object to check if a given number is an Armstrong number or not.
 // if i write sol s; instead of Solution s; will it work?
 // No, it will not work. The correct syntax to create an object of the class Solution is "Solution s;". If you write "sol s;", it will result in a compilation error because "sol" is not defined as a type or class in the code. You need to use the correct class name "Solution" to create an object of that class.
 // WHAT ARE DIFFARENT THINGS WE CAN DO WITH CLASS LIKE SOLUTION ?
    // With a class like Solution, we can do various things such as:
    // 1. Define member functions: We can define member functions within the class to perform specific tasks, such as checking if a number is an Armstrong number in this case.
    // 2. Create objects: We can create multiple objects of the class Solution to use the member functions and access the data members (if any) of the class.
    // 3. Encapsulation: We can encapsulate data and functions within the class to hide the implementation details and provide a clear interface for users of the class.
    // 4. Inheritance: We can create derived classes that inherit from the Solution class to extend its functionality or override its member functions. 

