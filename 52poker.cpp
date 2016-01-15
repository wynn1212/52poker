// 52poker.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "conio.h"

int main(void){
int i, k;
int card[53], used[53], NotUsed[53];
char bRun, iTemp;
for (i = 1; i<53; i++) used[i] = 0;
srand(time(NULL));
for (i = 1; i<53; i++) {
	bRun = 1;
	while (bRun) {
		iTemp = (rand() % 52) + 1;
		if (!used[iTemp]) {
			used[iTemp] = 1;
			bRun = 0;
			NotUsed[i] = iTemp;
		}
	}
}
for (i = 1; i <= 52; i++) {
	printf(" %-2d ", NotUsed[i]);
	if (!(i % 10)) printf("\n");
}
	printf("\n");
	system("pause"); //Remove this and change to getch()
	return 0;
}

