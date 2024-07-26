#include<iostream>
#include<unordered_map>

using namespace std;
 
 int romanToint(string s) {
  unordered_map<char, int> romanmap= {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
  };
   
   int result = 0;
   int prevalue = 0;

   for(int i=s.size()-1; i>=0; i--){
    int currentvalue = romanmap[s[i]];
    if(currentvalue < prevalue){
      result-=currentvalue;
    } else {
         result+= currentvalue;
    }
    prevalue = currentvalue;
   }
     return result;
 }
    
    int main() {
      string romanNumeral;
      cout<<"Enter a roman numeral:" ;
      cin >> romanNumeral;
      cout<<"Integer representation:" << romanToint(romanNumeral) << endl;
      return 0; 
    }
   




   

