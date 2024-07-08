#include <stdio.h>

int cams(int posi, int posj, int l, int c, int m[][c]) {
	int i, j;
	int count = 0;

	for(int i = 0; i <= 1; i++) {
		for(int j = 0; j <= 1; j++) {
			if(m[posi + i][posj + j] == 1)
				count++;
		}
	}

	return count;
}

int main() {
	int n;

	while(scanf("%d", &n) != EOF) {	
		int map[n+1][n+1];
		
		for(int i = 0; i < n + 1; i++)
			for(int j = 0; j < n + 1; j++)
					scanf("%d", &map[i][j]);

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(cams(i, j, n + 1, n + 1, map) >= 2)
					putchar('S');
				else
					putchar('U');	
			}
			putchar('\n');
		}
	}
	return 0;
}