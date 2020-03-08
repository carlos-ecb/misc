/*
 * First Player Shooting game
 * 
 * This program evaluates whether a game scenario is possible
 * as the number of players killed doesn't exceed the total of players
 */

#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int main() {
	int *kills;
	int N;
	int sum = 0;
	
	scanf("%d",&N);
	kills = malloc(sizeof(int) * N);

	for(int i = 0; i < N ; i++) {
		scanf("%d", &kills[i]);
		sum += kills[i];
	}

	if (sum > N) {
		printf("NO\n");
	} else {
		printf("YES\n");
		int i;
		// i = current player
		i = N -1;
		// starting by the one with more then 0 kills
		while(!kills[i]) --i; 
		while(i >= 0) {
			for (int j = 0; j < kills[i]; j++) { 
				printf("%d %d\n",i+1,N);
				--N;
			}
			--i;
		}
	}
	free(kills);
	return 0;
}

