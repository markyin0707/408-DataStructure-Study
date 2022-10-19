#include <stdio.h>
int step;
void hanoi(char a, char b, char c, int n) {
	if (n == 0)
		return;
	hanoi(a, c, b, n-1);//将n-1个盘子由A经过C移动到B
	printf ("step %d: move %d from %cto%c\n", step++, n, a, c);
	hanoi(b, a, c,n-1);//剩下的n-1盘子，由B经过A移动到C
}
int main() {
	int n;
	while( scanf ("%d", &n)) {
		step=1;
		hanoi('A', 'B', 'C',n);
	}
	return 0;
}