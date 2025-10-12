#include<stdio.h>
int main()
{
		while (1){
			int num = 2;
			printf("请输入：-1/0/1\n");
			scanf_s("%d", &num);
				
					if (0 == num)
					{
						printf("hellowworld\n");
					}
					else if (1 == num)
					{
						printf("HELLOWWORLD\n");
					}
					else if (-1 == num) {
					break;
				     }
					else {
						printf("输入错误，请重新输入\n");
					}
		}
		return 0;
			
}


		

	
	
