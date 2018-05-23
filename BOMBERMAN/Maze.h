#pragma once




const int MAZEROW = 30;
const int MAZECOL = 50;
const int CELLWIDTH = 5;
const int CELLHEIGHT = CELLWIDTH;



// Maze

//ö�� 
enum CellType{
	obstacle = -1, normal = 0,brick = 1 ,boom = 2,							//-1�ϰ��0�յأ�1 ש�飬2 ը��
	monterUp = 41,monterRight = 42,monterDown = 43,monterLeft = 44,			//4��ͷΪ��������������ĸ�״̬
	playerUp = 91, playerRight = 92,playerDown = 93,playerLeft = 94,	//9��ͷΪ��ҵ����������ĸ�״̬
};

class Maze 
{
public:
	Maze();
	virtual ~Maze();
	void DrawMaze();
const static	 int WINDOWWIDTH=960 ;
const static int WINDOWHEIGHT =640;
	

protected:
	int ppMaze[MAZEROW][MAZECOL];

private:
	void initMaze();//��ʼ���Թ�
	void createBrick();//�������ש��
	void createMonster();//������ɹ���
	void drawCell(CPoint p,int type);//���Ʒ���, ��pλ�û���type����
};


