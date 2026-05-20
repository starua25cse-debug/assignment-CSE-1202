#ifndef ABC_H
#define ABC_H

#include <stdio.h>
#include <stdbool.h>

// Find maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Find minimum of two numbers
int min(int a, int b)
{
    return (a < b) ? a : b;
}

// Check whether a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Check whether a number is odd
bool isOdd(int n)
{
    return n % 2 != 0;
}

// Check whether a number is even
bool isEven(int n)
{
    return n % 2 == 0;
}

// Calculate sum of digits
int digitSum(int n)
{
    int sum = 0;
    if (n < 0)
        n = -n; // Handle negative numbers
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Reverse a number
int reverseNumber(int n)
{
    int reversed = 0;
    int sign = (n < 0) ? -1 : 1;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed * sign;
}

// Decimal to Binary
long long decimalToBinary(int decimal)
{
    long long binary = 0;
    long long remainder, i = 1;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

// Binary to Decimal
int binaryToDecimal(long long binary)
{
    int decimal = 0, i = 0, remainder;
    while (binary != 0)
    {
        remainder = binary % 10;
        binary /= 10;

        int powerOfTwo = 1;
        for (int j = 0; j < i; j++)
            powerOfTwo *= 2;
        decimal += remainder * powerOfTwo;
        i++;
    }
    return decimal;
}

// Decimal to Octal
long long decimalToOctal(int decimal)
{
    long long octal = 0;
    int remainder, i = 1;
    while (decimal != 0)
    {
        remainder = decimal % 8;
        decimal /= 8;
        octal += remainder * i;
        i *= 10;
    }
    return octal;
}


// Calculate Factorial
long long factorial(int n)
{
    if (n < 0)
        return 0;
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Greatest Common Divisor 
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Least Common Multiple
int lcm(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a * b) / gcd(a, b);
}

// Raise a base to an exponent power
long long power(int base, int exp)
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

// Check if a number is a palindrome
bool palindrome(int n)
{
    return n == reverseNumber(n);
}

#endif // ABC_H