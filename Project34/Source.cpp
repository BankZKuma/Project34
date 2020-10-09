#include<stdio.h>
void draw(int n);
int main() {
	int n;
	scanf_s("%d", &n);
	draw(n);
}
void draw(int n) {
	int space, star;
	for (int i = 1; i <= n; i++) {
		for (space = n - i; space > 0; space--) {
			printf(" ");
		}
		for (star = 1; star <= (2 * i) - 1; star++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n / 2 + 1; i++) {
		for (int j = 1; j <= (2 * n) - 1; j++) {
			if (j == ((2 * n) - 1) / 2 + 1 || j == ((2 * n) - 1) / 2 || j == ((2 * n) - 1) / 2 + 2) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}

}