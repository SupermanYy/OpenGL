// Maze.cpp : implementation file
//

#include "stdafx.h"
#include "BOMBERMAN.h"
#include "Maze.h"

#include"gl/gl.h"
#include"gl/glu.h"


// Maze

Maze::Maze()
{

}

Maze::~Maze()
{
}


void Maze::DrawScence(void)
{

	//����������ɫΪ��ɫ
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	//�����ɫ����������Ȼ�����
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0,0,-6);
	
	glFinish();
	SwapBuffers(wglGetCurrentDC());
	//for (int i=0;i<MAZEROW;i++)
	//{
	//	for(int j=0;j<MAZECOL;j++){
	//		CPoint p;
	//		p.x = i*CELLWIDTH+12;

	//		
	//			drawCell()
	//		
	//	}
	//}
	
}



//��ʼ���Թ�
void Maze::initMaze(){
	int i,j;
	memset(ppMaze,normal,sizeof(ppMaze));//0�������ͨ����·��
	for (i=1;i<MAZEROW;i+=2)
	{
		for(j=1;j<MAZECOL;j+=2){
		
				ppMaze[i][j]=obstacle;
		}
	}
	ppMaze[0][0] = playerDown;//�������
	createBrick();//�������ש��
	createMonster();//������ɹ���
}

//�������ש��
void Maze::createBrick()
{

}
//������ɹ���
void Maze::createMonster()
{

}
//���Ʒ���, ��pλ�û���type����
void Maze::drawCell(CPoint p,int type)
{
	glBegin(GL_QUADS);  // OpenGL����ֱ������
	glColor3f(1.0, 0.0, 0.0); // ���õ�ǰ��ɫΪ��ɫ

	glVertex3f(-1.0, 0.0,0.0);
	glVertex3f(-1.0, 1.0,0.0);
	glVertex3f(1.0, 1.0,0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glEnd();
}