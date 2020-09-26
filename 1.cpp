//Muhammad Ibad Saleem 19K0220 E1 task1
#include <iostream>
//Question #1
//Write a recursive function named Sum_Num(int* , int) which 
// receives an integer array and it’s size and returns the sum 
// of even numbers in the array. Call this function from main. 
//Use appropriate parameters and return type.


using namespace std;

int Sum_Num(int *arr,int size,int Sum){
    
    
    if (size<0)
    {
        return Sum;
    }

    else if (arr[size] % 2 == 0)
    {
        Sum = Sum + arr[size];
        
    }
    
    Sum_Num(arr,size-1,Sum);                   //example of tail recursion
}


int main()
{
    int array_size = 0;
    int sum = 0,a=0;
    cout << "Enter Size of an Array: ";
    cin >> array_size;
    int *arr = new int[array_size];
    cout << "Enter Numbers\n";
    for (int i = 0; i < array_size;i++)
    {
        int array_num = 0;
        cin >> array_num;
        arr[i] = array_num;
    }
    sum=Sum_Num(arr, array_size-1,a);
    cout << "Sum of Even Numbers are: " << sum;
    
    
    
    return 0;
}