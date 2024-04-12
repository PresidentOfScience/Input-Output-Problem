#include <stdio.h>

int main(){
	
	char kelas, nama[120], ID[15];
	int number;
	scanf("%s\n", ID);
	scanf("%[^\n]\n", nama);
	scanf("%c %d", &kelas, &number);
	printf("Id    : %s\n", ID);
	printf("Name  : %s\n", nama);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", number);
	
	return 0;
	
}
