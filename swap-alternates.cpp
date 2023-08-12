#include <iostream>

int main()
{
    int arr[] = {34,56,78,23,12,34,23};
    int size = sizeof(arr)/sizeof(int) ;


//Time Complexity: O(n) , Space Complexity: O(1) (here) , O(n) (could be )
    int temp ; 
    for( int i=0 ; i<size/2 ; i ++)
    {
        temp = arr[i] ;
        arr[i] = arr[size-i-1] ;
        arr[size-i-1] = temp ; 

    }

     for( int i=0 ; i<size ; i ++)
    {
        std::cout << arr[i] << " ";
    }
      
}