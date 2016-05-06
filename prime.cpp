#include <stdio.h>
int main(){
	int maxRange =100;
	for(int i=2;i<maxRange;i++){
		bool flag = false;
		for(int j=2;j<=(i/2);j++){
			if(i%j==0){
				flag = true;
				break;
			}
		}
		if(!flag){
			printf("%d\n",i);
		}
	}
}