#include<stdio.h>
int main() {
	int num, n, count = 0;
	scanf("%d", &num);
	int arr[100000] = { 0, };
	int point = -1;
	char str[6];
	int result[100000] = { 0, };
	for (int i = 0; i < num; i++) {
		scanf("%s", &str);
		if (strcmp(str, "push") == 0) {
			point++;
			scanf("%d", &n);
			arr[point] = n;
		}
		else if (strcmp(str, "pop") == 0) {
			if (point == -1) {
				result[count] = -1;
			}
			else {
				result[count] = arr[point];
				arr[point] = 0;
				point--;
			}
			count++;
		}
		else if (strcmp(str, "size") == 0) {
			result[count] = point + 1;
			count++;
		}
		else if (strcmp(str, "empty")==0) {
			if (point > -1)
				result[count] = 0;
			
			else
				result[count] = 1;
			count++;
		}
		else if (strcmp(str, "top") == 0) {
			if (point == -1)
				result[count] = -1;
			else
				result[count] = arr[point];
			count++;
		}
	}
	for (int j = 0; j < count; j++) {
		printf("%d", result[j]);
		printf("\n");
	}
}