#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
void main()
{
	int z,a,b,p,x,num,m,k,n,i,j,ch,d=1;
	int s[10][10];
	clrscr();
	cout<<"Welcome to the game Sudoku"<<endl;//nihal @200635@basck.in
	do{
	cout<<"Choose the level from 1 to 7"<<endl; //code has the capacity to run unlimited levels but my compiler produces garbage values for levels more than 7
	cin>>b;
	a=b+2;
	cout<<"You have chosen level "<<b<<" containing "<<a<<"x"<<a<<" sudoku spaces"<<endl;
	cout<<"To change level press 0 or to continue with this level press 1: ";
	cin>>z;
	clrscr();
	
	}while(z==0);
	for(i=0;i<a;i++)
	{
		cout<<"\t "<<i+1;
	}
	cout<<endl;
	for(i=0;i<a;i++)
	{
		cout<<"\t*";
	}
	cout<<endl;
	for(i=0;i<a;i++)
	{
		cout<<i+1<<"|";
		for(j=0;j<a;j++)
		{
			cout<<"\t 0";
		}
		cout<<endl;
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			s[i][j]=0;
		}

	}
	do{
	do{
		do{
		cout<<"Enter  the number location from 1 1 to "<<a<<" "<<a<<" : ";
		cin>>m>>n;
		}while(m>a||m<1||n>a||n<1);
		cout<<"Enter the value     :";
		cin>>num;
		while(num>a||num<1)
		{
		cout<<"enter the positive number like "<<a<<" or below     :";
		cin>>num;
		}
	for(i=m;i==m;i++)
	{
			for(j=n;j==n;j++)
			{
				s[i-1][j-1]=num;
			}
	}
	clrscr();
	for(i=0;i<a;i++)
	{
		cout<<"\t "<<i+1;
	}
	cout<<endl;
	for(i=0;i<a;i++)
	{
		cout<<"\t*";
	}
	cout<<endl;
	for(i=0;i<a;i++)
	{
		cout<<i+1<<"|";
		for(j=0;j<a;j++)
		{
			cout<<"\t "<<s[i][j];
		}
		cout<<endl;
	}
	k=0;
	d=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
		      for(p=k;p<a;p++)
		      {
				if(s[i][j]==s[i][p+1])
				{
					d++;
					if(s[i][j]!=0)
					{
						cout<<i+1<<" "<<j+1<<" |*| "<<i+1<<" "<<p+2<<"\t";
						if(d<2)
						cout<<"Are the locations with the duplicate values,"<<endl;
					}
				}
			}
			k++;
		}
		k=0;
	}
	k=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			for(p=k;p<a;p++)
			{
				if(s[j][i]==s[p+1][i])
				{
					d++;
					if(s[j][i]!=0)
					{
						cout<<j+1<<" "<<i+1<<" |*| "<<j+2<<" "<<i+1<<endl;
					}
				 }
			}
			k++;
		}
		k=0;
	}
	cout<<"do you wish to continue:press1 for yes and 0 for no: "<<endl;
	cin>>ch;
	}while(ch==1);
	if(d==0)
	{
		cout<<"big Brain!!you have successfully completed level "<<b<<endl;
	}
	else
	{
		cout<<"OOOPS,game is incomplete!"<<endl;
	}
	cout<<"exit game:0,continue playing:1"<<endl;
	cin>>x;
	}while(x==1);
	cout<<"C O D E by Nihal 200635@basck.in";
	getch();
}