// #include<iostream>
// using namespace std;
// class shape{
// protected:
// int l,b,h;
// public:
// void setlength(int x){
// l=x;}
// void setbreath(int y){
// b=y;}
// void setheight(int z){
// h=z;}};
// class cuboid: public shape{
// public:
// int getvolume(){
// return (l*b*h);}
// void getarea(){
// cout<<2*(l*b+b*h+h*l)<<endl;}};
// int main(){
// cuboid s;
// s.setlength(30);
// s.setbreath(40);
// s.setheight(50);
// cout<<s.getvolume();
// cout<<endl;
// s.getarea();
// return 0;}


// #include<iostream>
// using namespace std;
// class mainclass{
// public:
// void getarea(int num){
// int area=3.14*num*num;
// cout<<"AREA OF THE CIRCLE IS: "<<area<<endl;}};
// class second: public mainclass{
// public:
// void getarea(int num){
// int area=num*num;
// cout<<"AREA OF THE SAQURE IS: "<<area<<endl;
// mainclass::getarea(num);}};
// class third: public mainclass{
// public:
// void getarea(int num){
// int volume=num*num*num;
// cout<<"THE VOLUME OF THE CUBE IS: "<<volume<<endl;
// mainclass::getarea(num);}};
// int main(){
// mainclass m;
// second s;
// third d;
// m.getarea(10);
// s.getarea(20);
// s.getarea(10);
// d.getarea(30);
// d.getarea(10);
// return 0;}


// #include<iostream>
// using namespace std;
// class solution{
// public:
// void cars(){
// cout<<"THIS FUCTION IS HARD TO CALL FROM ANOTHER CLASS BECAUSE WE DONOT MAKE IT VIRTUAL:"<<endl;}
// virtual void newcars(){
// cout<<"WE CAN CALL THIS FUNCTION FROM ANOTHER CLASS BECUASE THIS IS A VIRTUAL FUCNTION:"<<endl;}};
// class second : public solution{
// public:
// void cars(){
// cout<<"THIS IS OVERIDDING USE OF SAME FUNCTION FROM ANOTHER CLASS: "<<endl;}
// void newcars(){
// cout<<"WE CAN  CALL THIS FUNCTION BY USING POINTER AND ASSIGN THE ADDRESS OF CLASS SECOND : "<<endl;}};
// int main(){
// solution *ptr;
// second s;
// ptr=&s;
// ptr->cars();
// ptr->newcars();
// return 0;}



// #include<iostream>
// using namespace std;
// class shape{
// public:
// virtual void getarea()=0;};
// class circle: public shape{
// public:
// void getarea(){
// cout<<"ENTER THE PROPORTION OF THE SHAPE: "<<endl;
// int radius;
// cin>>radius;
// cout<<"AREA OF THE CIRCLE :"<<3.14*radius*radius<<endl;}};
// class rectangle : public shape{
// public:
// void getarea(){
// cout<<"ENTER THE PROPORTION OS THE SHAPE:"<<endl;
// int length,breadth;
// cin>>length;
// cin>>breadth;
// cout<<"AREA OF THE REACTANGLE:  "<<length*breadth<<endl;}};
// class saqure : public shape{
// public:
// void getarea(){
// cout<<"ENTER THE PROPORTION OS THE SHAPE:"<<endl;
// int length;
// cin>>length;
// cout<<"AREA OF THE SAQURE: "<<length*length<<endl;}};
// int main(){
// circle c;
// c.getarea();
// cout<<endl;
// rectangle r;
// r.getarea();
// cout<<endl;
// saqure s;
// s.getarea();
// return 0;} 



// #include<iostream>
// using namespace std;
// class solutionA{
// public:
// void printmessage(){
// cout<<"THIS IS THE CONCEPT OF MULTIPLE INHERTANCE:"<<endl;}};
// class solutionB{
// public:
// void printmessage(){
// cout<<"WE CAN CALL THIS MESSAGE BY USING THIRD CLASS:"<<endl;}};
// class solutionC{
// public:
// void newclass(){
// cout<<" WE USE DIFFERENT FUNCTION IN THIS CASE:"<<endl;}};
// class solutionABC : public solutionA, public solutionB,  public solutionC{
// public:
// void printmessage(){
// solutionA::printmessage();
// solutionB::printmessage();
// cout<<"THIS IS THE PRINTED IN THE SOLUTIONABC:"<<endl;}
// void newclass(){
// solutionC::newclass();}}; 
// int main(){
// solutionABC s;
// s.printmessage();
// s.newclass();
// return 0;}





