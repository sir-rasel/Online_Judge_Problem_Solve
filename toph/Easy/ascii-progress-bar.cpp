#include<bits/stdc++.h>
using namespace std;

int main(){
	double rate;
	int near;

	scanf ("%lf", &rate);
	near = (int) floor(rate);
	int tm = (int) (rate / 10.0);

	printf ("[");
	for (int i=0; i < tm; ++i){
		printf ("+");
	}
	for (int k=10; k > tm; --k)
		printf (".");
	printf ("] %d%c\n", near, '%');

	return 0;
}
