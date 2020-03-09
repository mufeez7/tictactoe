#include <iostream>
using namespace std;

struct tictactoe
{
	char table [3][3];
	int player;
	bool game;
};

void insertable (tictactoe &a, int x, int y);
void printable (tictactoe a);
void conditions (tictactoe &a);

int main ()
{
	tictactoe a;
	int x,y;
	a.game = true;

	a.player = 1;

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			a.table [i][j] = ' ';
		}
	}
	while (a.game)
	{
		printable (a);
		cout<<"Player "<<a.player<<endl;
		cout<<"Enter the index for your move"<<endl;
		cin>>x>>y;

		insertable(a,x,y);
		conditions(a);
	}
	for (int k=0; k<3; k++)
	{
		for (int b=0; b<3; b++)
		{
			cout<<a.table[k][b]<<"  ";
		}
		cout<<endl;
	}

	return 0;
}
void printable (tictactoe a)
{
	system ("cls");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout<<a.table[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
}
void insertable (tictactoe &a, int x, int y)
{
	if (a.player==1 && a.table[x][y]==' ')
	{
		a.table[x][y]='X';
		a.player=2;
	}
	else if (a.player==2 && a.table[x][y]==' ')
	{
		a.table[x][y]='O';
		a.player = 1;
	}
	else
	{
		cout<<"The index is already filled"<<endl;
	}
	
}
void conditions (tictactoe &a)
{   //for X
	if (a.table[0][0]=='X' && a.table[0][1]=='X' && a.table[0][2]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[1][0]=='X' && a.table[1][1]=='X' && a.table[1][2]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[2][0]=='X' && a.table[2][1]=='X' && a.table[2][2]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][0]=='X' && a.table[1][0]=='X' && a.table[2][0]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][1]=='X' && a.table[1][1]=='X' && a.table[2][1]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][2]=='X' && a.table[1][2]=='X' && a.table[2][2]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][0]=='X' && a.table[1][1]=='X' && a.table[2][2]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
		
	}
	if (a.table[0][2]=='X' && a.table[1][1]=='X' && a.table[2][0]=='X')
	{
		cout<<"Player 1 Wins the game"<<endl;
		a.game=false;
	}
	// for O 
	if (a.table[0][0]=='O' && a.table[0][1]=='O' && a.table[0][2]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[1][0]=='O' && a.table[1][1]=='O' && a.table[1][2]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[2][0]=='O' && a.table[2][1]=='O' && a.table[2][2]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][0]=='O' && a.table[1][0]=='O' && a.table[2][0]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][1]=='O' && a.table[1][1]=='O' && a.table[2][1]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][2]=='O' && a.table[1][2]=='O' && a.table[2][2]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][0]=='O' && a.table[1][1]=='O' && a.table[2][2]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
	if (a.table[0][2]=='O' && a.table[1][1]=='O' && a.table[2][0]=='O')
	{
		cout<<"Player 2 Wins the game"<<endl;
		a.game=false;
	}
}