// PURE VIRTUAL FUNCTION MEAN POLYMORPHISM FUNCTION OVERRIDING (SAME FUNCTION NAME AND THE ARGUMENTS, RUM TIME POLYMORPHISM)
// ANOTHER TYPE OF POLYMORPHISM IS THE FUNCTION OVERLOADING IN WHICH WE USE SAME FUNCTION NAME BUT WITH DIFFERENT ARGUMNETS AND KNOWN AS COMPILE TIME POLYMORPHISM  


// concept of Virtual Functions

// #include <iostream>
// using namespace std;
// class base {
// public:
// 	virtual void print() { cout << "print base class\n"; }

// 	void show() { cout << "show base class\n"; }
// };

// class derived : public base {
// public:
// 	void print() { cout << "print derived class\n"; }

// 	void show() { cout << "show derived class\n"; }
// };

// int main()
// {
// 	base* bptr;                 //  CREATATING AN OBJECT OF THE BASE CALSS 
// 	derived d;
// 	bptr = &d;

// 	bptr->print();            // Virtual function, binded at runtime
	
//     bptr->show();            // Non-virtual function, binded at compile time

// 	return 0;
// }




// #include <iostream>
// using namespace std;

// class base {
// public:
// 	void fun_1() { cout << "base-1\n"; }
// 	virtual void fun_2() { cout << "base-2\n"; }
// 	virtual void fun_3() { cout << "base-3\n"; }
// 	virtual void fun_4() { cout << "base-4\n"; }
// };

// class derived : public base {
// public:
// 	void fun_1() { cout << "derived-1\n"; }
// 	void fun_2() { cout << "derived-2\n"; }
// 	void fun_4(int x) { cout << "derived-4\n"; }
// };

// int main()
// {
// 	base* p;
// 	derived obj1;
// 	p = &obj1;

// 	// Early binding because fun1() is non-virtual
// 	// in base
// 	p->fun_1();

// 	// Late binding (RTP)
// 	p->fun_2();

// 	// Late binding (RTP)
// 	p->fun_3();

// 	// Late binding (RTP)
// 	p->fun_4();

// 	// Early binding but this function call is
// 	// illegal (produces error) because pointer
// 	// is of base type and function is of
// 	// derived class
// 	// p->fun_4(5);

// 	return 0;
// }






// ENCAPSULATION MEAN PROVIDING MORE SECURITY TO THE DATA IN A CODE, WE USE GETTER AND THE SETTER METHOD TO SECURE OR HIDDEN THE DATA VARIBALE FROM THE WORLD THE DATA

// #include <iostream>
// using namespace std;
// class temp{
// 	int a;
// int b;
// public:
// int solve(int input){
// 	a=input;
// 	b=a/2;
// 	return b;
// }
// };

// int main() {
// int n;
// cin>>n;
// temp half;
// int ans=half.solve(n);
// cout<<ans<<endl;
	
// }



// #include <iostream>
// #include <string>                           // THIS IS THE KEY WORD TO USE INTIALIZE THE SAME NAME 
// using namespace std;

// class Person {
// private:
// 	string name;
// 	int age;
// public:
// 	Person(string name, int age) {
// 	this->name = name;
// 	this->age = age;
// 	}
// 	void setName(string name) {
// 	this->name = name;
// 	}
// 	string getName() {
// 	return name;
// 	}
// 	void setAge(int age) {
// 	this->age = age;
// 	}
// 	int getAge() {
// 	return age;
// 	}
// };

// int main() {
// Person person("John Doe", 30);

// cout << "Name: " << person.getName() << endl;
// cout << "Age: " << person.getAge() << endl;

// person.setName("Jane Doe");
// person.setAge(32);

// cout << "Name: " << person.getName() << endl;
// cout << "Age: " << person.getAge() << endl;

// return 0;
// }




// // Encapsulation
// #include <iostream>
// using namespace std;

// class Encapsulation {
// private:
// 	// Data hidden from outside world
// 	int x;

