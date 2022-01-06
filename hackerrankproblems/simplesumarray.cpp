int simpleArraySum(vector<int> ar) 
{
    
    int sum = 0;//creates variable
    for (int i = 0; i < ar.size(); i++ )//goes thru array depending on how long it is
    {
        sum = sum + ar[i];//adds up numbers in array
    }
    
    return sum;//returns answer
}
