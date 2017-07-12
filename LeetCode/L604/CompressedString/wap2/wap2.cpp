// wap2.cpp : main project file.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string>
#include <iostream>

#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
	// start from 1 to ignore script name; argv[0] will be a name of processing file.
	for (int i = 1; i < argc; i++) {
		while (*argv[i])
		{
			if (*argv[i] >= 'A' && *argv[i] <= 'M')
				*argv[i] = *argv[i] + 13;
			else if (*argv[i] >= 'N' && *argv[i] <= 'Z')
				*argv[i] = *argv[i] - 13;
			else if (*argv[i] >= 'a' && *argv[i] <= 'm')
				*argv[i] = *argv[i] + 13;
			else if (*argv[i] >= 'n' && *argv[i] <= 'z')
				*argv[i] = *argv[i] - 13;
		}
		printf("%s\n", argv[i]);
	}
	return 0;
}
