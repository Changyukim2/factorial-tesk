#include <stdio.h>
#include<stdlib.h>

double factorial_rec(int n) {
	if (n <= 1)return 1;
	else return(n * factorial_rec(n - 1));

}
double factorial_iter(int n) {
	int i = 1;
	double result = 1;
	for (i = 1; i <= n; i++)
		result = result * i;
	return(result);

}

int main(void) {
	double result_rec = factorial_rec(20);
	double result_iter = factorial_iter(20);
	printf(" 20!의 값:%lf\n ", result_rec);
	printf("20!의 값:%lf\n", result_iter);
	system("pause");
}
//