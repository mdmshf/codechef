

	 #include <iostream>
	 #include <stdio.h>
	

	

	 using namespace std;
	

	

	

	 class ArithMeticOperations
	 {
	 	public:
	

	 		inline int addition(int a, int b)
	 		{
	 			return (a + b);
	 		};
	 	public:
	

	 		inline int subtraction(int a, int b)
	 		{
	 			return (a - b);
	 		};
	 	public:
	

	 		inline int multiplication(int a, int b)
	 		{
	 			return (a * b);
	 		};
	 	public:
	

	 		inline int modulus(int a, int b)
	 		{
	 			return (a % b);
	 		};
	 	public:
	

	 		inline int division(int a, int b)
	 		{
	 			return (a / b);
	 		};
	 };
	

	

	 int main(){cout<<"Mohd Musharraf 15BCS0044";
	 
	 	int a,b;
	

	 	cout << "Enter the numbers a and b" << endl;
	 	cin >> a;
	 	cin >> b;
	

	 	ArithMeticOperations ao;
	

	 	int add = ao.addition(a,b);
	

	 	cout << "Addition is : " ;
	 	cout << add;
	 	cout<<endl;
	

	 	int sub = ao.subtraction(a,b);
	

	 	cout << "subtraction is : " ;
	 	cout << sub;
	 	cout<<endl;
	

	 	int mul = ao.multiplication(a,b);
	

	 	cout << "multiplication is : " ;
	 	cout << mul;
	 	cout<<endl;
	

	 	int div = ao.division(a,b);
	

	 	cout << "division is : " ;
	 	cout << div;
	 	cout<<endl;
	

	 	int Mod = ao.modulus(a,b);
	

	 	cout << "Modulus is : " ;
	 	cout << Mod;
	 	cout<<endl;
	 }
	

