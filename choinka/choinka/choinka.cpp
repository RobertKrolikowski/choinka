#include <stdio.h>
#include <conio.h>

int main()
{
	int wysokosc;
	char koniec='t';
	while(koniec=='t')
	{
		printf("Podaj wysokosc choinki: ");
		scanf("%d",&wysokosc);
			for(int a=wysokosc;a>0;a--)
			{
				printf("....#....\n");
				printf("...###...\n");
				printf("..#####..\n");
				printf(".#######.\n");
			}
			printf("....|....\n");
			printf("....|....\n");
		printf("Chcesz ponownie uruchomic program? (t/n)\n");
		scanf("%c",&koniec);
		koniec=getch();
	}
	printf("Dziekuje!!");
	getch();
	return 0;
}