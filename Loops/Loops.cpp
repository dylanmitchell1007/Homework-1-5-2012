#include<iostream>
using namespace std;
//Exercise 1:
//Using a for loop to iterate backward, print the values 100 to 0.
//- Modify the for loop to include 0 and include 100
//- Modify the for loop to include 0 and not 100
//- Modify the for loop to not include 0 and include 100
//- Modify the for loop to decrement by 2		


								//Exercise 2:
//Using a for loop, iterate through numbers 0 to 100.
//- For multiples of 3 print “Fizz”
//- For multiples of 5 print “Buzz”
//- For multiples of 3 and 5 print “FizzBuzz”
//- Otherwise print the number.


//Note, you will need to use the modulus operator (%)


								//Exercise 3 
	//– Project Eula Problem :
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum
			//of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.





								//Exercise 4 :
//	Complete the above 3 exercises using a “while” loop.

int Loops1()
{
	//								//Exercise 1:
	////Using a for loop to iterate backward, print the values 100 to 0.
	////- Modify the for loop to include 0 and include 100
	////- Modify the for loop to include 0 and not 100
	////- Modify the for loop to not include 0 and include 100
	////- Modify the for loop to decrement by 2		
	//

	for (int i = 100; i >= 3; i--)
	{
		cout << i << "\n";

	}
	for (int i = 0; i <= 99; i++)
	{
		cout << i << "\n";
	}

	return 0;
}

int Loops2()
{
	//	//Exercise 2:
	//	//Using a for loop, iterate through numbers 0 to 100.
	//	//- For multiples of 3 print “Fizz”
	//	//- For multiples of 5 print “Buzz”
	//	//- For multiples of 3 and 5 print “FizzBuzz”
	//	//- Otherwise print the number.
	//
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz \n";
		}
		if (i % 5 == 0)
		{
			cout << "Buzz \n";
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz \n";
		}
			cout << i <<"\n";

	}




	return 0;
}
//
//
//													//Exercise 3 
											//– Project Eula Problem :
								//Find the sum 
								//of all 
								//below 1000
								//the multiples of 3 or 5 
int Loopsthru()
{
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	return sum;



}






int main()
{
	
	while (true)
	{
		Loops1();
		Loops2();
		cout << Loopsthru();
		system("pause");
		return false;
	}

	return 1;
}