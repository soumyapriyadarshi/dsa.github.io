#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> vec = {1, -2, 3, 4, 5, -6};
   int currSum = 0; 
   int maxSum = INT16_MIN;

   for(int i : vec)
   {
      currSum += i;
      maxSum = max(currSum, maxSum);

      if (currSum < 0)
      {
         currSum = 0;
      }
   }

   cout << maxSum << endl;

   return 0;
}