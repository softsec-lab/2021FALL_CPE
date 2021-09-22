#include <iostream>
using namespace std;

int main()
{
   int userInput;
   int min, max, sum;

   while (1) {
     cin >> userInput;

     switch(userInput){
       case 1:
         min = 0;
         max = 10;
         sum = 0;
         for(int i = min; i<= max; i++)
           sum += i;
         cout << "Sum is " << sum << endl;
         break;

       case 2:
         min = 20;
         max = 30;
         sum = 0;
         for(int i = min; i<= max; i++)
           sum += i;
         cout << "Sum is " << sum << endl;
         break;

       case 3:
         min = 40;
         max = 50;
         sum = 0;
         for(int i = min; i<= max; i++)
           sum += i;
         cout << "Sum is " << sum << endl;
         break;

       case 4:
         min = 60;
         max = 70;
         sum = 0;
         for(int i = min; i<= max; i++)
           sum += i;
         cout << "Sum is " << sum << endl;
         break;
       default:
         return 0;
     }
   }
   return 0;
}
