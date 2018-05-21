// BmpLoader.h: interface for the CBmpLoader class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BMPLOADER_H__D57606C8_D3C1_4A3F_A114_1FEE047DAE5F__INCLUDED_)
#define AFX_BMPLOADER_H__D57606C8_D3C1_4A3F_A114_1FEE047DAE5F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define BITMAP_ID 0x4D42	/**< λͼ�ļ��ı�־ */

class CBmpLoader  
{
public:
	CBmpLoader();
	virtual ~CBmpLoader();
	  bool LoadBitmap(char *filename); /**< װ��һ��bmp�ļ� */
      void FreeImage();                /**< �ͷ�ͼ������ */

      unsigned int ID;                 /**< ���������ID�� */
      int imageWidth;                  /**< ͼ���� */
      int imageHeight;                 /**< ͼ��߶� */
      unsigned char *image;            /**< ָ��ͼ�����ݵ�ָ�� */

};

#endif // !defined(AFX_BMPLOADER_H__D57606C8_D3C1_4A3F_A114_1FEE047DAE5F__INCLUDED_)
