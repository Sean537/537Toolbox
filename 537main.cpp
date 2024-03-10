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
	card3();
	card4();
	card5();
	card6();
	 
	RECT rect1 = {400,15,580,120};  // 创建表示1号卡片圆角矩形区域的RECT结构体对象
	RECT rect2 = {600,15,780,120};
	RECT rect3 = {400,135,580,240};  // 创建表示圆角矩形区域的RECT结构体对象
	RECT rect4 = {600,135,780,240};
	RECT rect5 = {400,255,580,360};
	RECT rect6 = {600,255,780,360};
	int button1_mousemode=0,button1_mousemodeex=0;
	int button2_mousemode=0,button2_mousemodeex=0;
	int button3_mousemode=0,button3_mousemodeex=0;
	int button4_mousemode=0,button4_mousemodeex=0;
	int button5_mousemode=0,button5_mousemodeex=0;
	int button6_mousemode=0,button6_mousemodeex=0;
	while (true)
	{
		MOUSEMSG msg = GetMouseMsg();
			POINT pt = {msg.x, msg.y};  // 获取鼠标坐标
			if (PtInRect(&rect1, pt)){// 判断鼠标是否在圆角矩形内
				button1_mousemode=1;//在图形内 
			}else{
				button1_mousemode=0;
			}
			
			if (PtInRect(&rect2, pt)){
				button2_mousemode=1;
			}else{
				button2_mousemode=0;
			}
			
			if (PtInRect(&rect3, pt)){
				button3_mousemode=1;
			}else{
				button3_mousemode=0;
			}
			
			if (PtInRect(&rect4, pt)){
				button4_mousemode=1;
			}else{
				button4_mousemode=0;
			}
			
			if (PtInRect(&rect5, pt)){
				button5_mousemode=1;
			}else{
				button5_mousemode=0;
			}
			
			if (PtInRect(&rect6, pt)){
				button6_mousemode=1;
			}else{
				button6_mousemode=0;
			}
			
			
			if(button1_mousemode!=button1_mousemodeex){
				//std::cout<<"不相等\n";
				if(button1_mousemode==1){
					fillcard1();
					//std::cout<<"已填充\n\n";
				}
				else card1();
				/*
				// 画渐变的天空(通过亮度逐渐增加)
				float H = 195;		// 色相
				float S = 1;		// 饱和度
				float L = 0.5f;		// 亮度
				setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
				for(int r = 30; r > 1; r--){
					H += 1;
					setlinecolor(HSLtoRGB(H, S, L));
					circle(500, 480, r);
				
				}
				*/
				button1_mousemodeex=button1_mousemode;
			}
			if(button2_mousemode!=button2_mousemodeex){
				if(button2_mousemode==1){
					fillcard2();
				}
				else card2();
				button2_mousemodeex=button2_mousemode;
			}
			if(button3_mousemode!=button3_mousemodeex){
				if(button3_mousemode==1){
					fillcard3();
				}
				else card3();
				button3_mousemodeex=button3_mousemode;
			}
			if(button4_mousemode!=button4_mousemodeex){
				if(button4_mousemode==1){
					fillcard4();
				}
				else card4();
				button4_mousemodeex=button4_mousemode;
			}
			if(button5_mousemode!=button5_mousemodeex){
				if(button5_mousemode==1){
					fillcard5();
				}
				else card5();
				button5_mousemodeex=button5_mousemode;
			}
			if(button6_mousemode!=button6_mousemodeex){
				if(button6_mousemode==1){
					fillcard6();
				}
				else card6();
				button6_mousemodeex=button6_mousemode;
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

