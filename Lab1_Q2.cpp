#include <iostream>
#include <limits.h>  


int findMinRec(int arr[], int n) 
{

    if (n == 1) 
    {

        return arr[0];
    }
    
 
    int minOfRest = findMinRec(arr, n - 1);
    

    return std::min(arr[n - 1], minOfRest);
}

int main() 
{
  
    int arr1[] = {12, 34, 5, 70, 23, 2, 8, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "The smallest value in arr1 is: " << findMinRec(arr1, n1) << std::endl;

    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "The smallest value in arr2 is: " << findMinRec(arr2, n2) << std::endl;

    int arr3[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "The smallest value in arr3 is: " << findMinRec(arr3, n3) << std::endl;

    int arr4[] = {-1, -2, -3, -4, -5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    std::cout << "The smallest value in arr4 is: " << findMinRec(arr4, n4) << std::endl;

    
    
    return 0;
}


