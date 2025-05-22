#include<iostream>
#include<cmath>
using namespace std;
int main(){




// ------Loop---------------2--------------------------------------------------------

// print  table of 2

// int n=2;
// for(int i = 1;i <=10; i++)
// {
//     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
// }






// ------Loop---------------1--------------------------------------------------------


// Write a program that prints numbers from 1 to 10 using a for loop.

// int i=0;
// for(i;i<=10;i++)
// {
//     cout<<i<<" ";
// }

// ------Loop---------------2--------------------------------------------------------


// Write a program that takes a number n from the user and prints the sum of all numbers from 1 to n using a while loop


// int n;
// int sum =0;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=0;i<=n;i++)
// sum+=i;
// {
//     cout<<"sum = "<< sum;
// }

// ------Loop---------------3--------------------------------------------------------


// int n=5;
// int i=0,sum=0;
// for(i;i<=n;++i)
// {
//     sum=sum+i;
//     cout<<sum<<" ";
// }

// ------Loop---------------4--------------------------------------------------------

// factorial

// int n=5;
// int i=1,sum=1;
// for(i;i<=n;++i)
// {
//     sum=sum*i;
//     cout<<sum<<" ";
// }


// ------Loop---------------5--------------------------------------------------------

// factor

// int n=6,ans;
// for(int i=1;i<=n;++i)
// {
//     if(n%i==0)
//     {
//        cout<<i<<" ";
//     }
    
// }

// ------Loop---------------6--------------------------------------------------------


// int i=1;
// for(i;i<=5;i++)
// {
//     cout<<i<<" ";
// }


// ------Loop---------------7--------------------------------------------------------

// for(int i=1;i<=3;i++)
// {
//     cout<<"hello";
// }

// ------Loop---------------8--------------------------------------------------------

// int n=5;
// int sum =0;
// for(int i=1;i<=n;i++)
// {
//     sum=i+sum;
//    }
//  cout<<sum<<" ";

 // ------Loop---------------9--------------------------------------------------------


// int ft,n,r,ans;
// cout<<"enter ft n r";
// cin>>ft>>n>>r;
// for(int i=1;i<=n;++i)
// {
//        ans=ans*r;
// }


// for(int i=0; i<=n; ++i)
// {
//     ans=ft*ans;
//     cout<<ans;

// }




// for(int r=1;r<=5;++r)
// {
//     for(int c=1;c<=9;++c)
//     if(c>=6-r && c<=4+r)
//     {
//         cout<<"*";
//     }
//     else
//     {
//         cout<<" ";
//     }
//     cout<<endl;
// }





// int a=0;
// for(int r=1;r<=9;++r)
// { 
//     (r<=5?a++:a--);
//     for(int c=1;c<=9;++c)
//     {

//     if(c>=6-a && c<=4+a)
//     {
//         cout<<"*";
//     }
//     else
//     {
//         cout<<" ";
//     }
// }
//     cout<<endl;
// 


// factor ka program

// int n=9;
// int sum=0;

// for(int i=1;i<n;i++)
// {
//     if(n%i==0)
//     {
//         cout<<i;
//     }
// }


// perfect number ka program

// int n1=28;
// int fact=0;

// for(int i=1;i<n1;++i)
// {
//     if(n1%i==0)
//     {
//         fact=fact+i;
//     }
// }
//     if(fact==n1)
//     {
//         cout<<"its a perfect number";
//     }
//     else
//     {
//         cout<<"its not a perfect number";
//     }


// program of hcf

// int n1=6,n2=10,hcf=1;

// for(int i=1;i<n1 || i<n2;++i)
// {
//     if(n1%i==0 && n2%i==0)
//     {
//         hcf=i;
//     }
// }
// cout<<hcf;



// power

// int n1=2,p=2,ans=1;

// for(int i=1;i<=p;i++)
// {
//     ans=ans*n1;
// }
// cout<<ans;


// ap

// int ft=2,n=4,d=2,i=0,ap=0;

// for(i;i<n;i++)
// {
//    ap= ft+i*d;
//    cout<<ap;
// }


// gp


// int ft=5,n=3,r=2,i=0,gp=0;

// for(i;i<n;++i)
// {
//     gp=ft*pow(r,i);
//     cout<<gp;
// }

// rev the number and find its palindrone or not


// int digit=0,rev=0,num=121,org=num;

// while(num!=0)
// {
//     digit=num%10;
//     rev=rev*10+digit;
//     num=num/10;
// }
// cout<<rev<<endl;
// if(rev==org)
// {
//     cout<<"its a palindrone";
// }
// else{
//     cout<<"its not a palindrone";
// }


// armstrong number to find


// int digit=0,sum=0,num=153,org=num;

// while(num!=0)
// {
//     digit=num%10;
//     sum=sum+digit*digit*digit;
//     num=num/10;
    
// }
// if(sum==org)
// {
//     cout<<"its a armstrong";
// }
// else
// {
//     cout<<"its not a armstrong";
// }
































}