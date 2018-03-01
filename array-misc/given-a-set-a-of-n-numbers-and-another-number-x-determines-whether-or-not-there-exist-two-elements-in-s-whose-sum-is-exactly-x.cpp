#include <cstdio>
#define MAX 100000

using namespace std;
 
void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp;
  bool binMap[MAX] = {0}; /*initialize hash map as 0*/
 
  for (i = 0; i < arr_size; i++)
  {
      temp = sum - arr[i];
      if (temp >= 0 && binMap[temp] == 1)
         printf("Pair with given sum %d is (%d, %d) \n", 
                 sum, arr[i], temp);
      binMap[arr[i]] = 1;
  }
}
 
/* Driver program to test above function */
int main()
{
    int A[] = {2, 4, 1, 5};
    int n = 6;
    int arr_size = sizeof(A)/sizeof(A[0]);
 
    printPairs(A, arr_size, n);

    return 0;
}