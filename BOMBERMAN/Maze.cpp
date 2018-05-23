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
	initMaze();

}

Maze::~Maze()
{
}


void Maze::DrawMaze(void)
{

	//����������ɫΪ��ɫ
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	//�����ɫ����������Ȼ�����
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0,0,-100);
	glRotatef(180, 1, 0, 0);
	glTranslatef(-WINDOWWIDTH / 13, -WINDOWHEIGHT / 15, 0);

	CPoint p;
	glPushMatrix();

	for (int i=0;i<MAZEROW;i++)
	{
		for(int j=0;j<MAZECOL;j++){
			
			p.x = j*CELLWIDTH;
			p.y = i*CELLHEIGHT;
			drawCell(p,ppMaze[i][j]);
			
		}
	}
	glPopMatrix();
	glFinish();
	SwapBuffers(wglGetCurrentDC());
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
	glColor3f(1.0, 1.0, 1.0);
	switch(type){
	case obstacle: glColor3f(0.0, 1.0, 0.0);break;// ���õ�ǰ��ɫΪl��ɫ
	case playerDown: glColor3f(1.0, 0.0, 0.0);break;
	}
	glVertex3f(p.x, p.y,0.0);
	glVertex3f(p.x, p.y+CELLHEIGHT,0.0);
	glVertex3f(p.x+CELLWIDTH, p.y+CELLHEIGHT,0.0);
	glVertex3f(p.x+CELLWIDTH, p.y, 0.0);
	glEnd();
}

//���û÷�ֵ
void Maze::setCellVal(int x,int y, int val)
{
	ppMaze[x][y] = val;
}