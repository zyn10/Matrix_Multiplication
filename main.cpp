#include<iostream>
using namespace std;
int main()
{

	int First[3][3];
	int Second[3 ][3];
	int sum[3][3];
	cout << "Input the enteries of 1st 3*3 matrix" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> First[i][j];
	}
	cout << "Enter the entries of 2nd 3*3 matricx" << endl;
	for (int  i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> Second[i][j];
		
	}
	for ( int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			sum [i][j]= First[i][j] + Second[i][j];
			cout << endl;
	cout << "The sum of Resultant Matrix is " << endl;

	
	for ( int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << sum[i][j]<<" ";
		}
		cout <<endl;
	}
	

	system("pause>0");
}
