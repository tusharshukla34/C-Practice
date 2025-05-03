#include <iostream>
#include <limits>
using namespace std;
int main()
{
    // int sell;
    // int cost;
    // // lets calculate profit

    // cout<<"Enter your Selling price";
    // cin>>sell;
    // cout<<"Enter the cost price";
    // cin>>cost;
    // cout<<"Profit you got is :";
    // cout<<sell-cost;
  // int a=5;
  // int b=11;
  // int c=81;
  // int d=61;
  // int e=2;

  // cout<<a-- + d-- - c++ - e-- + --c - d++;

//   cout<<sizeof(int);                         ye size nikalne ke liye 
//   cout<<numeric_limits<double>::min();       ye limit nikalne ke liye
// cout<<&a;                                    ye address nikalne ke liye



// Practise⬇️

// -------------------           1           -----------------------------------------

// int num;
// cout<<"Enter the number: ";
// cin>>num;
// if(num%2==0)
// {
//   cout<<"The number is even";
// } else{
//   cout<<"The number is odd";
// }
  
// -------------------           2            -----------------------------------------

// 2) Write a program that takes a temperature (in Celsius) as input and suggests whether to wear a jacket, shorts, or nothing based on the following conditions:

// Less than 10°C: "Wear a jacket"
// Between 10°C to 20°C: "Wear a light jacket"
// Between 21°C to 30°C: "Wear shorts"
// Above 30°C: "Stay indoors"

// int temp;
// cout<<"Enter the temperature in celcius: ";
// cin>>temp;
// if(temp<=10)
// {
//   cout<<"Wear a Jacket";
// }
// else if(temp>10 && temp<20)
// {
//  cout<<"Wear a light jacket";
// }
// else if(temp>21 && temp<30)
// {
//   cout<<"Wear shorts";
// }
// else if(temp>=30 && temp<=50)
// {
//   cout<<"Stay indoors";
// }
// else
// {
//   cout<<"Ghar mein beth or cooler ki hava kah";
// }


// -------------------           3            -----------------------------------------

// 3)Write a program that takes a year as input and determines if the year belongs to the past, present, or future:

// If the year is in the past (before the current year), print "Past".
// If the year is in the present (current year), print "Present".
// If the year is in the future (after the current year), print "Future".


// int year;
// cout<<"Enter the year: ";
// cin>>year;
// if(year<2025)
// {
//   cout<<"Past";
// }
// else if(year==2025)
// {
//   cout<<"Present year";
// }
// else
// {
//   cout<<"Future";
// }


// -------------------           4            -----------------------------------------

// Write a program that takes an integer input and checks if it is:

// Less than 10: "Less than 10"
// Between 10 and 20 (inclusive): "Between 10 and 20"
// Between 21 and 30 (inclusive): "Between 21 and 30"
// Greater than 30: "Greater than 30"

// int num;
// cout<<"Enter a number: ";
// cin>>num;
// if(num<10)
// {
//   cout<<"Less than 10";
// }
// else if(num>=10 && num<=20)
// {
//   cout<<"Between 10 and 20";
// }
// else if(num>=21 && num<=30)
// {
//   cout<<"Between 21 and 30";
// }
// else
// {
//   cout<<"Greater than 30";
// }

// -------------------           5            -----------------------------------------

// 5)Write a C++ program that takes a single character as input and checks:

// If it's an uppercase letter, print "Uppercase Letter"
// If it's a lowercase letter, print "Lowercase Letter"
// If it's a digit, print "Digit"
// If it's a special character, print "Special Character"

// char single;

// cout<<"Enter a single character: ";
// cin>>single;
// if(single>='A' && single<='Z')
// {
//   cout<<"Uppercase Letter";
// }
// else if(single>='a' && single<='z')
// {
//   cout<<"Lowercase Letter";
// }
// else if(single>=0 && single<=9)
// {
//   cout<<"Digit";
// }
// else
// {
//   cout<<"Special Character";
// }


// -------------------           6            -----------------------------------------


// Write a C++ program that takes three side lengths of a triangle as input and:

// First, check if the three sides can form a valid triangle.
// A triangle is valid if the sum of any two sides is greater than the third side.

// If valid, determine the type of triangle:
// Equilateral: all sides are equal
// Isosceles: any two sides are equal
// Scalene: all sides are different
// If not valid, print "Not a triangle"


// int a,b,c;
// cout<<"Enter the three side of triangle: ";
// cin>>a;
// cin>>b;
// cin>>c;

// if(a+b>c || b+c>a || c+a>b)
// {
//   if(a==b && b==c)
//     {
//       cout<<"Its a Equilateral triangle";
//     }
//      else if(a==b || b==c || c==a)
//      {
//         cout<<"Its a Isosceles triangle";  
//      }
//      else
//      {
//         cout<<"Its a Scalene triangle";
//      }
//     }
//   else
//   {
//     cout<<"Not a triangle";
//   }

// 1------2
// |      |
// |      |
// |      |
// 3------4

// 1-4
// 1-2-4
// 1-2-3-4
// 1-3-4
// 1-3-2-4



// int path;
// cout<<"enter your path";
// cin>>path;
// if(path==1)
// {
//   cout<<"enter your path";
// cin>>path;
// if(path==2)
// {
//   cout<<"enter your path";
// cin>>path;
// if(path==3)
// {
//   cout<<"enter your path";
//   cin>>path;
//   if(path==4)
//   {
//     cout<<"dr";
//   }
//   else{
//     cout<<"ir";
//   }
  
// }
// else if(path==4)
// {
//   cout<<"dr";
// }

// else{
//   cout<<"ir";
// }

// }
// else if(path==3)
// {

//   cout<<"enter your path";
//   cin>>path;
//   if(path==4)
//   {
//     cout<<"dr";
//   }
// else if(path==2)
// {

//   cout<<"enter your path";
//   cin>>path;
//   if(path==4)
//   {
//     cout<<"dr";

//   }
//   else{
//     cout<<"ir";
//   }

// }



// else{
//   cout<<"ir";
// }

// }
// else if(path==4)
// {
//   cout<<"dr";
// }
// else{
//   cout<<"ir";
// }

// }
// else
// {
//   cout<<"ir";
// }



// 1------2
// |      |
// |      |
// |      |
// 3------4

// 1-4
// 1-2-4
// 1-2-3-4
// 1-3-4
// 1-3-2-4
// int path;
// cout<<"Enter the path";
// cin>>path;
// if(path==1)
// {
//   cout<<"Enter the path";
//   cin>>path;

//   if(path==2)
//   {
//     cout<<"Enter the path";
//     cin>>path;
//     if(path==3)
//     {
//       cout<<"Enter the path";
//       cin>>path;
//       if(path==4) cout<<"dr";
//       else cout<<"ir";
//     }
//     else if(path==4)
//   {
//     cout<<"dr";
//   }
//   else
// {
//   cout<<"ir";
// }
//   }
//   else if(path==3){}
// else if(path==4) cout<<"dr";

// else{
//   cout<<"ir";
// }
// }
// else{
//   cout<<"ir";
// }




// 1------2
// |      |
// |      |
// |      |
// 3------4



int path;
    cout<<"Enter the path: ";
    cin>>path;
if(path==1)
{
  cout<<"Enter the path: ";
    cin>>path;
      if(path==2)
      {
        cout<<"Enter the path: ";
        cin>>path;
        if(path==3)
        {
          cout<<"Enter the path: ";
          cin>>path;
        }
        if(path==4)
        {
          cout<<"dr";
        }
        else
        {
          cout<<"ir";
        }
      }
else if(path==3)
{
     cout<<"Enter the path: ";
     cin>>path;
      if(path==2)
      {
        cout<<"Enter the path: ";
        cin>>path;
      }
      if(path==4)
      {
        cout<<"dr";
      }
      else
      {
        cout<<"ir";
      }
}
else if(path==4)
{
  cout<<"dr";
}
else
{
  cout<<"ir";
}
}

}