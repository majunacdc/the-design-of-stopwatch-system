#ifndef __LCD_H_
#define __LCD_H_
/**********************************
��ʹ�õ���4λ���ݴ����ʱ���壬
ʹ��8λȡ���������
**********************************/
//#define LCD1602_4PINS

/**********************************
����ͷ�ļ�
**********************************/
#include<reg52.h>

//---�ض���ؼ���---//
#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint 
#define uint unsigned int
#endif

/**********************************
PIN�ڶ���
**********************************/
#define LCD1602_DATAPINS P0
sbit LCD1602_E=P2^7;
sbit LCD1602_RW=P2^5;
sbit LCD1602_RS=P2^6;

sbit K1=P3^0;             //��������
sbit K2=P3^1;             //��ͣ����
sbit K3=P3^2;             //���㰴��
sbit K4=P3^3;             //����������
sbit K5=P3^4;             //10s��ʱ����

sbit Beed=P1^0;           //������
/**********************************
��������
**********************************/
/*��51��Ƭ��12MHZʱ���µ���ʱ����*/
void Lcd1602_Delay1ms(uint c);   //��� 0us
/*LCD1602д��8λ�����Ӻ���*/
void LcdWriteCom(uchar com);
/*LCD1602д��8λ�����Ӻ���*/	
void LcdWriteData(uchar dat)	;
/*LCD1602��ʼ���ӳ���*/		
void LcdInit();						  

#endif
