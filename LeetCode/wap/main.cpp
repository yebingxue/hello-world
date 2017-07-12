#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
    for (int i = 1; i < argc; i++) {
        long num = 0;
        bool isContain3 = false;
        bool isValid = true;
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if(argv[i][j] == '3')
                isContain3 = true;
            if(argv[i][j]>='0'&&argv[i][j]<='9')
                num += num*10 + argv[i][j]-'0';
            else if(j==0&&(argv[i][j] == '-' || argv[i][j] == '+'))
                continue;
            else{
                isValid = false;
                break;
            }
        }
        if(!isValid)
            printf ("invalid\n");
        else if (num%3==0 && isContain3)
            printf ("dumb\n");
        else if (isContain3)
            printf ("stupid\n");
        else if (num%3==0)
            printf ("idiot\n");
        else
            printf ("smart\n");
  }
  return 0;
}

/*
int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
    for (int i = 1; i < argc; i++) {
        int num = 0;
        bool isContain3 = false;
        bool isValid = true;
        num = atoi(argv[i]);
        if(num == 0)
            isValid = false;
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if(argv[i][j] == '3')
                isContain3 = true;
        }
        if(!isValid)
            printf ("invalid\n");
        else if (num%3==0 && isContain3)
            printf ("dumb\n");
        else if (isContain3)
            printf ("stupid\n");
        else if (num%3==0)
            printf ("idiot\n");
        else
            printf ("smart\n");
  }
  return 0;
}
*/

/*
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
		printf("%s\n", argv[i]);
	}
	return 0;
}
*/
