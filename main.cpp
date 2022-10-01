//Homework 8

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to prompt the user to
 *                      enter a positive integer between 1 and 1000. The
 *                      program will determine whether or not the user input 
 *                      integer is prime or not. If the number is prime, the
 *                      program will output the entered number and a
 *                      statement declaring that the number is prime. If the
 *                      number isn't prime, it will output the number and each
 *                      of the first 11 prime numbers that it is divisible
 *                      by. It will then output the number with a statement 
 *                      
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               1/24/2017 17:13 PST
 */

#include <iostream>     //cin and cout
#include <cstdlib>      //exit() function

using namespace std;

int main(int argc, char** argv)
{
    
    //Declare variables
    int num;
    
    //Declare integer array
    int primeNum[11] = {2, 3, 5, 7, 11 ,13 ,17 ,19 ,23 ,29 ,31};
    int arrayLength = 11;
    bool isPrime = true;
    
    //Prompt user for input
    cout << "Enter a positive integer between 1-1000: " << endl;
    cin >> num;
    cout << endl;
    
    //For Loop to traverse through array
    for(int i = 0; i < arrayLength; i++)
    {
        if(num % primeNum[i] == 0)
        {
            cout << num << " is divisible by " << primeNum[i] << endl;
            isPrime = false;
        }
    }
    cout << endl;
    
    if(isPrime)
    {
        cout << num << " is a prime." << endl;
    }
    else
    {
        cout << num << " is not a prime." << endl;
    }
    
    exit(EXIT_SUCCESS);
}