#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long int num;//the 10 digit number the user inputs
	cout<<"enter a 10 digit number Mr.chan:";
	cin>>num;
	long int var= 0; //the variable i used throughout the code block
	long int var1 = 0;
	long int var2 = 0;
	long int var3 = 0;
	long int var4 = 0;
	long int var5 = 0;
	long int var6 = 0;
	
	
	for( int i = 10; i>0; i--)//the for loop that checks if i is a 10 digit number & if its greater than 0 then it will subtract 10 by 1
	{
	  var = (num / pow(10,i-1)); // this take 1 digit out of the number
	  var1 = (num % int (pow(10,i-1)));// takes the remaining numbers and goes repeats since its in a for loop
		var2 = var * i;  //multiplies the 10 digits by the first digit 
		var3 = var2 + var3;//adds the multiplied digits found in the previous lines
	}
	var4 = (var3%11);// this checks to see if its valid
	if(var4 != 0)                                       // if the 10 digits are not valid
	{                                                   
	  for(int k = 10; k>1; k--)
	  {
	    var = (num/ pow(10,k-1));
	    var1 = (num % int (pow(10, k-1)));
		  var2 = (var * k);
		  var3 = (var2 + var3);
	  } 
	
	 var5 = (var3%11);
	 var6 = (10-var5);

	 cout<<("its not isbn");
	}
	 else//if the 10 digits are isbn
	 {
	   cout<<("its isbn");
	 }
	 
	
	
	
	
}


