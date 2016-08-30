//Zomawia Sailo <zomawia@gmail.com>
//
//	1. Create the following structures :
//		a.	A Player with the following attributes : Name, Health, Score, Position and Velocity
//		b.	A rectangle in 2D space with the following attributes : 4 points(each with X, Y
//			positions) and its colour(RGB value).

#include <iostream>

struct Player
{
	char Name[64];
	float Health;
	int Score;
	float PositionX, PositionY;
	float Velocity;
};

struct Rectangle
{
	float Xmin, Xmax, Ymin, Ymax;
};

//	2. Create an instance of the Player structure and ask the user to input a name and score.
//		Store the user’s input into the member variables of the structure.Then output the name and
//		score in the Player structure.


// 3. Pull the code you wrote for question 2 out into a function that creates and then returns the
// player the user created.

// 4. Create an array of 5 Player structures. Loop through each Player and ask the user to
//	input the Player’s name and score and store them in each of the 5 Player structures.Do
//	this step using the function you wrote in question 3. Then loop through the 5 players and
//	output each of their names and scores

//5. After completing Question 4, now prompt the user to enter in a name.Loop through the 5
//Players and find the player with that name.If there is a match, output that player’s score,
//otherwise report this back to the user that a match could not be found.

Player PlayerCreation()
{
	Player temp;

	printf("Enter character name: ");
	scanf_s("%s", temp.Name, 64);
	getchar();

	printf("Enter player score: ");
	scanf_s("%d", &temp.Score);
	getchar();

	return temp;
}

int main()
{
	Player myPlayer[5];
	char input[64];

	for (int i = 0; i < 5; ++i)
	{
		myPlayer[i] = PlayerCreation();
	}

	/*for (int i = 0; i < 5; ++i)
	{
		printf("You are %s with a score of %d.\n", myPlayer[i].Name, myPlayer[i].Score);
	}*/

	printf("Enter character name: ");
	scanf_s("%s", Name, 64);

	getchar();

}