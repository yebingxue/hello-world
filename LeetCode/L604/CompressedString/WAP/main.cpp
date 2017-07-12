#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	// start from 1 to ignore script name; argv[0] will be a name of processing file.
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'M')
				argv[i][j] = argv[i][j] + 13;
			else if (argv[i][j] >= 'N' && argv[i][j] <= 'Z')
				argv[i][j] = argv[i][j] - 13;
			else if (argv[i][j] >= 'a' && argv[i][j] <= 'm')
				argv[i][j] = argv[i][j] + 13;
			else if (argv[i][j] >= 'n' && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 13;
		}
		cout << argv[i] << endl;
		//printf("%s\n", argv[i]);
	}
	return 0;
}