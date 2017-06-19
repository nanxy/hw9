//============================================================================
// Name        : TicTacToe.h
// Author      : Nancy Zhou
// Version     : 0.4
//				 0.3 fixed the winning cooridinate
//				 0.2 fixed else if statements 
//				 0.1 created child 1 and 2 player modes
//				 0.0 created functions: init- initializes game, update,print, and win
// Copyright   : 4/25/17
// Description :
//============================================================================
#include <iostream>
using namespace std;
class TicTacToe
{
private:
	bool winrow(){

		if ((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O'))
		{
			cout << "Player 1 won! " << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else if ((board[0][0] == 'O') && (board[0][1]== 'O') && (board[0][2] == 'O'))
		{
			cout << "Player 1 won! " << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else if ((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))
		{
			cout << "Player 1 won!" << endl;
			cout << "================================================================" << endl;
			return true;

		}
		else if ((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
		{
			cout << "P2 won!" << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else if ((board[1][0] == 'X') && (board[1][1] == 'X') && (board[1][2] == 'X'))
		{
			cout << "P2 won!" << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else if ((board[2][0] == 'X') && (board[2][1] == 'X') && (board[2][2] == 'X'))
		{
			cout << "P2 won!" << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else
		return false; 
	};
	bool wincol()		
	{
		if ((board[0][0] == 'O') && (board[1][0] == 'O') && (board[2][0] == 'O'))
	{
		cout << "Player 1 won!" << endl;
		cout << "================================================================" << endl;
		return true;
	}//first column
		else if((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O'))
	{
		cout << "Player 1 won!" << endl;
		cout << "================================================================" << endl;
		return true;

	}//second col
	else if((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))
	{
		cout << "Player 1 won!" << endl;
		cout << "================================================================" << endl;
		return true;

	}//third col
	else if((board[0][0] == 'X') && (board[0][1] == 'X') && (board[2][0] == 'X'))
	{
		cout << "P2 won!" << endl;
		cout << "================================================================" << endl;
		return true;
	}//first col
	else if((board[1][0] == 'X') && (board[1][1] == 'X') && (board[1][2] == 'X'))
	{
		cout << "P2 won!" << endl;
		cout << "================================================================" << endl;
		return true;
	}//second col
	else if ((board[2][0] == 'X') && (board[2][1] == 'X') && (board[2][2] == 'X'))
	{
		cout << "P2 won!" << endl;
		cout << "================================================================" << endl;
		return true;
	}//third col
		return false;
};
	bool windia(){
		if ((board[0][0] == 'O') && (board[1][1] == 'O') && (board[2][2] == 'O'))
		{
			cout << "Player 1 won!" << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else if ((board[2][0] == 'O') && (board[1][1] == 'O') && (board[0][2] == 'O'))
		{
			cout << "Player 1 won!" << endl;
			cout << "================================================================" << endl;
			return true;

		}
		else if ((board[0][0] == 'X') && (board[1][1] == 'X') && (board[2][2] == 'X'))
		{
			cout << "P2 won!" << endl;
			cout << "================================================================" << endl;
			return true;
		}
		else if ((board[2][0] == 'X') && (board[1][1] == 'X') && (board[0][2] == 'X'))
		{
			cout << "P2 won!" << endl;
			cout << "================================================================" << endl;
			return true;

		}

		return false;
	};
protected:
	char board[3][3];
	int turns;
public:

	TicTacToe()
	{
		init();
	};
	void init()
	{
		for (int r = 0; r < 3; r++)
		{ 
			for (int c = 0; c < 3; c++)
			{
				board[r][c] = '*';
			}
		}//fill board with *
		turns = 0;
		
	}
	void update(int row, int col)
	{
		turns++;
		if (turns != 9)
		{
			row -= 1;
			col -= 1;
				if ((board[row][col] == 'O') || (board[row][col] == 'X'))
				{
					turns--;
					cout << "That position is already taken, please choose another position." << endl;
					cin >> row >> col;
					update(row, col);
				}//check if position is already taken

				if (turns % 2 == 1)
				{
					board[row][col] = 'O';
				}//odd turns are set 
				else board[row][col] = 'X';
				print();


		}
			
	};
	
		void print() const
		{
		cout << "---------------------" << endl << endl;
		cout << "     1     2     3"<<endl;
		cout << "        |     |     " << endl;
		cout << " 1|  "  << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
		cout << "__|_____|_____|_____" << endl;
		cout << "  |     |     |     " << endl;
		cout << " 2|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
		cout << "__|_____|_____|_____" << endl;
		cout << "  |     |     |     " << endl;
		cout << " 3|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
		cout << "  |     |     |     " << endl << endl;
		/*int cindex = 1;
		cout << "  1 2 3" << endl;
		cout << "  - - -" << endl;
		for (int r = 0; r < 3; r++)
		{
			cout << cindex<<"|";
			cindex++;
			for (int c = 0; c < 3; c++)
			{
				cout << board[r][c]<<' ';
			}
			cout << endl;
		}*/
		cout << turns << " turns have been made." << endl;

	};
	bool win(){
		
		if (winrow()|| wincol()|| windia())
		{
			return true;
		}
		else if (turns == 9)
		{
			cout << "There was a tie." << endl;
			return true;
		}
		 return false;


	};
	virtual ~TicTacToe(){};
};

class twoGame: public TicTacToe
{
public: 
	twoGame(){ init(); }
	void init(){ 
		TicTacToe::init(); 
	}
	void p1(int row, int col){
		TicTacToe::update(row, col);
	}
	void p2(int row, int col){
		TicTacToe::update(row, col);
	}
	void play(){
		int row, col;
		while (TicTacToe::turns <= 9)
		{
			
			cout << "Player One, choose which row you would like to place your move, 1, 2, or 3 ? " << endl;
				cin >> row;
			cout << "Choose which column you would like to place your move, 1, 2, or 3? " << endl;
			cin >> col;
			p1(row, col);

			if (TicTacToe::win() == true) {
				return;
			}
			cout << "Player Two, choose which row you would like to place your move, 1, 2, or 3 ? " << endl;
			cin >> row;
			cout << "Choose which column you would like to place your move, 1, 2, or 3? " << endl;
			cin >> col;
			p2(row,col);
			if (TicTacToe::win() == true) {
				return;
			}

		}
	}

	virtual ~twoGame(){};

};
class botGame : public TicTacToe
{
public:
	botGame(){init();}
	void init(){ 
		TicTacToe::init(); 
	}
	void p1(int row, int col){
		TicTacToe::update(row,col);
	}
	void bot(){
		if (TicTacToe::turns != 9)
		{
			if (TicTacToe::board[1][1] == '*')
			{
				
				TicTacToe::update(2,2);

			}
			else if (TicTacToe::board[1][0] == '*')
			{
				TicTacToe::update(2, 1);
			}
			else if (TicTacToe::board[1][2] == '*')
			{
				TicTacToe::update(2, 3);
			}
			else if (TicTacToe::board[0][2] == '*')
			{
				TicTacToe::update(1, 3);
			}
			else if (TicTacToe::board[0][0] == '*')
			{
				TicTacToe::update(1, 1);
			}
			else if (TicTacToe::board[0][1] == '*')
			{
				TicTacToe::update(1, 2);
			}
			else if (TicTacToe::board[2][2] == '*')
			{
				TicTacToe::update(3, 3);
			}
			else if (TicTacToe::board[2][0] == '*')
			{
				TicTacToe::update(3, 1);
			}
			else if (TicTacToe::board[2][1] == '*')
			{
				TicTacToe::update(3, 2);
			}
		}
		};
		void play(){
			int row, col;
			while (TicTacToe::turns <= 9)
			{
				cout << "Choose which row you would like to place your move, 1, 2, or 3? " << endl;
				cin >> row;
				cout << "Choose which column you would like to place your move, 1, 2, or 3? " << endl;
				cin >> col;
				p1(row, col);

				if (TicTacToe::win() == true) {
					return;
				}
				cout << "The bot will now take it's turn." << endl;
				bot();
				if (TicTacToe::win() == true) {
					return;
				}
			}
			


	}

	virtual ~botGame(){};

};
int main(){
	char gamemode='0';
	cout << "Choose your game mode, type \"1\" to play with the computer, \"2\" to play with another user and take turns, or \"!\" to quit the game." << endl;
	cin >> gamemode;
	while (gamemode != '!')
	{	


		if (gamemode == '1')
		{
			botGame oneP;
			oneP.play();
			cout << "Would you like to play agian? Type \"1\" to play with the computer, \"2\" to play with another user and take turns, or \"!\" to quit the game." << endl;
			cin >> gamemode;
		}
		else if(gamemode == '2')
		{
			twoGame twoP;
			twoP.play();
			cout << "Would you like to play agian? Type \"1\" to play with the computer, \"2\" to play with another user and take turns, or \"!\" to quit the game." << endl;
			cin >> gamemode;
		}
		else
		{
			cout << "Input not recognized.Please enter \"1\" or \"2\" or \"!\" to exit." << endl;
			cin >> gamemode;
		}
		
	}

	cout << "Thanks for playing!" << endl;

};