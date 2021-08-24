#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j;

	double Mat[12][12];
	double som = 0.0;
	char Op;

	cout <<fixed <<setprecision(1);
	cin >> Op;

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			cin >> Mat[i][j];
		}
	}

  int k = 4;
  int cont = 0;
	for(i = 1; i < 11; i++){
      if (i <= 5)
          cont = i;
      else if ( i == 6)
          cont = i - 1;
      else{
          cont = k;
          k--;
        }
		for (j = 0; j < cont;j++)
		{
			som += Mat[i][j];
		}
	}

	if (Op == 'S')
		cout <<som<< endl;
	else if (Op == 'M')
		cout << som/30<< endl;
}
