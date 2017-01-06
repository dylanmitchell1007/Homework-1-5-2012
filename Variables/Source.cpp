#include <iostream>
using namespace std;


//(4).    //Ask the user for 2 numbers in the console window and store the result in variables called “a”
//and “b” print the result to screen.Write code that swaps the values for these variables, then
//print the variables “a” and “b” again.





int Nums()
{
	int A = 0;
	int B = 0;


	cout << "Enter 2 Numbers";
	"/n";
	cin >> A; cin >> B;
	
	"/n";
	int temp = A;
	A = B;
	B = temp;
	
	return 0;

}




////(5).
//float imp()
//{
//	int i = 0;
//	float f = 0;
//	char ch = 'a';
//	cin >> i >> ch >> f;
//	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;//	return ch;//}



//(6).
//int whil5()
//{
//		int A = 0;
//		int B = 0;
//		int C = 0;
//		int D = 0;
//		int E = 0;
//
//
//		cout << "Enter 5 Numbers";
//		"/n";
//		cin >> A >> B >> C >> D >> E;
//		"/n";
//		return (A+B+C+D+E)/5;
//		
//	}



//(7.)
//char Alpha()
//{
//	char a = 0;
//	char b = 0;
//
//	cout << "Enter 2 Different Letters";
//	cin >> a >> b;
//
//	return (a + b) / 2;
//
//
//}





int main()
{

	Nums();
	//imp();
	//whil5();
	//cout<<Alpha();
	
	system("pause");
	return 0;

}