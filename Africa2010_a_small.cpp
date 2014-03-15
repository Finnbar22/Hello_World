/* Code Jam. Africa qualifications. Problem A */

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	
	int c = 0;
	int i = 0;
	
	for(int a = 1; a <= n; a++)
	{
		cin >> c;
		cin >> i;
		int p[i];
		
		for(int e = 0; e < i; e++)
		{
			cin >> p[e];
		}
		
		for(int b = 0; b < i; b++)
		{
			for(int d = 0; d < i; d++)
			{
					if(p[b] + p[d] == c && b != d && b < d)
					{
						cout << "Case #" << a << ": " << b+1 << " " << d+1 << endl;
					}
				}
			}
		}
	return 0;
}

