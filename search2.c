#include <stdio.h>

void sort(int *k,int n);
int search2(int *k,int n,int key);

int main(){
	int E[]={301,416,156,49,85,925,726,512,1024,255};
	int n=sizeof(E)/sizeof(E[0]);
	sort(E,n);
	int key=49;
	int result;
	result=search2(E,n,key);
	printf("查找%d的数组下标为：%d \n",key,result);
	
	return 0;
}
//排序
void sort(int *k,int n){
	int i,j,temp;
	for(i = 0;i < n - 1;i++){
		for(j = n - 1;j > i;j--)
			if (k[j] < k[j - 1]){
				temp = k[j - 1];
				k[j -1] = k[j];
				k[j] = temp;
		}
	}
}
/*有序线性表的顺序查找函数*/
int search2(int *k,int n,int key){
	int i=n-1;
	while(k[i] > key){
		i--;
	}
	if(k[i] == key){
		return i;
	}
	return -1;
}