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



// int pass;

// cout<<"Enter the passward: ";
// cin>>pass;
// (pass==1234)
// ?cout<<" cash withdrawl"
// :

// (
// cout<<" invalid passward try agin"
// ,cin>>pass,
// (pass==1234)?cout<<"cash withdrawl":
// (
//  cout<<"ipta",
//  cin>>pass,
//  (pass==1234)?cout<<"cash withdrawl":cout<<"card bloked"
//     )
// );




// int pass;

// cout<<"Enter the password";
// cin>>pass;
// (pass==0363)?cout<<"cash withdrawl":cout<<"invalit pin try "

//   ,cin>>pass,(pass==1963)?cout<<"cash withdrawl":cout<<"Invalid pin try again"
    
//       ,cin>>pass,(pass==1963)?cout<<"cash withdrawl":cout<<"Card Blocked";








// conditional statement

// int month;
// cout<<"enter the month between 1-12";
// cin>>month;
// if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
// {

//     cout<<"31  days";
// }
// else if(month==4 || month==6 || month==9 || month==11)
// {
//     cout<<"30  days";
// }
// else if(month==2)
// {
//     cout<<"28/29  days";
// }
// else
// {
//     cout<<"ii";
// }


// int day;

// cout<<"Enter the day number: ";
// cin>>day;
// if(day==1)
// {
//     cout<<"Sunday";
// }

// else if(day==2)
// {  
//         cout<<"Mon";  
// }

// else if(day==3)
// {  
//         cout<<"tue";  
// }
// else if(day==4)
// {  
//         cout<<"wed";  
// }
// else if(day==5)
// {  
//         cout<<"thu";  
// }
// else if(day==6)
// {  
//         cout<<"fri";  
// }
// else if(day==7)
// {  
//         cout<<"sat";  
// }
// else

// {
//     cout<<"Invalid input";
// }







// char single;
// cout<<"Enter the character: ";
// cin>>single;
// if(single>='A' && single<='Z' || single>='a' && single<='z' )
// {

//         if(single>='A' && single<='Z' )
//         {
//                 cout<<"Its a uppercase";
//         }
//        else if(single>='a' && single<='z' )
//         {
//                 cout<<"Its a lowercase";
//         }
        
// }
// else{
//         cout<<"Its a special symbol";    
//      }


// string input;
// cout<<"enter the name of web";
// cin>>input;

// if(input=="www.tourism.com")
// {
//         cout<<"enter from tgh egiven options int=internationala dom=domestic";
//         cin>>input;
//         if(input=="int")
//         {
//                 cout<<"enter from tgh egiven options jspsn,korea, pakistan";
//                 cin>>input;
//                 if(input=="japan")
//                 {
//                         cout<<"1200rs";
//                 }
//                else if(input=="korea")
// {
//         cout<<"120rs";
// }
// else if(input=="pakistan")
// {
//         cout<<"0rs";
// }

// else
// {
//         cout<<"iadrss";
// }   

//         }
//         else if(input=="dom")
//         {
//                 cout<<"enter from tgh egiven options baang,mumbai,delhi";
//                 cin>>input;
//                 if(input=="banglore")
//                 {
//                         cout<<"1200rs";
//                 }
//                else if(input=="mumbai")
// {
//         cout<<"120rs";
// }
// else if(input=="delhi")
// {
//         cout<<"0rs";
// }

// else
// {
//         cout<<"iadrss";
// }
//         }
//         else
//         {
//                 cout<<"iadrss";
//         }
        
// }
// else{
//         cout<<"iadrss";
// }




// int a=10;
// int b=20;
// int temp;
// with two variables  with three variables







// int method;
// cout<<"Enter the method num: 2 or 3";
// cin>>method;
// if(method==2)
// {
// a=a+b;
// b=a-b;
// a=a-b;

// }
// else if(method==3)
// {
// temp=a;
// a=b;
// b=temp;

// }
// else
// {
//         cout<<"Wrong method number";
// }




// cout<<a<<b;




}

