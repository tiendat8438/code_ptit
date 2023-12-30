#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int tc; scanf("%d", &tc);
	getchar();
	while(tc--){
		char s1[100];
		gets(s1);
		char *token = strtok(s1, " ");
		char a[100][100];
		int n = 0;
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		printf("#Test %d: ");
		int res = 0; // kiem tra xem co tu nao duoc lap hay khong
		for(int i = 0; i < n; i++){
			int ok = 0;
			for(int j = 0; j < i; j++){
				if(strcmp(a[i], a[j]) == 0){
					ok = 1;
					break;
				}
			}
			if(ok){
				printf("%s\n", a[i]);
				res = 1;
				break;
			}
		}
		if(!res) printf("-1\n");
	}
	return 0;
}
