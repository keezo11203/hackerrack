vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int aliceScore = 0;//creates variable
    int bobScore = 0;//creates variable
   vector <int> result;//creates variable
    
      for(int i=0;i<a.size();i++)//loop to keep track of scores
    {
    if (a[i] > b[i])//if a[i] is greather then b[i]
    {
        aliceScore++;//gives alice a point
    }
    
    if (b[i] > a[i])//if b[i] is greater than a[i]
    {
        bobScore++;//gives bob a point
    }
    
    }
    
    result.push_back(aliceScore);//creates a new element to hold Alice's score
    result.push_back(bobScore);//creates a new element to hold Bob's score
    
    return result;//gives result
}

/* Time Complexity: 0(n) *\
