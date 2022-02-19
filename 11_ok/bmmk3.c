



// C program to find LCM of two numbers
#include <stdio.h>

// Recursive function to return gcd of a and b
long int gcd(long int a, long int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Function to return LCM of two numbers
long int lcm(long int a,long int b)
{
	return (a / gcd(a, b)) * b;
}

// Driver program to test above function
 int main()
{
	long int a , b ;
	scanf("%ld %ld", &a, &b);
	printf("%ld %ld\n" ,gcd(a, b) ,lcm(a, b));
	return 0;
}


