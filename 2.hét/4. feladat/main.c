#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char ABC_szamok[36] = "ABCDEFGHIJKLMNOPQRSTUWXYZ0123456789";
    char file[10] = "******";
    char kiterjesztes[4] = ".txt";

    srand(time(NULL));
    int i;
    for (i = 0; i < 6; i++)
    {
        int random = rand() % (35 - 0 + 1)+0;
        file[i] = ABC_szamok[random];

    }
    strncat(file, &kiterjesztes, 4);

    printf("A file neve: ");
    for (i = 0; i < 10; i++)
    {
        printf("%c",file[i]);
    }
    FILE *fp;

    fopen(file,"w");
    fprintf(fp,"Adatok");
    fclose(file);
	int count = 0;
	char c;
	fp = fopen(file, "r");

	if (fp == NULL)
	{
		printf("Nem lehet megnyitni a file-t");
		return 0;
	}
	for (c = getc(fp); c != EOF; c = getc(fp))
		if (c == '\n')
			count = count + 1;

	printf("Osszesen: %d sora van\n ", count + 1);
	fclose(fp);
    return 0;
}

