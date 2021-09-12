#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void flag() {
	system("cat flag.txt");
}

struct prisons {
	char name[50];
	int prisoners;
	int cells;
	int blocks;
	int cops;
	int gates;
};


struct prisons build_prison() {
	struct prisons prison;

	printf("Enter the number of prisoners per cell in your prison: ");
	scanf("%d", &prison.prisoners);
	getchar();

	printf("Enter the number of cells per each block in your prison: ");
	scanf("%d", &prison.cells);
	getchar();

    printf("Enter the number of blocks in your prison: ");
	scanf("%d", &prison.blocks);
	getchar();

	printf("Enter the number of gates per block in your prison: ");
	scanf("%d", &prison.gates);
	getchar();

	printf("Enter the number of cops for each gate in your prison: ");
	scanf("%d", &prison.cops);
	getchar();

	printf("Where is this prison: ");
	char name[50];
	gets(name);

	strcpy(name, prison.name);
	return prison;
}

int main() {
	gid_t gid = getegid();
	setresgid(gid, gid, gid);

	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	struct prisons prison;

	prison = build_prison();

	if (prison.prisoners * prison.cells * prison.blocks > prison.blocks * prison.gates * prison.cops) {
		printf("Prisoners escaped from your prison\n");
		return 1;
	}

	//flag();
	printf("Oh god! Your prison is a mini-hell for the prisoners.\n");

	return 0;
}