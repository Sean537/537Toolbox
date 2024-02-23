#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include "about.h"
#include "card.h"
int main(){
	// 初始化绘图窗口
	initgraph(800,600);
	// 设置背景颜色为白色
	setbkcolor(WHITE);
	// 用背景色清空屏幕
	cleardevice();
	
	// 获得窗口句柄
	HWND hWnd = GetHWnd();
	// 使用 Windows API 修改窗口名称
	SetWindowText(hWnd, "537工具箱");
	IMAGE image_homeLogo;
	loadimage(&image_homeLogo, _T("images/537Toolbox_Logo_512x512.png"),384,384,false);
	putimage(10, 20, &image_homeLogo);
	// 设置绘图色为537蓝 
	setlinecolor(RGB(0,122,255));
	setfillcolor(RGB(0,122,255));
	roundrect(400,15,580,120,30,30);
	settextstyle(25,0,_T("微软雅黑"));  // 设置字体和大小
	settextcolor(RGB(0,122,255));  // 设置文本颜色为RGB(0,122,255)
	setbkcolor(RGB(255, 255, 255));
    outtextxy(440,50, _T("测试Test"));  // 在窗口中显示文本
	RECT rect = {400, 15, 580, 120};  // 创建表示圆角矩形区域的RECT结构体对象
	int mousemode=0,mousemodeex=0;
	while (true)
	{
		MOUSEMSG msg = GetMouseMsg();
			POINT pt = {msg.x, msg.y};  // 获取鼠标坐标
			if (PtInRect(&rect, pt))  // 判断鼠标是否在圆角矩形内
			{
				std::cout<<"检测到鼠标在圆角矩形内\n";
				mousemode=1;
			}else{
				std::cout<<"检测到鼠标不在圆角矩形内\n";
				mousemode=0;
			}
			std::cout<<"进入循环\n"; 
			std::cout<<"mousemode:"<<mousemode<<"\tmousemodeex:"<<mousemodeex<<"\n"; 
			if(mousemode!=mousemodeex){
				std::cout<<"不相等\n";
				if(mousemode==1){
					fillcard();
					std::cout<<"已填充\n\n";
				}
				else card();
				outtextxy(440,50, _T("测试Test"));  // 在窗口中显示文本
				mousemodeex=mousemode;
			}
	}

	about_thisapp();
	
	/*
	// 定义字符串缓冲区，并接收用户输入
	char s[10];
	InputBox(s, 10, "请输入半径");

	// 将用户输入转换为数字
	int r = atoi(s);;
	std::cout<<r;
	// 画圆
	circle(320, 240, r);
	
	// 按任意键退出
	_getch();
	closegraph();
	*/
	// 按任意键退出
	_getch();
	closegraph();
	return 0;
}

