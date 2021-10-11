/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int i=2;
	while (testcase!=1) {
		int check = 1;
		for(int j=2; j<i; j++)
			if (i%j==0)
				check = 0;
		if (check && (testcase%i == 0)) {
			if (testcase/i!=1) {
				printf("%d * ", i);
				testcase /= i; 
			}
			else {
				printf("%d", i);
				break;
			}
		}
		else
			i++;
	}	
	return 0;
}
