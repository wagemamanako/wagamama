#include <stdio.h>

int search1(int *k,int n,int key);

int main(){
	int E[]={301,416,156,49,85,925,726,512,1024,255};
	int key=1024;
	int n=sizeof(E)/sizeof(E[0]);
	int result;
	result=search1(E,n,key);
	printf("查找%d的数组下标为：%d \n",key,result);

	return 0;
}

/*无序线性表的顺序查找函数*/
int search1(int *k,int n,int key){
	int i;
	for(i=0; i<n; i++){
		if(k[i]==key)
			return i;
	}
	return -1;
}