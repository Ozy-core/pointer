#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int main()
{
    // assigning a and b to a pointer
    int a= 678;
    int b= 467;

    int* ptr_a= &a;
    int* ptr_b= &b;

    cout << "ptr_a:"<< *ptr_a<< endl;
    cout<< "ptr_b:"<< *ptr_b << endl;


    //finding the max using pointer
    int arr[]={1,5,10,2,7,4,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    int* max_val=arr;
    int max_ptr= *max_val;

    for(int i=0; i<n; i++)
    {
        max_val++;
        if(*max_val>max_ptr)
        {
            max_ptr= *max_val;
        }
    }


    cout << "Max value in array: " << max_ptr << endl;


    // calculate string length
    const char* ptr_str= "Im super hungry right this very moment but im too locked in to eat";
    int str_length=0;

    while (*ptr_str != '\0')
    {
        str_length++;
        ptr_str++;
    }

    cout << "String length: " << str_length << endl;

    
    // mindpoint vector
    vector<int> vec={1,2,3};
    int* begin_ptr= &vec[0];
    int* end_ptr= &vec.back();
    
    int size= vec.size();
    int checking= vec.size()/2;

    int mid=0;

    if(size%2==0)
    {
        while(end_ptr>=begin_ptr)
        {
            end_ptr--;
            begin_ptr++;
            mid++;
        }
    }else
    {
        while(end_ptr>begin_ptr)
        {
            end_ptr--;
            begin_ptr++;
            mid++;
        }
    }


    cout << "Midpoint index: " << mid << endl;
    cout<< checking << endl;


    return 0;
}