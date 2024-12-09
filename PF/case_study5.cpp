// Case study 5: RIPHAH University Guessing Game – Score System
#include <iostream>
using namespace std;
int main()
{
	int intScr = 500, attempts = 0, hintsUsed = 0, choice;
	bool correctGuess = false;
    cout<<"1. Guess"<<endl;
    cout<<"2. Hint"<<endl;
    cout<<"Your Choice: ";
    cin>>choice;
        switch (choice)
		{
			case 1:
				int guess;
            	cout<<"Your guess: ";
         	    cin>>guess;
        	    if (guess == 10) //CORRECT GUESS IS 10
        		{   
					correctGuess = true;
       		        if (attempts <= 2)
       		  	    intScr += 100;
        	        cout<<"Congratulations!"<<endl;
       			}
				else
				if (guess != 10)
				{
           		    attempts++;
            	    intScr -= 10;
            	    cout<<"Incorrect guess"<<endl;
            	}
            	break;
            case 2:
           		if (attempts >= 2)
				{
                hintsUsed++;
                intScr -= 20;
                cout<<"Hint used. You have "<< 10 - attempts<<" Attempts Left"<<endl;
          		}
				else if (attempts < 2)
				{
                cout<<"Hints can only be used after 2 Incorrect Guess"<<endl;
                }
            break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
    cout<<"Current Score: "<<intScr<<endl;  
    if (correctGuess == false)
	{
        cout<<"Final Score: "<<intScr<<endl;
    }
	else
	{
        cout<<"Game over"<<endl;
    }

    return 0;
}
