/* Fibonacci with recursion implementation in C;
 * Author : Felipe Gabriel;
 * Input : The position of a number in the fibonacci sequence;
 * Output : The number;
*/

#include <stdio.h>

int fibonacci(int n){
	if (n == 0){
		return n;
	}
	if(n == 1){
		return n;
	}
	if(n > 1){
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int n;
	scanf("%d",&n);

	printf("%d\n",fibonacci(n));
	return 0;
}