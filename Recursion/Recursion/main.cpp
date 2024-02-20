#include <iostream>
using namespace std;
//To find fictorial of any number.
int fictorial(int n)
{
	if (n == 1)
	{
		return n;
	}
	int result = fictorial(n - 1);
	return result * n;
}


//It is sentinal Control loop, so it does not required any number to terminate. 
//Because it takes input from user and at specific value its terminate.
int sum()
{
	int x = 0;
	cout << "Enter number to get sum and to terminate enter zero ";
	cin >> x;
	if (x == 0)
	{
		return x;
	}
	return x + sum();

}


//To get sum of all numbers in a array.
int getSum( int * arr, int size)
{
	if (size == 0)
	{
		return 0;
	}
	return arr[size-1] + getSum(arr,size-1);
}


//To search any element in the array.
int search(int* arr, int size, int key)
{
	if (size == 0)
	{
		return 0;
	}
	if (key == arr[size - 1])
	{
		return arr[size - 1];
	}
	else
	{
		return search(arr, size - 1, key);
	}
}


//To find minimum number from any array.
int findMinimum(int* arr, int size)
{
	if (size == 1)
	{
		return arr[size - 1];
	}
	int min = findMinimum(arr, size - 1);
	if (min > arr[size - 1])
	{
		return arr[size - 1];
	}
	else
	{
		return min;
	}
}



//To reverse any array. This is actually a Wrapper Function
// (in which user gives only main information like array and size of array but for our convenience,
//we can call any other function which helps us to solve problem)
void swap(int* arr, int start, int end)
{
	int temp = arr[end];
	arr[end] = arr[start];
	arr[start] = temp;
}
void tempReverse(int* arr,  int start, int end)
{
	if (start > end)
	{
		return;
	}
	swap(arr, start, end);
	tempReverse(arr, start + 1, end - 1);
}
void reverse(int* arr, int size)
{
	tempReverse(arr, 0, size - 1);
}


//To get lenght of any c-string
int getStringLenght(const char * str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + getStringLenght(str+1);
}


//Replace any letter in any c-string with specific character like in word document
void replace(char * str,char a,char b) 
{
	if (*str == '\0')
	{
		return;
	}
	if (*str == a)
	{
		*str = b;
	}
	replace(str + 1, a, b);
}

//To get even count  
int getEvenCount(int n)
{
	if (n == 0)
	{
		return n;
	}
	int count = 0;
	int x;
	cout << "Enter any number";
	cin >> x;
	if (x % 2 == 0)
	{
		count++;
		return count + getEvenCount(n - 1);
	}
	else
		return count + getEvenCount(n - 1);
}

//To reverse any integer or to check either the integer is the plaindrom or not.
int reversrOrPlainDrom(int num1,int num2)
{
	if (num1 == 0) {
		return num2;
	}
	num2 *= 10;
	num2 += (num1 % 10);
	num1 = num1 / 10;
	return reversrOrPlainDrom(num1, num2);
}

//To find LCM of two numbers.
int findlcm(int x, int y)
{
	static int multiple = 0;

	// Increments multiple by adding max value to it
	multiple += y;

	if ((multiple % x == 0) && (multiple % y == 0))
	{
		return multiple;
	}
	else
	{
		return findlcm(x, y);
	}
}

//ArmStrong number
int getDigitCount(int n) 
{
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}
int getSum(int num) 
{
	static int order = getDigitCount(num);
	if (num == 0) {
		return 0;
	}
	else {
		return pow(num % 10, order) + getSum(num / 10);
	}
}


//Fibonaci Sequence 
int fibonnaci(int x) {
	if ((x == 1) || (x == 0)) {
		return(x);
	}
	else {
		return(fibonnaci(x - 1) + fibonnaci(x - 2));
	}
}


//Product of two numbers 
int product(int a, int b)
{
	if (a < b)
	{
		return product(b, a);
	}
	else if (b != 0)
	{
		return (a + product(a, b - 1));
	}
	else
	{
		return 0;
	}
}


//Decimal to Binary
int find(int decimal_number)
{
	if (decimal_number == 0)
		return 0;
	else
		return (decimal_number % 2 + 10 *find(decimal_number / 2));
}


//To find largest
void findlargest(int* arr, int start, int end)
{
	if (start == end)
	{
		cout << arr[end] << endl;
		return;
	}
	else if (start + 1 == end)
	{
		cout << arr[start] << endl;
		cout << arr[end] << endl;
		return;
	}
	cout << arr[start] << endl << arr[end] << endl;
	findlargest(arr, start + 1, end - 1);
}

//To print n term of fibonaci series
int fib(int x) {
	if ((x == 1) || (x == 0)) {
		return(x);
	}
	else {
		return(fib(x - 1) + fib(x - 2));
	}
}
	
int main()
{
	/*int arr[7] = {2,3,-10,5,1,7,8};
	reverse(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i]<<endl;
	}*/

	cout<<getStringLenght("ali");

	/*char arr[] = {'a','l','i','r','a','z','a','\0'};
	replace(arr,'a','w');
	cout << arr;*/

	cout<<reversrOrPlainDrom(234,0);

	cout<<fibonnaci(2);


	/*int x, i = 0;
	cout << "Enter the number of terms of series : ";
	cin >> x;
	cout << "Fibonnaci Series : ";
	while (i < x) {
		cout << " " << fib(i);
		i++;
	}*/

	return 0;
}