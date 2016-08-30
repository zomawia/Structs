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
	Player myPlayer = PlayerCreation();

	printf("You are %s with a score of %d", myPlayer.Name, myPlayer.Score);
	getchar();

}