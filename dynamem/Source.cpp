#include <vector>
#include<iostream>
using namespace std;
using std::vector;

int main() {
	int **arr;
	int row;
	cout << "\nenter the no. of rows:";
	cin >> row;
	int *col = new int[row];
	
	arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		cout << "\nenter the no. of col for row" << i + 1 << ":";
		cin >> col[i];

		arr[i] = new int[col[i]];
	}
	// get some values in
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			cout << "\nenter the value for row " << i+1 << "column " << j+1 << ":";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			cout << "\nthe value for row " << i+1 << "column " << j+1 << ":";
			cout<< arr[i][j];
		}
	}
	delete col;
	for (int i = 0; i <row; i++)
		delete[] arr[i];
	delete[] arr;
	cin.ignore(1000, '\n');
	cin.get();
	return 0;
}