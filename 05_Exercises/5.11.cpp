#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
enum GameStatus{CONTINUE,GAME_WIN,GAME_LOSE};
enum RoundStatus{DRAW,WIN,LOSE};
enum Shape{ROCK,PAPER,SCISSORS};
enum Shape computerPlayRandomShape(void);
enum RoundStatus getRoundStatus(enum Shape,enum Shape);
enum Shape covertIntToShape(int);
char* getStringFromShape(enum Shape);
int main(void){
	srand(time(NULL));
	enum GameStatus gameStatus=CONTINUE;
	int bestOfN=3,winThreshold,playerWinCount=0,computerWinCount=0,roundCount=0;
	winThreshold=(bestOfN/2)+1;
	while(CONTINUE==gameStatus){
		int playerEnter=-1;
		printf("=======\nRound %d\n=======\n",roundCount++);
		printf("Enter 0(ROCK),or 1(PAPER),or 2(SCISSORS):");
		scanf("%d",&playerEnter);
		enum Shape playerShape=covertIntToShape(playerEnter);
		enum Shape computerShape=computerPlayRandomShape();
		enum RoundStatus roundStatus=getRoundStatus(playerShape,computerShape);
		switch(roundStatus){
			case DRAW:
				printf("It's a DRAW!\n");
				break;
			case WIN:
				printf("Player Win!!\n");
				if(++playerWinCount==winThreshold){
					gameStatus=GAME_WIN;
				}
				break;
			case LOSE:
				printf("Player Lose!!\n");
				if(++playerWinCount==winThreshold){
					gameStatus=GAME_LOSE;
				}
				break;
		}
	}
	switch(gameStatus){
		case GAME_WIN:
			printf("**Best of 3 game is Won by player!**\n");
			break;
		case GAME_LOSE:
			printf("**Best of 3 game is Won by computer!**\n");
			break;
		case CONTINUE:
		default:
			printf("**Error!!Should not reach here!**\n");
	}
}
enum Shape computerPlayRandomShape(void){
	enum Shape randomShape=covertIntToShape(rand()%3);
	printf("Computer played %s\n",getStringFromShape(randomShape));
	return randomShape;
}
enum RoundStatus getRoundStatus(enum Shape playerShape,enum Shape computerShape){
	if(playerShape==computerShape){
		return DRAW;
	}else if((playerShape==ROCK && computerShape==SCISSORS)||(playerShape==PAPER && computerShape==ROCK)||(playerShape==SCISSORS && computerShape==PAPER)){
		return WIN;
	}else{
		return LOSE;
	}
}
enum Shape covertIntToShape(int shapeValue){
	return(enum Shape) shapeValue;
}
char* getStringFromShape(enum Shape shape){
	switch (shape){
		case ROCK:
			return "ROCK";
		case PAPER:
			return "PAPER";
		case SCISSORS:
			return "SCISSORS";
	}
	return "";
}
