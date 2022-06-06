#include "projLetter.h"
#include <iostream>
using namespace std;

int main() {

	cout << "hello there\nPlease input your first name\n";
	//assigning user input to first_name as of type string 
	string first_name; 
	cin >> first_name;
	cout << " This is a letter you are writing " << first_name << " so, \nEnter the name of the person you want to write to \n" << endl;
	// user inputs the name of the person whose the letter is intended
	cin >> first_name;
	cout << "Does he even have a brother?\nIf yes press Y\nIf No press N\n";
	char yes_or_no = 0;
	cin >> yes_or_no;
	string statement_three = "Oooh then i guess i thought too much \n";
	string letter_brother = first_name+"\n123 Blue Street\nBrooklyn, New York 11237\nJune 30, 2022\nDear "+first_name+" ,\nI hope this letter finds you well.How are your parents doing ? Have you gotten your letter from University yet ?\nI wanted to tell you about how my summer has been.I’ve gotten a lot accomplished with the boat I have been building, and those renovations on the attic that I have been helping my Dad with.Since we are nearly done, I wanted to invite you to visit sometime soon.\nThe summer hasn’t been all workand no play, though.I met up with a few of our old friends, Jim, Anne, and Tom.We saw a really good movie that I think you will like.It’s about time traveland right up your alley.Next week, I am taking a breakand heading down to the beach for a few days.\nAnyway, I hope you have been enjoying your summer, and I hope you can comeand visit soon.It would be great to catch up before we go back to school.\nYour friend,\n"+first_name+"\n";
	
	if (yes_or_no == 'Y') {
		cout << "\nInput his brother's name\n";
		string brothers_name;
		cin >> brothers_name;
		string statement_one = "Hey " + first_name + " ,have you been talking to " + brothers_name + " lately";
		
		int age;
		cout << "Whats his age\n";
		while (cin>>age) {
			if (age >= 110) { cout << "Are you fucking kidding me!\nPlease input age again!\n"; }
			else if (age <= 0) { cout << "Really, how can someones age be a negative? Huh!\nInput the correct age\n"; }
			else { cout << "\nOkay , happy bithday to " + brothers_name + ",I hear turning " << age << " is pretty fun\n"<<letter_brother; }
			continue;
			
		}
	}else if (yes_or_no == 'N') {
		cout << "Ooh Then if not a brother, a sister though Right?\nJust type Y for yes\nN for No\n";
		char yes_no = 0;
		cin >> yes_no;
		if (yes_no == 'Y') {
			cout << "Whats her name?\n";
			string sisters_name;
			cin >> sisters_name;
			string statement_two = "Hey " + first_name + " ,have you been talking to " + sisters_name + " lately";
			cout << statement_two<<endl<< "How old ? i mean " + sisters_name << endl;
			int age;
			while (cin >> age) {
				if (age >= 110) { cout << "Are you fucking kidding me!\nPlease input age again!\n"; }
				else if (age <= 0) { cout << "Really, how can someones age be a negative? Huh!\nInput the correct age\n"; }
				else { cout << "\nOkay , happy bithday to " + sisters_name + ",I hear turning " << age << " is pretty fun\n" << letter_brother; }
				continue;
				
				
			}
			
		}
		else if (yes_no == 'N') {
			cout << statement_three << endl;
		}
		else cout << "\nIt seems that you dont wanna communicate huh!";

	}
	else cout << "\nPlease be Audible enough i dont get it?\n";
	
	
	//declare a character variable called friend_sex initialize to zero;

	//prompting the users friends name;
	

    


	
}