//Muhammad Ibad Saleem 19K0220 E1 task2 
#include <iostream>
//Question #2

// Write a recursive function to reverse the array

using namespace std;

void Array_Reverse(int *arr,int *p,int size,int start_index){
    
    //int *p = new int [size];

    if (size<0)
    {
        return;
    }
    else{
        p[start_index] = arr[size-1];
    }
    
    Array_Reverse(arr, p, size - 1, start_index + 1);

}


int main()
{
    int array_size = 0;
    int sum = 0,a=0;
    cout << "Enter Size of an Array: ";
    cin >> array_size;
    int *arr = new int[array_size];
    int *p = new int[array_size];
    cout << "Enter Numbers\n";
    for (int i = 0; i < array_size;i++)
    {
        int array_num = 0;
        cin >> array_num;
        arr[i] = array_num;
    }
    cout << "Non-Reversed Array: ";
    for (int i = 0; i < array_size;i++)
        cout << arr[i] << " ";
    cout << endl;
    Array_Reverse(arr, p, array_size, 0);
    cout << "Reversed Array: ";
    for (int i = 0; i < array_size;i++)
        cout << p[i] << " ";


        return 0;
}




