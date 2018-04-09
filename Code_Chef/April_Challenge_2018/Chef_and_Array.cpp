// Chef and Array (Challenge) 

#include<stdio.h>
#include<time.h>

int main()
{
	int n,m;
	long long int k;
	scanf("%d%d",&n,&m);
	scanf("%lld",&k);
	
	unsigned long long int arr_a[n];	// to store array A value
	unsigned long long int prime[m];	// to store array of prime numbers
	
	for(int i=0;i<n;i++)
		scanf("%llu",&arr_a[i]);
	for(int i=0;i<m;i++)
		scanf("%llu",&prime[i]);
	
	unsigned long long int arr_d[n];		// to store array D value.
	srand(time(NULL));						// it's seed to rand function. 
	long long int lower_limit=1, upper_limit=k,rand_no=0;		// we need to generate random number within our limit. 
	for(int i=0;i<n;i++)									// generating random variable and storing to array_D
	{
		rand_no=lower_limit+rand()%(upper_limit-lower_limit);
		arr_d[i]=rand_no;
	}
	// print rand array
	
//	for(int i=0;i<n;i++)
//		printf("%llu ",arr_d[i]);
	
	for(int i=0;i<n;i++)		// printing desired result along with array_A and array_D
		printf("%llu ",arr_a[i]+arr_d[i]);
	
	
	return 0;
	
}



/* ************************** PROBLEM STATEMENT *******************************************88

Chef has an integer K and a randomly generated sequence A1,A2,…,AN. 
He asks you to choose N non-negative integers D1,D2,…,DN such that Di=K for each valid i and add Di to Ai for each valid i. 
Also, Chef has M primes P1,P2,…,PM. It is guaranteed that for each valid i, Pi is the smallest prime greater than Pi-1. 
After all addition operations are performed on the sequence A, he finds the product of all elements of A and computes its remainders modulo each prime. 
Let's denote these remainders by B1,B2,…,BM. Please help Chef maximise 1M?Mi=1Bi.

Input
---------------
- The first line of the input contains three space-separated integers N, M and K.
- The second line contains N space-separated integers A1,A2,…,AN.
- The third line contains M space-separated integers P1,P2,…,PM.  

Output
--------------
Print a single line containing N space-separated integers — the sequence A1,A2,…,AN obtained after performing all additions.

Constraints
-------------------
- 1=N,M=104
- 1=K=2·109
- 1=Ai,Pi=2·109 for each valid i
- Pi is the smallest prime greater than Pi-1 for each valid i   

Example Input
------------------
4 4 5
1 2 3 4
5 7 11 13

Example Output
--------------------
2 6 6 9

Explanation
--------------------
We can choose D=(1,4,3,5) — that is, we're adding 1 to A1, 4 to A2, 3 to A3 and 5 to A4. After these addition operations, A=(2,6,6,9). 
Let's calculate the sequence B.

- B1=(A1·A2·A3·A4)%P1=3
- B2=(A1·A2·A3·A4)%P2=4
- B3=(A1·A2·A3·A4)%P3=10
- B4=(A1·A2·A3·A4)%P4=11
The score for this output would be (B1+B2+B3+B4)/M=28/4=7.

Score
----------------
Your score for each test file will be the sum of all Bi divided by M. 
For the above example, the score you would obtain is 7.
Test Generation Process
There are four types of tests and five test files (test cases) of each type. During the contest, the displayed score will account for exactly one test file of each type, i.e. your score reflects your submission's performance on 20% (1/5) of the test files. However, if your program gets a non-AC verdict on any test file, your submission's verdict will be non-AC. In other words, an AC verdict denotes that your program runs successfully on all the test files. After the end of the contest, your score will be changed to the sum of your program's scores over all test files. The pseudocodes used for generating tests of each type are given below. Assume the function rnd.next(l, r) generates a random number uniformly in the range l through r (both inclusive) and nextPrime(x) finds the smallest prime greater than x.

Type 1:

INF = 1000000000
N = 100
M = 10000
K = rnd.next(1, 100000)
for i = 1 to N:
	A[i] = rnd.next(1, INF)
X = rnd.next(INF / 10, INF / 2) + INF
for i = 1 to M:
	P[i] = nextPrime(X)
	X = P[i]


Type 2:

INF = 1000000000
N = 1000
M = 1000
K = rnd.next(1, 1000)
for i = 1 to N:
	A[i] = rnd.next(1, INF)
X = rnd.next(INF / 10, INF / 2) + INF
for i = 1 to M:
	P[i] = nextPrime(X)
	X = P[i]


Type 3:

INF = 1000000000
N = 1000
M = 1000
K = rnd.next(1, 1000000)
for i = 1 to N:
	A[i] = rnd.next(1, INF)
X = rnd.next(INF / 10, INF / 2) + INF
for i = 1 to M:
	P[i] = nextPrime(X)
	X = P[i]


Type 4:

INF = 1000000000
N = 10000
M = 100
K = rnd.next(1, 1000000)
for i = 1 to N:
	A[i] = rnd.next(1, INF)
X = rnd.next(INF / 10, INF / 2) + INF
for i = 1 to M:
	P[i] = nextPrime(X)
	X = P[i]
	
	
	
	
	
************************************************************************************ */	
	
	







