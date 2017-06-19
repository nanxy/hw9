//============================================================================
// Name        : TicTacToe.h
// Author      : Nancy Zhou
// Version     : 1.4
//				 1.3
//				 1.2
//				 1.1
//				 1.0
// Copyright   : 4/25/17
// Description :
//============================================================================
#pragma once
#include <iostream>
using namespace std;
class TicTacToe
{
private:
	char board[3][3];
	bool winRow;
	bool winCol;
	bool winDia;
public:

	TicTacToe()
	{
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				board[r][c] = '/0';
			}
		}
		winRow = 0;
		winCol = 0;
		winDia = 0;
		
	};
	void update(int row, int col){

	};
		void print()const{
			for (int r = 0; r < 3; r++)
			{
				for (int c = 0; c < 3; c++)
				{
					cout<<board[r][c];
				}
			}

	};
	bool win(){
		if ()

	};



	virtual ~TicTacToe(){};
};

