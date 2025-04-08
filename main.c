#include <cstdio>





FILE* openFile(char fileType) {

	char filename[100];
	printf("Enter filename: ");
	scanf("%s", filename);

	FILE* file = fopen(filename, fileType);
	if (file == NULL) {
		perror("Error opening file");
		return NULL;
	}
	return file;
}
//==============================
int main()
{

	FILE* read1 = openFile("r");
	FILE* read2 = openFile("r");
	FILE* write = openFile("w");
   
        return 0;



}
//==============================