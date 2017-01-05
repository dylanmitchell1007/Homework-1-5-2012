#include <iostream>
#include <cstdlib>
using namespace std;


	//	void PrintInteger(int variable)
	//{
	//	std::cout << variable << std::endl;
	//}




//#1  //Displays the_variable which is 2.
//#2  
//float Low(float a, float b)
//{
//
//
//	if (a < b)
//	{
//		return a;
//	}
//
//	if (b < a)
//	{
//		return b;
//	}
//}
////#3
//float Low(float a, float b, float c)
//{
//
//
//	if (a < b && a < c)
//	{
//		return a;
//	}
//	if (b < a && b < c)
//	{
//		return b;
//	}
//	if (c < a && c < b)
//	{
//		return c;
//	}
//
//}
//
////#4
//float Half(float num)
//{
//	return num / 2;
//}

//#5
float coinToss(float h, float t)
{
	int randNum = rand() % 1;
	
	return randNum;
}




int main()
{   
	cout << "Head Or Tails";
	cout << "0 = Heads" "/n" " 1 = Tails";
	cout << coinToss(0, 1);
	//cout<< Low(45, 22, 12);
	system("pause");



	//Write a function that returns the smaller of two floats that are passed to it:
	//You should make a program that asks the user for two different numbers such that it
		//outputs: enter value 1: 10.6 enter Value 2: -67.8
}
			