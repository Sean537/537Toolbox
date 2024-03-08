#include <graphics.h>
void card1(){
	setfillcolor(RGB(255,255,255));
	fillroundrect(400, 15, 580, 120, 30, 30);  // 在圆角矩形上填充颜色
	setbkcolor(RGB(255, 255, 255));
	settextcolor(RGB(0,122,255));  // 设置文本颜色为RGB(0,122,255)
    roundrect(400,15,580,120,30,30);//创建圆角矩形
    outtextxy(450,50, _T("Button1"));  // 在窗口中显示文本
}
void fillcard1(){
	setfillcolor(RGB(0,122,255));
	settextcolor(RGB(255,255,255));  // 设置文本颜色为RGB(0,122,255)
	setbkcolor(RGB(0,122,255));  // 设置背景色为RGB(0,122,255)
    fillroundrect(400, 15, 580, 120, 30, 30);  // 在圆角矩形上填充颜色
    outtextxy(450,50, _T("Button1"));  // 在窗口中显示文本
}
//card2:180*120
//距离左侧600px，距离顶部15px， 
void card2(){
	setfillcolor(RGB(255,255,255));
	fillroundrect(600,15,780,120,30,30);  // 在圆角矩形上填充颜色
	setbkcolor(RGB(255, 255, 255));
	settextcolor(RGB(0,122,255));  // 设置文本颜色为RGB(0,122,255)
    roundrect(600,15,780,120,30,30);
    outtextxy(650,50, _T("Button2"));  // 在窗口中显示文本
}
void fillcard2(){
	setfillcolor(RGB(0,122,255));
	settextcolor(RGB(255,255,255));  // 设置文本颜色为RGB(0,122,255)
	setbkcolor(RGB(0, 122, 255));  // 设置背景色为RGB(0,122,255)
    fillroundrect(400, 15, 580, 120, 30, 30);  // 在圆角矩形上填充颜色
    outtextxy(650,50, _T("Button2"));  // 在窗口中显示文本
}
