int main(){
	int i;
	int j;
	int k;
	int sum;
	int a[3][3];
	int b[2+1][3];
	int c[3][1+2];
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			sum = 0;
			for (k = 0; k <= 2; k++) {
				sum = sum + 1 * b[k][j];
			}
	        c[i][j] = sum;
	      }
	   }
	return 0;
}