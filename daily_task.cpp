#include<iostream>
using namespace std;
int main()
{

                            // 04-05-2025
    
// ---------------------1--------------------------------------------------------

// Write a C++ code snippet that takes an integer as input and prints "Divisible by 3" if the number is perfectly divisible by 3, and "Not divisible by 3" otherwise.

// int num;
// cout<<"Enter the number";
// cin>>num;
// if(num%3==0)
// {
//     cout<<"No. is divisible";
// }
// else{
//     cout<<"No. is not divisible";
// }


// ---------------------2--------------------------------------------------------

// Write a C++ code snippet that takes two integers as input and prints the larger of the two numbers. If the numbers are equal, it should print "The numbers are equal".



// int a;
// int b;
// cout<<"Enter the first number ";
// cin>>a;
// cout<<"Enter the Second number ";
// cin>>b;
// if(a>b)
// {
//     cout<< a <<" is the larger number";
// }
// else if(b>a)
// {
//     cout<< b <<" is the larger number";
// }
// else
// {
//     cout<< a<< " and " << b << " are equal";
// }

// ---------------------3--------------------------------------------------------

// Write a C++ code snippet that takes an integer as input representing a student's score. If the score is 60 or greater, print "Pass". Otherwise, print "Fail".

// int score;
// cout<<"Enter your score ";
// cin>>score;
// if(score>=60)
// {
//     cout<<"Pass";
// }
// else
// {
//     cout<<"Fail";
// }

// ---------------------4--------------------------------------------------------

// Write a C++ code snippet that takes an integer as input representing a day of the week (e.g., 1 for Monday, 2 for Tuesday, and so on, up to 7 for Sunday). The program should then print the corresponding day of the week. For example, if the input is 1, it should print "Monday".

// int day;
// cout<<"Enter the day ";
// cin>>day;
// if(day==1)
// {
//     cout<<"Monday";
// }
// else if(day==2)
// {
//     cout<<"Tuesday";
// }
// else if(day==3)
// {
//     cout<<"Wednesday";
// }
// else if(day==4)
// {
//     cout<<"Thursday";
// }
// else if(day==5)
// {
//     cout<<"Friday";
// }
// else if(day==6)
// {
//     cout<<"Saturday";
// }
// else if(day==7)
// {
//     cout<<"Sunday";
// }
// else
// {
//     cout<<"Invalid day number";
// }


// ---------------------5--------------------------------------------------------


// Write a C++ code snippet that takes two floating-point numbers as input and prints their product (the result of their multiplication)

// float a;
// float b;
// cout<<"Enter the first number";
// cin>>a;
// cout<<"Enter the Second number";
// cin>>b;
// cout<<a*b;



// ---------------------6--------------------------------------------------------


// Write a C++ code snippet that takes an integer as input representing a person's age. Print "Eligible to vote" if the age is 18 or greater AND less than or equal to 65. Otherwise, print "Not eligible to vote".


// int age;
// cout<<"Enter your age ";
// cin>>age;
// if(age>=18 && age<=65)
// {
//    cout<< "Eligible to vote ";
// }
// else
// {
//     cout<< "Not Eligible to vote ";
// }

// ---------------------7--------------------------------------------------------


// Write a C++ code snippet that takes an integer as input representing a temperature in Celsius. If the temperature is below 0, print "Freezing". If it is between 0 and 10 (inclusive), print "Cold". If it is between 11 and 25 (inclusive), print "Moderate". If it is above 25, print "Warm".


// int temp;
// cout<<"Enter the temperature ";
// cin>>temp;
// if(temp<0)
//  {
//     cout<<"Freezing";
//  }
// else if(temp>=0 && temp<=10)
// {
//     cout<<"Cold";
// }
// else if(temp>=11 && temp<=25)
// {
//     cout<<"Moderate";
// }
// else
// {
//     cout<<"warm";
// }


// ---------------------8--------------------------------------------------------

// Write a C++ code snippet that takes a single character as input. If the character is a lowercase vowel ('a', 'e', 'i', 'o', 'u'), print "Lowercase vowel". Otherwise, print "Not a lowercase vowel".

// char single;
// cout<<"Enter a vowel: ";
// cin>>single;
// if(single=='a')
// {
//     cout<<"Its a lowercase vowel";
// }
// else if(single=='e')
// {
//     cout<<"Its a lowercase vowel";
// }
// else if(single=='i')
// {
//     cout<<"Its a lowercase vowel";
// }
// else if(single=='o')
// {
//     cout<<"Its a lowercase vowel";
// }
// else if(single=='u')
// {
//     cout<<"Its a lowercase vowel";
// }
// else
// {
//     cout<<"Not a lowercase vowel";
// }

// ---------------------9--------------------------------------------------------

// Write a C++ code snippet that takes an integer as input. If the number is positive, print "Positive". If the number is negative, print "Negative". If the number is zero, print "Zero".

// int num;
// cout<<"Enter the number: ";
// cin>>num;
// if(num>0)
// {
//     cout<<"Positive";
// }
// else if(num<0)
// {
//     cout<<"Negative";
// }
// else
// {
//         cout<<"Zero";
// }

// ---------------------10--------------------------------------------------------

// Write a C++ code snippet that takes three integers as input. Determine and print the largest of the three numbers


// int a;
// int b;
// int c;
// cout<<"Enter the number: ";
// cin>>a;
// cout<<"Enter the number: ";
// cin>>b;
// cout<<"Enter the number: ";
// cin>>c;
// if(a>b && a>c)
// {
//     cout<<a<<" is greater";
// }
// else if(b>c && b>a)
// {
//     cout<<b<<" is greater";
// }
// else if(c>a && c>b)
// {
//     cout<<c<<" is greater";
// }
// else if(a==b && b==c)
// {
//     cout<<"All three numbers are equal";
// }


// ---------------------11--------------------------------------------------------

// Write a C++ code snippet that takes three integers as input. Determine and print the smallest of the three numbers.

// int a;
// int b;
// int c;
// cout<<"Enter the number: ";
// cin>>a;
// cout<<"Enter the number: ";
// cin>>b;
// cout<<"Enter the number: ";
// cin>>c;
// if(a<b && a<c)
// {
//     cout<<a<<" is the smallest one";
// }
// else if(b<a && b<c)
// {
//     cout<<b<<" is the smallest one";
// }
// else if(c<b && c<a)
// {
//     cout<<c<<" is the smallest one";
// }
// else if(a==b && b==c)
// {
//     cout<<" Numbers are equals";
// }
                            // 05-05-2025

// Write a C++ code snippet that takes an integer representing the number of units of electricity consumed. Calculate and print the total electricity bill based on the following rates:

// For the first 50 units: ₹ 3.50 per unit
// For the next 100 units (i.e., units 51 to 150): ₹ 4.00 per unit
// For the next 100 units (i.e., units 151 to 250): ₹ 5.20 per unit
// For units above 250: ₹ 6.50 per unit

// float unit;
// cout<<"Enter number of unit consumed: ";
// cin>>unit;
// if(unit<=50)
// {
//     cout<<unit*3.50;
// }
// else if(unit<=150)
// {
//     cout<<(50*3.50) +((units-50)*4.00);
// }
// else if(unit<=250)
// {
//     cout<<(50*3.50)+(100*4.00)+((units-150)*5.20);
// }
// else if(unit>250)
// {
//     cout<<(50*3.50)+(100*4.00)+(100*5.20)+((units-250)*6.50);
// }
// else
// {
//     cout<<"invalid"
// }


                            // 06-05-2025

// ---------------------1--------------------------------------------------------

// Write a C++ code snippet that takes an integer as input representing a month (1 for January, 2 for February, and so on, up to 12 for December). The program should then print the number of days in that month. For simplicity, assume February always has 28 days. Include a check for invalid month numbers.



// int month;
// cout<<"Enter the month name: ";
// cin>>month;
// if(month==1)
// {
//     cout<<"Jan";
//     cout<<31;
// }
// else if(month==2)
// {
//     cout<<"feb";
//     cout<<28;
// }
// else if(month==3)
// {
//     cout<<"march";
//     cout<<31;
// }
// else if(month==4)
// {
//     cout<<"april";
//     cout<<30;
// }
// else if(month==5)
// {
//     cout<<"may";
//     cout<<31;
// }
// else if(month==6)
// {
//     cout<<"june";
//     cout<<30;
// }
// else if(month==7)
// {
//     cout<<"july";
//     cout<<31;
// }
// else if(month==8)
// {
//     cout<<"aug";
//     cout<<31;
// }
// else if(month==9)
// {
//     cout<<"sep";
//     cout<<30;
// }
// else if(month==10)
// {
//     cout<<"out";
//     cout<<31;
// }
// else if(month==11)
// {
//     cout<<"nov";
//     cout<<30;
// }
// else if(month==12)
// {
//     cout<<"dec";
//     cout<<31;
// }

                            
// ---------------------2--------------------------------------------------------

// Write a C++ code snippet that takes an integer as input representing the year. Determine if the year is a leap year or not and print the result.

// A year is a leap year if it is divisible by 4, but not by 100, unless it is also divisible by 400.

// Here's the breakdown of the rules:

// If the year is divisible by 4, it is a leap year, unless...
// ...the year is also divisible by 100. If it is divisible by 100, it is not a leap year, unless...
// ...the year is also divisible by 400. If it is divisible by 400, it is a leap year.

// int year;
// cout<<"Enter the year to check: ";
// cin>>year;
// if(year%4==0)
// {
//   if(year%100==0)
// {

//     if(year%400==0)
//     {
//         cout<<"leap year";
//     }
//     else
//    {
//         cout<<"not a leap year";
//    }
// }

// else
// {
//     cout<<"leap year";
// }
// }
// else
// {
//     cout<<"not a leap year";
// }

// ---------------------3-------------------------------------------------------------


Write a C++ code snippet that takes two integers as input: the current hour (in 24-hour format, 0-23) and the current minute (0-59). Based on the time, print a greeting:

"Good morning" if the hour is between 6 (inclusive) and 12 (exclusive).
"Good afternoon" if the hour is between 12 (inclusive) and 18 (exclusive).
"Good evening" if the hour is between 18 (inclusive) and 22 (exclusive).
"Good night" for all other times.




















}