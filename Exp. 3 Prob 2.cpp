// This Program is designed to record the temperatures of each province. 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //Using string so that the letter of the Provinces will function properly.
 	string province[21], letter="A", Temperature;
 	cout << "Enter all temperature for a week of Province A, Province B and then Province C. \n";
    for (int i=1, j=1;  i<=21; i++, j++)
    {
 	cout << "Province " << letter <<", Day " << j <<  " : ";
    //Use conditional statements to output each letter of the provinces.
            cin >> Temperature;
            if (i==7)
            {
            	j=0;
            	letter="B";
			}
			if (i==14)
			{
				j=0;
				letter="C";
			}
			province[i-1]= Temperature;
	}
	//Displaying values
		letter="A";
		cout << endl << "Displaying Values:" << endl;

    for (int i=1, j=1;  i<=21; i++, j++)
    {
    cout << "Province " << letter <<", Day " << j <<  " = ";
            
            cout << province[i-1] << endl;
            if (i==7)
            {
            	j=0;
            	letter="B";
			}
			if (i==14)
			{
				j=0;
				letter="C";
			}
          
	}
   return 0;
}

    
    
        

        
	

   

