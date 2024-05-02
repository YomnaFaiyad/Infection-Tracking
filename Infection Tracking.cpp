//A program that keeps track of the infected people around the world
#include <iostream>
using namespace std;
int main ()
{
	int countries, infected;
	float sum, average;

	
	cout << "This is a program that keeps track of the infected people around the world" << endl << endl;
	
	
	cout << "Enter the number of the countries: "; // stores the number of countries (the number of times the loop will continue)
	cin >> countries;
	
		// create an array that stores each name of each country and the number of infected people in these countries
	string array[countries];
	int arr[countries];



	for (int i = 0; i < countries; i++)
	{
		cout << "Enter name of country number " << i + 1 << " and the number of infected people in it: ";
		cin >> array[i];
		cin >> arr[i];
		cout << endl;
		
    }
	
	cout << endl << endl;


    // create a loop to be able to sum the total number of cases for all countries
    for (int s = 0; s < countries; s++)
    {
    	sum+=arr[s];
	}
	cout << "The total number of infected cases for all countries is: " << sum << endl;
	
	
	// get the average by dividing the sum of cases and the total number of values
	average = sum/countries;
	cout << "The average infections for all countries is: " << average << endl;
	
	int max = arr[0];
	// create a loop to be able to find the highest number of infection
    for(int m = 1; m < countries; m++)
    {
    	

       if(max < arr[m]) 
       {
       	  max = arr[m]; 
	   }

    }
    cout << "The highest number of infections is: " << max; 
	
	
	return 0;
}
