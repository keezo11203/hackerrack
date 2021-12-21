void staircase(int n) {
    for (int i = 1; i <= n; ++i)//loop to print staircase
    {
        cout << setw(n) << right << string(i, '#') << endl;
    //prints out staircase
    //sets it to the right 'n' times
    //prints out a hashtag everytime the function loops
    }  
