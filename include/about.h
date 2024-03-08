#include <graphics.h>
void init(){
	// 设置绘图色为537蓝 
	setlinecolor(RGB(0,122,255));
	setfillcolor(RGB(0,122,255));
	setbkcolor(RGB(255, 255, 255));
	settextstyle(25,0,_T("微软雅黑"));  // 设置字体和大小
} 
void about_thisapp(){
	// 设置绘图色为苹果蓝 
	setlinecolor(RGB(0,122,255));
	setfillcolor(RGB(0,122,255));
	fillcircle(40,550,20);
}
