#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "lcd.h"
typedef unsigned int u16;	  //对数据类型进行声明定义
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
	LcdInit();                //LCD初始化

	while(1)
	{
	
	LcdWriteCom(0x80);        //显示第一行
	for(i=0;i<15;i++)
	{LcdWriteData(Disp[i]);}
  
		if(K5==0)
	{
	  flag1=1;       
  }
	
	
	if(flag1==0)
	{
	 LcdWriteCom(0xC0);       //显示第二行
	 for(i=0;i<8;i++)
	{LcdWriteData(Disp1[i]);}}
	
		if(flag1==1)            //10s倒计时
	{
	 LcdWriteCom(0xC0);      
	 for(i=0;i<8;i++)
	{LcdWriteData(Disp2[i]);}}
	
	
	
	if(K3==0)
	{
	  LcdWriteCom(0x02);        //清零
  }
	
		if(K4==0)
	{
	  flag=~flag;       
  }
	
	if(flag1==0)               //计时
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
		
		if(K2==0)                   //暂停键是否按下
		{ 
			while(1)
			{
				if(K2==~K2)
					break;
			if(K3==0)                  //清零键是否按下
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
			else{Beed=0;Lcd1602_Delay1ms(20);Beed=1;               //蜂鸣器发声
			}
     


    LcdWriteCom(0xC4);   //1秒位
		if(t1<10||t1==10)
		{LcdWriteData('0'+t1++);}
		if(t1>10)
		{t1=1;LcdWriteCom(0xC4);LcdWriteData('0');t2++;}
			
		LcdWriteCom(0xC3);   //10秒位
		if(t2<6||t2==6)
		{LcdWriteData('0'+t2);}
		if(t2>6)
		{t2=1;LcdWriteCom(0xC3);LcdWriteData('0');t3++;}
		
		LcdWriteCom(0xC1);   //1分钟位
		if(t3<10||t3==10)
		{LcdWriteData('0'+t3);}
		if(t3>10)
		{t3=1;LcdWriteCom(0xC1);LcdWriteData('0');t4++;}
		
		LcdWriteCom(0xC0);   //10分钟位
		if(t4<6||t4==6)
		{LcdWriteData('0'+t4);}
		if(t4>6)
		{t4=1;LcdWriteCom(0xC0);LcdWriteData('0');}
    
	} if(K3==0)
				{break;}
}
}
	
/**************10s倒计时**********************/
		
	if(flag1==1)               
	{ 	
		if(K3==0)
	{
	  LcdWriteCom(0x02);        //清零
  }
			
		if(K1==0)
	{ int j=1;
		while(1)
		{
		LcdWriteCom(0xC3);   //10秒位
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
	
	  LcdWriteCom(0xC4);   //1秒位
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
