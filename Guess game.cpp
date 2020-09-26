#include<iostream>
#include <cstdlib>

int main()
{
	using namespace std;
	int num, guess;
	int const limit = 50;
	cout << "To exit enter '0' \n\n";
	num = rand() % limit;
	
	do
	{
	cout << "Enter a number to guess: ";
	cin >> guess;
	
		if ( guess > num )
		{
			cout << "Guess is too high\n";
		}
		if ( (guess < num ) && (guess != 0) ) 
		{
			cout << "Guess is too low.\n";
		}
		if (guess == 0)
		break;
	} while ( guess != num );
	
	if ( num == guess )
		{
			cout << "\n Congratulations, YOU WON!";
		}
		else 
		{
			cout << "\n------------------Thankyou------------------\n";
		}	
	
	 return 0;
}
