#include <iostream>

using namespace std;

int main(int) {

	int *a, *b;
	int j = 99;
	a = &j;
	b = &j;
	
	cout << *a << " " << a << " " << &**&a << endl;
	cout << *b << " " << b << " " << &**&b << endl;

	// Language Standard
	int i = 1;
	printf("%d %d %d\n", i++, i++, i);

	static int k= 5;
	if (--k) {
		printf("%d ", k);
		main(i);
	}


	getchar();
	return 0;
}