#include <iostream>
#include <string>
using namespace std;


//Outputs the string version of the ones place
string DigitToWord(int digitIn) {
   switch(digitIn){
      case 0 : return "zero";    break;
      case 1 : return "one";     break;
      case 2 : return "two";     break;
      case 3 : return "three";   break;
      case 4 : return "four";    break;
      case 5 : return "five";    break;
      case 6 : return "six";     break;
      case 7 : return "seven";   break;
      case 8 : return "eight";   break;
      case 9 : return "nine";    break;
   }
   return "error";
}

//Outputs the sting version of the tens place
string TensDigitToWord(int digitIn) {
   switch(digitIn){
      case 2 : return "twenty";  break;
      case 3 : return "thirty";  break;
      case 4 : return "forty";   break;
      case 5 : return "fifty";   break;
      case 6 : return "sixty";   break;
      case 7 : return "seventy"; break;
      case 8 : return "eighty";  break;
      case 9 : return "ninety";  break;
   } 
   return "error";
}

int main() {
   
//Declare varables
   int digitOne;
   int digitTwo;
   int input;
   
//input the input, and seperate the two digits
   cin >> input;
   digitOne = input/10;
   digitTwo = input%10;

//Outputs the string version of the inputted integer
  cout << TensDigitToWord(digitOne) << " " << DigitToWord(digitTwo) << endl;
   
   
   //cout << DigitToWord ();
   
   return 0;

}
