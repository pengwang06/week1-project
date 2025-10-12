#include<stdio.h>
struct GPIO
{
	char GPIO_Speed;
};
struct GPIO GPIO1;
struct GPIO* p=&GPIO1;
enum Speed
{
	GPIO_Speed_2MHz,
	GPIO_Speed_10MHz,
	GPIO_Speed_50MHz
};
void GPIO_Structurelnit(void)
{
	p->GPIO_Speed= GPIO_Speed_2MHz ;
};

int main()
{
	GPIO_Structurelnit();
	printf("%d\n", p->GPIO_Speed);
	return 0;
}