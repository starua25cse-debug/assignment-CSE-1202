#include <stdio.h>
#include "abc.h"

int main()
{
    printf("       TESTING REQUIRED FUNCTIONS         \n");
    printf("==========================================\n");

    printf("Max of 45 and 82: %d\n", max(45, 82)); // Testing max function

    printf("Min of 45 and 82: %d\n", min(45, 82)); // Testing min function

    printf("Is 29 Prime?: %s\n", isPrime(29) ? "True" : "False"); // Testing isPrime function
    printf("Is 15 Prime?: %s\n", isPrime(15) ? "True" : "False"); // Testing isPrime function

    printf("Is 77 Odd?: %s\n", isOdd(77) ? "True" : "False"); // Testing isOdd function

    printf("Is 88 Even?: %s\n", isEven(88) ? "True" : "False"); // Testing isEven function

    printf("Digit Sum of 9876: %d\n", digitSum(9876)); // Testing digitSum function

    printf("Reverse of -12345: %d\n\n", reverseNumber(-12345)); // Testing reverseNumber function

    printf("       TESTING CONVERSION FUNCTIONS       \n");
    printf("==========================================\n");

    printf("Decimal 15 to Binary: %lld\n", decimalToBinary(15));
    printf("Binary 1111 to Decimal: %d\n", binaryToDecimal(1111));
    printf("Decimal 100 to Octal: %lld\n", decimalToOctal(100));

    printf("\n\n");

    printf("       TESTING ADDITIONAL FUNCTIONS       \n");
    printf("==========================================\n");

    printf("Factorial of 6: %lld\n", factorial(6));
    printf("GCD of 54 and 24: %d\n", gcd(54, 24));
    printf("LCM of 54 and 24: %d\n", lcm(54, 24));
    printf("Power of 3^5: %lld\n", power(3, 5));
    printf("Is 12321 a Palindrome?: %s\n", palindrome(12321) ? "True" : "False");
    printf("Is 12342 a Palindrome?: %s\n", palindrome(12342) ? "True" : "False");

    return 0;
}