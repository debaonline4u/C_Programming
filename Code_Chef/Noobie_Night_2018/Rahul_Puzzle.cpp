// Rahul and Puzzle Problem Code: NN005

// Program to find the number of ways, n can be
// written as sum of two or more positive integers.
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
// Returns number of ways to write n as sum of
// two or more positive integers
int countWays(int n)
{
    // table[i] will be storing the number of
    // solutions for value i. We need n+1 rows
    // as the table is consturcted in bottom up
    // manner using the base case (n = 0)
    int table[n+1];
 
    // Initialize all table values as 0
    memset(table, 0, sizeof(table));
 
    // Base case (If given value is 0)
    table[0] = 1;
 
    // Pick all integer one by one and update the
    // table[] values after the index greater
    // than or equal to n
    for (int i=1; i<n; i++)
        for (int j=i; j<=n; j++)
            table[j] += table[j-i];
 
    return table[n];
}
 
// Driver program
int main()
{
    int test;
    for(scanf("%d",&test);test>0;test--)
    {
         int n;
        scanf("%d",&n);
        printf("%d\n",countWays(n));
     
        
    }
       return 0;
}

/* ****************************** PROBLEM STATEMENT *************************************

Rahul is good at mathematics. So one day Tarun decided to test his skills and gives him a puzzle to solve. 
and Puzzle is that There is a rope of length N centimeter. You have to cut the segments of rope but only in integer units. 
At least one cut is necessary. You have to find out the total way in which the rope can be cut. 
Since Rahul is unable to solve that puzzle, so Help Rahul to solve that Puzzle.

Input:
--------------
The first line of the input contains an integer T denoting the number of test cases.
Each testcase contains a single line of integer input N centimeter.

Output:
---------------
For each test case, output a single line containing the total way in which the rope can be cut.

Constraints
------------------
1=T=10
2=N=102

Sample Input:
-----------------
1
4

Sample Output:
---------------------
4

EXPLANATION:
----------------------------
 4-centimeter rope can be cut into
 1 1 1 1 
 2 1 1
 2 2
 3 1
 so there are 4 way we can cut the rope.
 
 
 *************************************************************************************************   */


