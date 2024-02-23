#include <graphics.h>
void card(){
	setfillcolor(RGB(255,255,255));
	fillroundrect(400, 15, 580, 120, 30, 30);
	settextcolor(RGB(0,122,255));  // 设置文本颜色为RGB(0,122,255)
	setbkcolor(RGB(255, 255, 255));
    roundrect(400,15,580,120,30,30);
}
void fillcard(){
	setfillcolor(RGB(0,122,255));
	settextcolor(RGB(255,255,255));  // 设置文本颜色为RGB(0,122,255)
	setbkcolor(RGB(0, 122, 255));  // 设置背景色为RGB(0,122,255)
    fillroundrect(400, 15, 580, 120, 30, 30);  // 在圆角矩形上填充颜色
}
