#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void main()
{
	BITMAPFILEHEADER hf; // BMP ������� 14Bytes
	BITMAPINFOHEADER hInfo; // BMP ������� 40Bytes
	RGBQUAD hRGB[256]; // �ȷ�Ʈ (256 * 4Bytes)
	FILE *fp, *fp1, *fp2, *fp3;
	fp = fopen("lenna.bmp", "rb");
	if (fp == NULL) return;
	fread(&hf, sizeof(BITMAPFILEHEADER), 1, fp); //�������
	fread(&hInfo, sizeof(BITMAPINFOHEADER), 1, fp); //�������
	fread(hRGB, sizeof(RGBQUAD), 256, fp); //�ȷ�Ʈ
	int ImgSize = hInfo.biWidth * hInfo.biHeight;
	BYTE * Image = (BYTE *)malloc(ImgSize);
	BYTE * Output1 = (BYTE *)malloc(ImgSize);
	BYTE * Output2 = (BYTE *)malloc(ImgSize);
	BYTE * Output3 = (BYTE *)malloc(ImgSize);
	fread(Image, sizeof(BYTE), ImgSize, fp); //ȭ������
	fclose(fp);
	for (int i = 0; i < ImgSize; i++)
		Output1[i] = Image[i]; //���� ����
	for (int i = 0; i < ImgSize; i++)
		Output2[i] = Image[i] + 50; //��� 50 ����
	for (int i = 0; i<ImgSize; i++)
		Output3[i] = 255 - Image[i]; //����

	fp1 = fopen("output1.bmp", "wb");
	fp2= fopen("output2.bmp", "wb");
	fp3= fopen("output3.bmp", "wb");
	fwrite(&hf, sizeof(BYTE), sizeof(BITMAPFILEHEADER), fp1);
	fwrite(&hInfo, sizeof(BYTE), sizeof(BITMAPINFOHEADER), fp1);
	fwrite(hRGB, sizeof(RGBQUAD), 256, fp1);
	fwrite(&hf, sizeof(BYTE), sizeof(BITMAPFILEHEADER), fp2);
	fwrite(&hInfo, sizeof(BYTE), sizeof(BITMAPINFOHEADER), fp2);
	fwrite(hRGB, sizeof(RGBQUAD), 256, fp2);
	fwrite(&hf, sizeof(BYTE), sizeof(BITMAPFILEHEADER), fp3);
	fwrite(&hInfo, sizeof(BYTE), sizeof(BITMAPINFOHEADER), fp3);
	fwrite(hRGB, sizeof(RGBQUAD), 256, fp3);
	fwrite(Output1, sizeof(BYTE), ImgSize, fp1);
	fwrite(Output2, sizeof(BYTE), ImgSize, fp2);
	fwrite(Output3, sizeof(BYTE), ImgSize, fp3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	free(Image);
	free(Output1);
	free(Output2);
	free(Output3);
}