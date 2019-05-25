#include <iostream>
#include <conio.h>

//This Program computes for the smallest, largest, total, and averae of the inputted values.
using namespace std;
	
int main()
{
	int num [10], i; 
	double smallest,largest,total,average, x;

	
	for (i = 0; i < 10; i++)
	{
			cout << "Enter no. " << i + 1 << " integer: ";
			cin >> num [i];
	//Formulas:		
			smallest = num [0]; 
        	largest =  num [0];
			total += num [i];
			average = total/10;
		
	}
        
	
	
	for (int i = 0; i < 10; i++)
	{
		// let x = num[i] so that it would be easier to identify the program.
		x = num [i];
		
		if (x < smallest)
			smallest = x;
		if (x > largest)
			largest = x;
		
	}
	//Output
	cout << "Smallest Integer is: " << smallest << endl;
	cout << "Largest Integer is: "  << largest  << endl;
	cout << "The Total of All Integers is:" << total << endl;
	cout << "The Average of All Integers is: " <<  average << endl;
	
	return 0;
}

