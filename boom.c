#include<stdio.h>
#include<Windows.h>
typedef enum __bool { false = 0, true = 1, } bool;

int main(){
    int i;
    char name[100];
    bool flag = true;
    while(true){		
    	printf("1. 首先复制一段文字或者图片\n"); 
   		printf("2. 输入要轰炸人的名字：\n");
    	scanf("%s",&name);
    	printf("3. 输入要轰炸的次数：\n");
    	scanf("%d",&i);
    	HWND H = FindWindow(0,name);
    	if(!H){
    		printf("yes");
		}
    	while(i-->0){
    		
        	SendMessage(H,WM_PASTE,0,0);//粘贴内容 
        	SendMessage(H,WM_KEYDOWN,VK_RETURN,0);//回车发送 
    	}
   		if(i<=0){
   			printf("well done，finish！\n\n");
    		printf("***开始我们新一轮的轰炸***\n\n");
		   }
    	else{
    		printf("未发送成功，请重试");	
		} 		
	}
    
}
