#include "reg52.h"			 //���ļ��ж����˵�Ƭ����һЩ���⹦�ܼĴ���
#include "lcd.h"
typedef unsigned int u16;	  //���������ͽ�����������
typedef unsigned char u8;

u8 Disp[]="Made By Ma Jun";
u8 Disp1[]="00:00.0";
u8 Disp2[]="00:10.0";

	void main(void)     
{

	u8 i;
	int t1=1,t2=0,t3=0,t4=0;
	int flag=0;
	int flag1=0;
	LcdInit();                //LCD��ʼ��

	while(1)
	{
	
	LcdWriteCom(0x80);        //��ʾ��һ��
	for(i=0;i<15;i++)
	{LcdWriteData(Disp[i]);}
  
		if(K5==0)
	{
	  flag1=1;       
  }
	
	
	if(flag1==0)
	{
	 LcdWriteCom(0xC0);       //��ʾ�ڶ���
	 for(i=0;i<8;i++)
	{LcdWriteData(Disp1[i]);}}
	
		if(flag1==1)            //10s����ʱ
	{
	 LcdWriteCom(0xC0);      
	 for(i=0;i<8;i++)
	{LcdWriteData(Disp2[i]);}}
	
	
	
	if(K3==0)
	{
	  LcdWriteCom(0x02);        //����
  }
	
		if(K4==0)
	{
	  flag=~flag;       
  }
	
	if(flag1==0)               //��ʱ
	{
		  if(K1==0)
	{
	 
	while(1)
	{

   
	for(i=0;i<9;i++)
	{
		LcdWriteCom(0xC6);
		LcdWriteData('0'+i);
		Lcd1602_Delay1ms(100);
		
		if(K2==0)                   //��ͣ���Ƿ���
		{ 
			while(1)
			{
				if(K2==~K2)
					break;
			if(K3==0)                  //������Ƿ���
		{	 
			while(1)
			{ if(K3==0)
				{break;}
			}

			}	if(K3==0)
				{break;}

		}
			if(K3==0)
				{break;}
		}
      if(K3==0)
				{break;}
	}	 
	  if(K3==0)
				{break;}
		LcdWriteCom(0xC6);
		LcdWriteData('9');
		Lcd1602_Delay1ms(80);
			
			if(flag)
			{ Beed=1;Lcd1602_Delay1ms(20);}
			else{Beed=0;Lcd1602_Delay1ms(20);Beed=1;               //����������
			}
     


    LcdWriteCom(0xC4);   //1��λ
		if(t1<10||t1==10)
		{LcdWriteData('0'+t1++);}
		if(t1>10)
		{t1=1;LcdWriteCom(0xC4);LcdWriteData('0');t2++;}
			
		LcdWriteCom(0xC3);   //10��λ
		if(t2<6||t2==6)
		{LcdWriteData('0'+t2);}
		if(t2>6)
		{t2=1;LcdWriteCom(0xC3);LcdWriteData('0');t3++;}
		
		LcdWriteCom(0xC1);   //1����λ
		if(t3<10||t3==10)
		{LcdWriteData('0'+t3);}
		if(t3>10)
		{t3=1;LcdWriteCom(0xC1);LcdWriteData('0');t4++;}
		
		LcdWriteCom(0xC0);   //10����λ
		if(t4<6||t4==6)
		{LcdWriteData('0'+t4);}
		if(t4>6)
		{t4=1;LcdWriteCom(0xC0);LcdWriteData('0');}
    
	} if(K3==0)
				{break;}
}
}
	
/**************10s����ʱ**********************/
		
	if(flag1==1)               
	{ 	
		if(K3==0)
	{
	  LcdWriteCom(0x02);        //����
  }
			
		if(K1==0)
	{ int j=1;
		while(1)
		{
		LcdWriteCom(0xC3);   //10��λ
		LcdWriteData('0');
		
		LcdWriteCom(0xC6);
		LcdWriteData('0');
		Lcd1602_Delay1ms(100);
		if(j)
		{
		  LcdWriteCom(0xC4);
			LcdWriteData('9');
		}
			
		
		for(i=0;i<10;i++)
	{

		LcdWriteCom(0xC6);
		LcdWriteData('9'-i);
		Lcd1602_Delay1ms(100);
	}
	
	  LcdWriteCom(0xC4);   //1��λ
		if(t1<10)
		{LcdWriteData('9'-t1++);j=0;}
		if(t1==10)
		{t1=1;LcdWriteCom(0xC4);LcdWriteData('0');t2++;}
		if(t2==1)
		{ Beed=0;Lcd1602_Delay1ms(100);Beed=1;
		while(1)
		{
			if(K3==0)
				break;
		}if(K3==0)
				break;
		}if(K3==0)
				break;

	
	}if(K3==0)
				break;
	
	
	
}if(K3==0)
				break;
	
	}
}}
