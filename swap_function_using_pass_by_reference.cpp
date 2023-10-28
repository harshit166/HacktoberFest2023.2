// C++ program to swap the values 
// of two variables using 
// pass-by-reference 
#include <iostream> 

// Prototype of the function 
void swap(int &, int &); 

// Driver code 
int main() 
{ 
int x, y; 

// Inputting two variables 
printf("Enter the value of x and y\n"); 
scanf("%d%d", &x, &y); 

// Displaying their values before swapping 
printf("Before Swapping\nx = %d\ny = %d\n", 
		x, y); 

// Calling the function & sending variable 
// values as argument	 
swap(x, y); 

// Displaying their values after swapping 
printf("After Swapping\nx = %d\ny = %d\n", 
		x, y); 
return 0; 
} 

// Function uses pass by reference method 
// to swap passed variable values 
void swap(int &a, int &b) 
{ 
int temp; 

temp = b; 
b = a; 
a = temp; 
}
