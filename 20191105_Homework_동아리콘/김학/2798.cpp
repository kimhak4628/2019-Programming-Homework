#include<stdio.h>
#include<algorithm>
int a[300000];
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		int sum = 0;
		sum += a[i];
		for(int j = i+1; j < n; j++){
			sum += a[j];
			for(int k = j+1; k < n; k++){
				sum += a[k];
				if(m-max > m-sum && sum <= m){
					max = sum;
				}
				sum -= a[k];
			}
			sum -= a[j];
		}
		sum -= a[i];
	}
	printf("%d", max);
	
	return 0;
}