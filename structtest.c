/* this is a struct test */

#include <stdio.h>
#include <string.h>

struct Hitter {
	char last[16];
	char first [11];
	int home_runs;
	int year;
};

struct HoF {
	struct Hitter players[10];
	int nPlayers;
};

int main(){
	struct Hitter h1 = {"Sandun", "Dasanayake", 15};
	struct Hitter h2;
	strcpy(h2.last, "De Silva");
	strcpy(h2.first, "Chamari");
	h2.home_runs = h1.home_runs -1;
	printf("H1 info - %s %s %d\n", h1.first, h1.last, h1.home_runs);
	printf("H2 info - %s %s %d\n", h2.first, h2.last, h2.home_runs);
	return 0;

}
