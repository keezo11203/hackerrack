string pangrams(string s) {
    
int arr[26] = {0};//creates array with space for every letter in the alphabet 

for (char& c:s)//goes thru every letter in the string
{
    if (c >= 97 && c <= 122)//sees if lowercase letters are in the string using numbers from ASCII table
    {
        arr[c - 97] = 1;//corresponds the ASCII number with one of the 26 in the array
    }
       
    if (c >= 65 && c <= 90)//sees if capital letters are in the string using numbers from ASCII table
    {
        arr[c - 65] = 1;//corresponds the ASCII number with one of the 26 in the array
    }
}
    for (int i = 0; i < 26; i++)//goes thru array 26 times
{
    if (arr[i] == 0)//if there's not every letter in the string
    {
        return "not pangram";
    }
}
    
return "pangram";
}

//time complexity: O(n)
