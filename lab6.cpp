/*
       Name: Alexa Zeiber
     Course: CISC 1610
 Assignment: lab 6
   Due Date: 11/7/22
Description: Populating asnd outputting an array of 20
       File: lab6.cpp
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

const int SIZE = 20;
unsigned int seed = (unsigned int)(time(0));

double random (unsigned int &seed);
void fill_array (int &max_value, int &max_position, int a[SIZE]);
void find_max (int &max_value, int &max_position, int a[SIZE]);
void print_position (int &max_value, int &max_position, int a[SIZE]);

using namespace std;

int main()
{
    int max_value, max_position = 0;
    int a[SIZE];
    max_value = a[1];

    
    fill_array ( max_value, max_position, a );
    find_max ( max_value, max_position, a );
    
    
    cout << "The maximum value is: " << max_value << endl;
    cout << "The maximum positions: ";
    
    print_position ( max_value, max_position, a );
    cout << endl;

    return 0;
}

void fill_array ( int &max_value, int &max_position, int a[] )
{
    for (int i = 0; i < SIZE; ++i)
        a[i] = int (21 * random(seed));
    
}

void find_max ( int &max_value, int &max_position, int a[] )
{
    for (int i = 0; i < SIZE; ++i)
        if (a[i] > max_value)
        {
            max_value = a[i];
            max_position = i;
        }

}

void print_position ( int &max_value, int &max_position, int a[] )
{
    for (int i = 0; i < SIZE; ++i)
        if (a[i] == max_value)
        {
            cout << i << " ";
        }
}

double random ( unsigned int &seed )
    {
        const int MODULUS = 15749;
        const int MULTIPLIER = 69069;
        const int INCREMENT = 1;
        seed = ((MULTIPLIER * seed) + INCREMENT)%MODULUS;
        
        return double (seed)/MODULUS;
    }

/*
 The maximum value is: 20
 The maximum positions: 3 6 9
 Program ended with exit code: 0
 */
