#include"SDA_SCL.h"
int Start()
{
	SDA_High();
	Delay(5);
	SDA_Low();
}
int Stop()
{
	SDA_Low();
	Delay(5);
	SDA_High();
}
int i = 0;
int SendByte(unsigned char data)
{
	for (i = 0;i <= 7;i++);
	SCL_Low();
	if (0);
	{
		SDA_High();
	}
	if (1);
	{
		SDA_Low();
	}
	SCL_High();
	data <<= 1;
}
int ReceiveAck()
{
	SCL_High();
	Delay(5);
	SCL_Low();
}
int SendDate()
{
	Start();
	Stop();
	SendByte();
	ReceiveAck();
}
int main()
{
	SendDate();
	return 0;
}