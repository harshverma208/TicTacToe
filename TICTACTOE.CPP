#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void gamegrid();
char m[3][3];
void main()
{
	clrscr();
	int p,q;
	char ans;
	cout<<"\n\t\t\t\tTIC TAC TOE\n\n";
	cout<<"INSTRUCTIONS:\n\nEnter the x-coordinate of the grid and press 'enter'\nand then enter the y-coordinate of the grid\nand press 'enter' to place X/0 in the entered cell.\n\n";
	do
	{
		for(p=1;p<=3;p++)
		{
			for(q=1;q<=3;q++)
			{
				m[p][q]=' ';
			}
		}
		int i,j,sum=0;
		while(sum<10)
		{
		(sum==0);
		gamegrid();
		cout<<"\n\n\nPlayer 1 is'0'\n";
		cout<<"Player 1's turn\n";
		cin>>i;
		cin>>j;
		for(;(i>3)||(j<1)||('X'==m[i][j])||('0'==m[i][j]);)
		{
			cout<<"Sorry you entered wrong choice\n";
			cout<<"Enter your choice again\n";
			cin>>i;
			cin>>j;
		}
		m[i][j]='0';
		sum++;
		gamegrid();
		if((m[1][1]=='0')&&(m[1][1]==m[1][2])&&(m[1][1]==m[1][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[2][1]=='0')&&(m[2][1]==m[2][2])&&(m[2][1]==m[2][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[3][1]=='0')&&(m[3][1]==m[3][2])&&(m[3][1]==m[3][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[1][1]=='0')&&(m[1][1]==m[2][2])&&(m[1][1]==m[3][3]))
		{
			cout<<"\t\t\t!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[1][3]=='0')&&(m[1][3]==m[2][2])&&(m[1][1]==m[3][1]))
		{
			cout<<"\t\t\t!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[1][1]=='0')&&(m[1][1]==m[2][1])&&(m[1][1]==m[3][1]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[1][2]=='0')&&(m[1][2]==m[2][2])&&(m[1][2]==m[3][2]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if((m[1][3]=='0')&&(m[1][3]==m[2][3])&&(m[1][1]==m[3][3]))
		{
			cout<<"\t\t\t\!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 1 wins the game\n\n";
			break;
		}
		if(sum==9)
		{
			cout<<"\t\t\t\tBETTER LUCK NEXT TIME!\n\n";
			cout<<"\t\t\t\tNO ONE WINS\n\n";
			cout<<"\t\t\t\tTHE GAME IS A DRAW\n\n";
			break;
		}
		cout<<"\n\n\nPlayer 2 is'X'\n";
		cout<<"Player 2's turn\n";
		cin>>i;

		cin>>j;
		for(;(i>3)||(j<1)||('X'==m[i][j])||('0'==m[i][j]);)
		{
			cout<<"Sorry you entered wrong choice\n";
			cout<<"Enter your choice again\n";
			cin>>i;
			cin>>j;
		}
		m[i][j]='X';
		sum++;
		gamegrid();
		if((m[1][1]=='X')&&(m[1][1]==m[1][2])&&(m[1][1]==m[1][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if((m[2][1]=='X')&&(m[2][1]==m[2][2])&&(m[2][1]==m[2][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if((m[3][1]=='X')&&(m[3][1]==m[3][2])&&(m[3][1]==m[3][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if((m[1][1]=='X')&&(m[1][1]==m[2][2])&&(m[1][1]==m[3][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if((m[1][3]=='X')&&(m[1][3]==m[2][2])&&(m[1][1]==m[3][1]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if((m[1][1]=='X')&&(m[1][1]==m[2][1])&&(m[1][1]==m[3][1]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if((m[1][2]=='X')&&(m[1][2]==m[2][2])&&(m[1][2]==m[3][2]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[1][3]=='X')&&(m[1][3]==m[2][3])&&(m[1][1]==m[3][3]))
		{
			cout<<"\t\t\t!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!\n\n";
			cout<<"\t\t\t\tplayer 2 wins the game\n\n";
			break;
		}
		if(sum==9)
		{
			cout<<"\t\t\t\tPOOR YOU GUYZ!\n\n";
			cout<<"\t\t\t\tNO ONE WINS\n\n";
			cout<<"\t\t\t\tThe game is drawn\n\n";
			break;
		}
		}
		cout<<"DO YOU WANT TO CONTINUE?\n";
		cout<<"PRESS Y TO CONTINUE OR PRESS N TO EXIT  ";
		cin>>ans;
	 }
		while((ans=='y')||(ans=='Y'));
		system("PAUSE");
		getch();
}
void gamegrid()
{
	cout<<"\n    1 2 3\n"<<endl;
	cout<<"  1 "<<m[1][1]<<"|"<<m[1][2]<<"|"<<m[1][3]<<endl;
	cout<<"    -|-|-\n";
	cout<<"  2 "<<m[2][1]<<"|"<<m[2][2]<<"|"<<m[2][3]<<"\t\t\t\tGAME DEVELOPED BY- HARSH VERMA"<<endl;
	cout<<"    -|-|-\t\t\t\t                     XI-L\n";
	cout<<"  3 "<<m[3][1]<<"|"<<m[3][2]<<"|"<<m[3][3]<<"\n\n\n";
}
