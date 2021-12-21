int diagonalDifference(vector<vector<int>> arr) {
int i = 0;//creates variable 
int j = 0;//creates variable
int size = 0;//creates variable
int first_diag = 0;//creates variable
int second_diag = 0;//creates variable

size = arr.size();//makes size var. the same size as the array
j = size - 1;//makes j equal to the array size minus 1

while (i < size)//
{
    first_diag += arr[i][i];//sets up equation to find the sum of the first diagonal
    ++i;//adds up numbers in array
    second_diag += arr[i][j];//sets up equation to find the sum of the second diagonal
    --j;//adds up numbers in array and subtracts from arr[i]
}

    return abs(first_diag - second_diag);//returns the absolute value of the difference b/w the diagoonal sums
}

//time complexity is O(n)
