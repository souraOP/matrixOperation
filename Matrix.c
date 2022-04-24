#include <stdio.h>
#include <stdlib.h>

//function to ADD two Matrix.
void addMatrix(int a[100][100], int b[100][100], int sum[100][100], int row, int column){
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
}

//function to SUBTRACT two Matrix.
void subtractMatrix(int a[100][100], int b[100][100], int sub[100][100], int row, int column){
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			sub[i][j] = a[i][j] + b[i][j];
		}
	}
}

//function to TRANSPOSE two Matrix.
void transposeMatrix(int matrix[100][100], int trans[100][100], int row, int column){
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			trans[j][i] = matrix[i][j];
		}
	}
}

//function to MULTIPLY two Matrix.
void multiplyMatrix(int a[100][100], int c[100][100], int multiply[100][100], int row, int row1, int column1){
	int sum = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column1; ++j)
		{
			for (int k = 0; k < row1; ++k)
			{
				sum = sum + a[i][k]*c[k][j];
			}
			multiply[i][j] = sum;
			sum = 0;
		}
	}
}

//function to DISPLAY the Matrix.
void displayMatrix(int matrix[100][100]){

}










int main()
{
	int row, column, i, j, first[100][100], second[100][100], ;
	int choice;
	printf("Enter the number of rows and column (between 1 and 100): ");
	scanf("%d%d", &row, &column);

//Taking input for our First Matrix.
	printf("\nEnter elements of the first matrix:\n");
	for (i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			printf("Enter elements at a%d%d: ", i+1, j+1);
			scanf("%d", &first[i][j]);
		}
	}

//Taking input for our Second Matrix.
	printf("\nEnter the number of rows and column of second matrix:\n")
	scanf("%d%d", &row1, &column1);
	printf("\nEnter elements of the second matrix:\n");
	for (p = 0; p < row1; ++p)
	{
		for (int q = 0; q < column1; ++q)
		{
			printf("Enter elements at b%d%d: ", p+1, q+1);
			scanf("%d", &second[p][q]);
		}
	}



//Switch Cases 



























	return 0;
}