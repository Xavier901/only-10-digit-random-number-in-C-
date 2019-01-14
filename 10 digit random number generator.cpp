#include<iostream>
#include<cstdlib>  //for srand() and rand()
#include<ctime>    //for seed of srand() in time
using namespace std;
int main()
{
	   int n=-1,sec;       //variable declaration
	   int srand((unsigned int)sec);  //seed set to srand()
	   
        for(int i=0;i<=10;i++) //this for loop  is responsible for generate
							   //10 random number you can change this value

		   {
		   	
   	       int p=rand();
           cout<<"\n\nI="<<i
		   <<"\t+91"<<(unsigned int)-p   //(-ve) integer value in unsigned form have 10 digit value
										 //here +91 is country code you can add your country code
		   <<endl;
		   
           }
	       return 0;
}
