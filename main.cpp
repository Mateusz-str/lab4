#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	string once[]={"jeden","dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec"};
	string s[]={"dziesiec","dwadziescia","trzydziesci","czterdziesci","piecdziesiat","szesciedziesiat","siedmdziesiat","osiemdziesiat","dziewiedziesiat"};
	string m[]={"sto","dwiescie","trzysta","czterysta","piecset","szejset","siedemset","osiemset","dziewiecset"};
	string r[]={"tysiac","tysiecy","tysiace"};
	int t[6];
	double j=1;
	for(int i=0;i<6;i++){
		t[i]=(n/(int)pow(10.0,j))%10;
		j++;
	}
	string result[6];


}