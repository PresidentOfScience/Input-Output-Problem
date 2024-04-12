#include <stdio.h>

int main(){
	
	char teks[120];
	scanf("%[^\n]", teks);
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n", teks);
	printf("    return 0;\n");
	printf("}\n");
	
	return 0;
	
}
