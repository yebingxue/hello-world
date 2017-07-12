#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StringIterator {
public:
	int index;
	int nextIndex;
	int num;
	int total;
	string str;

	StringIterator(string compressedString) {
		if (compressedString.empty())
		{
			index = -1;
			num = -1;
			total = 0;
			nextIndex = -1;
		}
		else
		{
			index = 0;
			num = 0;
			total = compressedString.length();
			this->str = compressedString;
			int i = index + 1;
			for (; i < total && str[i] >= '0' && str[i] <= '9'; i++)
				num = num * 10 + str[i] - '0';
			nextIndex = i;
		}
	}

	char next() {
		char ch;
		if (num>0)
		{
			num--;
			ch = str[index];
			if (num == 0)
			{
				index = nextIndex;
				int i = index + 1;
				num = 0;
				for (; i < total && str[i] >= '0' && str[i] <= '9'; i++)
					num = num * 10 + str[i] - '0';
				if (num == 0)
					nextIndex = -1;
			}
		}
		else
		{
			return ' ';
		}
		return ch;
	}

	bool hasNext() {
		if (num > 0)
			return true;
		else
			return false;
	}
};

/**
* Your StringIterator object will be instantiated and called as such:
* StringIterator obj = new StringIterator(compressedString);
* char param_1 = obj.next();
* bool param_2 = obj.hasNext();
*/

int main()
{
	string s = "L1e2t1C1o1d1e1";
	StringIterator* obj = new StringIterator(s);
	char param_1 = obj->next();
	bool param_2 = obj->hasNext();
	cout << param_1 << endl;
	cout << param_2 << endl;
	cin.get();
}
