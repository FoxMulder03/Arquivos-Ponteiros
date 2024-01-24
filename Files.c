#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char ch[15];
	char word[20];
	int value [15], i=0;
	FILE *point_file;

	point_file = fopen("arquivo.bin", "w");

	if (point_file == NULL)
	{
		printf ("Erro ao abrir o arquivo.");
		return 1;

	}
	printf ("Grave uma palavra no arquivo:\n");
	scanf("%s", word);
	
	fprintf (point_file, "%s", word);
	
	
	fclose (point_file);

	printf ("\nArquivo Criado e gravado com sucesso");


	system ("echo.");
	system ("pause");



	return 0;
}
