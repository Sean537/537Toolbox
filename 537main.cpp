#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <conio.h>
#include "include\about.h"
#include "include\card.h"
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
	init();//初始化
	 
	IMAGE image_homeLogo;//定义首页Logo 
	loadimage(&image_homeLogo, _T("images/537Toolbox_Logo_512x512.png"),384,384,false);//以384*384分辨率加载（图片必须位于该地址） 
	putimage(10, 20, &image_homeLogo);//显示图片 
	
	
    card1();//创建1号卡片
	card2();
	 
	RECT rect1 = {400, 15, 580, 120};  // 创建表示1号卡片圆角矩形区域的RECT结构体对象
	RECT rect2 = {600, 15, 780, 120};  // 创建表示圆角矩形区域的RECT结构体对象
	int button1_mousemode=0,button1_mousemodeex=0;
	int button2_mousemode=0,button2_mousemodeex=0;
	while (true)
	{
		MOUSEMSG msg = GetMouseMsg();
			POINT pt = {msg.x, msg.y};  // 获取鼠标坐标
			if (PtInRect(&rect1, pt))  // 判断鼠标是否在圆角矩形内
			{
				//std::cout<<"检测到鼠标在圆角矩形内\n";
				button1_mousemode=1;
			}else{
				//std::cout<<"检测到鼠标不在圆角矩形内\n";
				button1_mousemode=0;
			}
			std::cout<<"进入循环\n"; 
			std::cout<<"button1_mousemode:"<<button1_mousemode<<"\tbutton1_mousemodeex:"<<button1_mousemodeex<<"\n"; 
			if(button1_mousemode!=button1_mousemodeex){
				std::cout<<"不相等\n";
				if(button1_mousemode==1){
					fillcard1();
					std::cout<<"已填充\n\n";
				}
				else card1();
				
				button1_mousemodeex=button1_mousemode;
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

