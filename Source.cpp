#include <iostream>  
using namespace std;

void diapazon(int* a,int i, const int n) 
{
	if (i < n) {
		a[i] = 1 + rand() % (40);
		cout << a[i] << " ";
		diapazon(a, i + 1, n);
	}
}

void vuznachutu(int* a, int i, int n, int& nepar) 
{
	if (i < n) {
		if (a[i]%2 !=0 )
		{
			nepar = a[i];
		
		}
		
		vuznachutu(a, i + 1, n, nepar );
	}

}
int sum(int indexnepar) 
{
	int S = indexnepar * 1.;
	return S;
}

int main() {
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n + 1];
	int i{};
	int nepar;

	diapazon(a, i, n + 1);
	vuznachutu(a, i, n, nepar);

	cout << endl;
	cout << "nepar: " << nepar  << endl;
	
	cout << "suma: " << sum(nepar) << endl;
	return 0;
}
