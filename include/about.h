#include <graphics.h>
void init(){
	// 设置绘图色为537蓝 
	setlinecolor(RGB(0,122,255));
	setfillcolor(RGB(0,122,255));
	setbkcolor(RGB(255, 255, 255));
	settextstyle(25,0,_T("微软雅黑"));  // 设置字体和大小
	
	IMAGE image_homeLogo;//定义首页Logo 
	loadimage(&image_homeLogo, _T("images/537Toolbox_Logo_512x512.png"),350,350,false);//以384*384分辨率加载（图片必须位于该地址） 
	putimage(25, 20, &image_homeLogo);//显示图片
} 
void about_thisapp(){
	// 设置绘图色为苹果蓝 
	setlinecolor(RGB(0,122,255));
	setfillcolor(RGB(0,122,255));
	fillcircle(40,550,20);
}
