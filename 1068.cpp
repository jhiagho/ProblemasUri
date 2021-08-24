#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string espres;
	int tam;
			
	while (getline(cin,espres))
	{
		stack <char> parenteses;
		tam = espres.length();
		for(int i = 0; i < tam;i++)
		{
			if (espres[i] == '(')
				parenteses.push(i);		
			if	(espres[i] == ')')
			{
				if (!parenteses.empty())
				{
					parenteses.pop();
				}
				else{
					parenteses.push(i);
				}
			}
		}
			if(parenteses.empty())
			cout << "correct" <<endl;
		else
			cout << "incorrect" <<endl;		
	}

	return 0;


}
