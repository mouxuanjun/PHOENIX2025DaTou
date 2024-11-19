#ifndef __CARMODE_H__
#define __CARMODE_H__

typedef enum
{
	Car_Stop     = 0x00,//整车停止
	Car_Remote   = 0x01,//遥控器控制
	Car_Keyboard = 0x02//键盘控制
}Car_State;

typedef enum
{
    FOLLOW 	   = 0x00,	//切换到底盘最大速度位置（上坡，逃跑等）
    GYROSCOPE  = 0x01,  //小陀螺模式
    NORMAL     = 0x02,  //底盘不跟随云台行走
}Car_Action;

typedef enum
{
	Shoot_Normal = 0x00, //手动射击
	Shoot_Plugins = 0x01 //自瞄模式
}Car_Shoot;

typedef struct
{
	Car_State State;
	Car_Action Action;
	Car_Shoot Shoot;
}Car_Mode_t;

#endif


