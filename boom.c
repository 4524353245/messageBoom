#include<stdio.h>
#include<Windows.h>
typedef enum __bool { false = 0, true = 1, } bool;

int main(){
    int i;
    char name[100];
    bool flag = true;
    while(true){		
    	printf("1. ���ȸ���һ�����ֻ���ͼƬ\n"); 
   		printf("2. ����Ҫ��ը�˵����֣�\n");
    	scanf("%s",&name);
    	printf("3. ����Ҫ��ը�Ĵ�����\n");
    	scanf("%d",&i);
    	HWND H = FindWindow(0,name);
    	if(!H){
    		printf("yes");
		}
    	while(i-->0){
    		
        	SendMessage(H,WM_PASTE,0,0);//ճ������ 
        	SendMessage(H,WM_KEYDOWN,VK_RETURN,0);//�س����� 
    	}
   		if(i<=0){
   			printf("well done��finish��\n\n");
    		printf("***��ʼ������һ�ֵĺ�ը***\n\n");
		   }
    	else{
    		printf("δ���ͳɹ���������");	
		} 		
	}
    
}
