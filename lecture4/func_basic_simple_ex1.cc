#include <iostream>
using namespace std;

void range_summation(int min, int max)
{
   int sum = 0;
   for (int i = min; i <= max; i++)
      sum += i;

   cout << "Sum is " << sum << endl;
}

int main()
{
   int userInput;

   while (1) {
     cin >> userInput;

     switch(userInput){
       case 1:
         range_summation(0,10);
         break;

       case 2:
         range_summation(20,30);
         break;

       case 3:
         range_summation(40,50);
         break;

       case 4:
         range_summation(60,70);
         break;

       default:
         return 0;
     }
   }
   return 0;
}