// public:
// 	// Function to set value of
// 	// variable x
// 	void set(int a) { x = a; }

// 	// Function to return value of
// 	// variable x
// 	int get() { return x; }
// };
// int main()
// {
// 	Encapsulation obj;
// 	obj.set(5);
// 	cout << obj.get();
// 	return 0;
// }




// #include <iostream>
// using namespace std;

// class Circle {
// private:
// 	float area;
// 	float radius;

// public:
// 	void getRadius()
// 	{
// 		cout << "Enter radius\n";
// 		cin >> radius;
// 	}
// 	void findArea()
// 	{
// 		area = 3.14 * radius * radius;
// 		cout << "Area of circle=" << area;
// 	}
// };
// int main()
// {
// 	Circle cir;
// 	cir.getRadius(); 
// 	cir.findArea(); 
// }

// ABASTRACTION IN CPP
// #include<iostream>
// using namespace std;

// class Vehicle
// {
// private:
// 		void piston()
// 		{
// 			cout<<"4 piston\n";
// 		}

// 		void manWhoMade()
// 		{
// 			cout<<"Markus Librette\n";
// 		}
// 	public:
// 		void company()
// 		{
// 			cout<<"GFG\n";
// 		}
// 		void model()
// 		{
// 			cout<<"SIMPLE\n";
// 		}
// 		void color()
// 		{
// 			cout<<"Red/GREEN/Silver\n";
// 		}
// 		void cost()
// 		{
// 			cout<<"Rs. 60000 to 900000\n";
// 		}
// 		void oil()
// 		{
// 			cout<<"PETRO\n";
// 		}
// };
// int main()
// {
	
// 	Vehicle obj;
// 	obj.company();
// 	obj.model();
// 	obj.color();
// 	obj.cost();
// 	obj.oil();
// }



// EXCEPTIONAL HANDLING =  IF THERE IF FAILURE IN CODE AND TO  AVOID IT USING TRY AND CATCH WITHOUT DISTRUB THE THE FLOW OF THE CODE


// in exception handling use of try,catch and throw

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int main()
// {

// 	// try block
// 	try {
// 		int numerator = 10;
// 		int denominator = 0;
// 		int res;

// 		// check if denominator is 0 then throw runtime
// 		// error.
// 		if (denominator == 0) {
// 			throw runtime_error(
// 				"Division by zero not allowed!");
// 		}

// 		res = numerator / denominator;
// 		cout << "Result after division: " << res << endl;
// 	}
// 	catch (const exception& e) {
// 		cout << "Exception " << e.what() << endl;
// 	}

// 	return 0;
// }



 
// of exception handling using class 


// #include <bits/stdc++.h> 
// using namespace std; 
// class Number { 
// private: 
// 	int a, b; 

// public:  
// 	Number(int x, int y) 
// 	{ 
// 		a = x; 
// 		b = y; 
// 	} 
// 	int gcd() 
// 	{ 
// 		while (a != b) { 
// 			if (a > b) 
// 				a = a - b; 
// 			else
// 				b = b - a; 
// 		}  
// 		return a; 
// 	} 
// 	bool isPrime(int n) 
// 	{ 
// 		if (n <= 1) 
// 			return false; 

// 		for (int i = 2; i < sqrt(n); i++) {
// 			if (n % i == 0) 
// 				return false; 
// 		}
// 		return true; 
// 	} 
// };  
// class MyPrimeException { 
// };  
// int main() 
// { 
// 	int x = 13, y = 56; 

// 	Number num1(x, y); 
// 	cout << "GCD is = "
// 		<< num1.gcd() << endl; 

// 	if (num1.isPrime(x)) 
// 		cout << x 
// 			<< " is a prime number"
// 			<< endl; 

// 	if (num1.isPrime(y)) 
// 		cout << y 
// 			<< " is a prime number"
// 			<< endl; 

// 	// Exception Handling 
// 	if ((num1.isPrime(x)) 
// 		|| (num1.isPrime(y))) { 

// 		// Try Block 
// 		try { 
// 			throw MyPrimeException(); 
// 		} 

// 		// Catch Block 
// 		catch (MyPrimeException t) { 

// 			cout << "Caught exception "
// 				<< "of MyPrimeException "
// 				<< "class." << endl; 
// 		} 
// 	} 
// 	return 0; 
// } 


