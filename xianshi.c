#include "lcd.h"
#include "reg52.h"	

void jishi()
{
  if(K1==0)
	{
	 
	while(1)
	{

   
	for(i=0;i<10;i++)
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
				
			if(flag)
			{ Beed=1;}
			else{Beed=0;Lcd1602_Delay1ms(10);Beed=1;               //蜂鸣器发声
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
		