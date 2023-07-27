// Spiral traversal of matrix

#include <iostream>
#define R 4
#define C 4
using namespace std;

void spiral(int m[R][C])
{
	int top = 0;
	int bottom = R - 1;
	int left = 0;
	int right = C - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
		{
			cout << m[top][i] << " ";
		}
		top++;

		for (int i = top; i <= bottom; i++)
		{
			cout << m[i][right] << " ";
		}
		right--;

		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
			{
				cout << m[bottom][i] << " ";
			}
			bottom--;
		}

		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
			{
				cout << m[i][left] << " ";
			}
		}
	}
}

int main()
{
	int m[R][C] = {{10, 20, 30, 40},
				   {15, 25, 35, 45},
				   {27, 29, 37, 48},
				   {32, 33, 39, 50}};

	spiral(m);

	return 0;
}
