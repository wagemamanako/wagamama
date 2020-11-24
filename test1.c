#include <stdio.h>

void sort(int *k,int n);
int bin_search(int *k,int n,int key);

int main(){
	int E[]={301,416,156,49,85,925,726,512,1024,255};
	int n=sizeof(E)/sizeof(E[0]);
	sort(E,n);
	int key=85;
	int result;
	result=bin_search(E,n,key);
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
//二分查找函数
int bin_search(int *k,int n,int key){
	int low=0;
	int high=n-1;
	int mid;
	while(low <= high){
		mid=(low + high)/2;
		if(k[mid] == key)
			return mid;
		if(k[mid] >key)
			high = mid-1;
		else
			low=mid+1;
	}
	return -1;
}