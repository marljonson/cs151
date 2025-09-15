
#include <stdio.h>

int main() {
	printf("Enter two numbers: ");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("You chose %d, %d\n", x, y);
	printf("%d + %d = %d\n", x, y, x + y);
}
