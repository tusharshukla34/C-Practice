# include <iostream>
# include <limits>
using namespace std;
int main()
{

// areas
// circle,square,rectangle,triangle


// int radius;
// cout<<"enter the value of your radius";
// cin>>radius;
// cout<<radius*radius*22/7;

// int side;
// cout<<"enter the side of square";
// cin>>side;
// cout<<side*side;


// int breadth;
// int height;
// cout<<"enter the value of breadth and height";
// cin>>breadth;
// cin>>height;
// cout<<(breadth*height)/2;

// int hindi;
// int english;
// int math;

// cout<<"enter the marks of hindi subject";
// cin>>hindi;
// cout<<"enter the marks of english subject";
// cin>>english;
// cout<<"enter the marks of math subject";
// cin>>math;


// cout<<((hindi+english+math)*100)/300;



// datatypes

// int float double char void

// return type
// int= whole numbers(complete numbers)
// float=decimal numbers(1.2,3,9);7-8 digits after point
// double=decimal numbers()14-15 digits
// char=ul,lc,special symbols


// non return type
// void=no storage(redundancy reduce)


// 1.limit
// 2.adress
//3.size int =4byte  char=1byte


// char a='a';
// ascii charset /  unicode 

// int a;
// // cout<<sizeof(int);


// cout<<&a;
// // hexadecimal 


// cout<<numeric_limits<float>::max();






// int b;
// cout<<sizeof(int);
// float c;
// cout<<sizeof(float);


// cout<<&c;


// cout<<numeric_limits<int>::min();




// // operators

// unarry operator
// incremenrt=pre/post// decrement=pre/post

// // binary
// arithmetic(+,-,*,/,%)
// logical(and,or,not,exor)
// relational(>,<>=<= == !=)
// Assignment(+= -=*= /= %=)
// bitwise operator(and or not exor)


// ternary operator



// ++ --

// int a=10;
// cout<<--a;
// cout<<a;



// if we want to see the number we have to cast in integer data type
// cout<<(int)numeric_limits<char>::max(); 
 


// int a=10;
// int b=20;
// int c=1;
// int d=11;
// cout<<++d  - c++ + --b + a++ - --d - c--;
// 12-1+19+10-11-2


// arithmetic
// cout<<a+b;
// cout<<a-b;
// cout<<a*b;
// cout<<a/b;
// cout<<a%b;

// asignment
// a=+b;
// cout<<a;

// dry principle=do not repeat yourself

// a+=b;
// cout<<a;

// relational
// cout<<(a==b);

// // logical   exor
//  ip1   ip2   out
//  1      1     0
//  1      0      1
//  0      1      1
//  0      0      0

// int a=13;
// int b=3;

// cout << (a & b);

// (condition)?true:false

// int number =15;
// // (number%2==0)?cout<<"even":cout<<"odd";

// (number>10 && number<20)?cout<<number:cout<<"invalid";


int num;

cout<<"Enter the number between 10 to 20: ";
cin>>num;


(num>10 && num<20 && num%2==0)?cout<<num<<" is Completely divisible by 2":cout<<num<<" is Not divisible by 2";



}

