#ifndef  _ART_DAM3000M_SERIAL_
#define _ART_DAM3000M_SERIAL_

#include <windows.h>

// ********************* 开关量输出的参数结构 ****************************
typedef struct _DAM3000M_PARA_DO			// 数字量输出参数
{
	BYTE DO0;       	// 0通道
	BYTE DO1;       	// 1通道
	BYTE DO2;       	// 2通道
	BYTE DO3;       	// 3通道
	BYTE DO4;       	// 4通道
	BYTE DO5;       	// 5通道
	BYTE DO6;       	// 6通道
	BYTE DO7;       	// 7通道
	BYTE DO8;			// 8通道
	BYTE DO9;			// 9通道
	BYTE DO10;      	// 10通道
	BYTE DO11;      	// 11通道
	BYTE DO12;      	// 12通道
	BYTE DO13;			// 13通道
	BYTE DO14;			// 14通道
	BYTE DO15;			// 15通道
} DAM3000M_PARA_DO, *PDAM3000M_PARA_DO;


// ********************* 开关量输入的参数结构 *******************************
typedef struct  _DAM3000M_PARA_DI		// 数字量输入参数(1为高电平)
{
	BYTE DI0;			// 0通道
	BYTE DI1;			// 1通道
	BYTE DI2;			// 2通道
	BYTE DI3;			// 3通道
	BYTE DI4;			// 4通道
	BYTE DI5;			// 5通道
	BYTE DI6;			// 6通道
	BYTE DI7;			// 7通道
	BYTE DI8;			// 8通道
	BYTE DI9;			// 9通道
	BYTE DI10;			// 10通道
	BYTE DI11;			// 11通道
	BYTE DI12;			// 12通道
	BYTE DI13;			// 13通道
	BYTE DI14;			// 14通道
	BYTE DI15;			// 15通道
	BYTE DI16;			// 16通道
	BYTE DI17;			// 17通道
	BYTE DI18;			// 18通道
	BYTE DI19;			// 19通道
	BYTE DI20;			// 20通道
	BYTE DI21;			// 21通道
	BYTE DI22;			// 22通道
	BYTE DI23;			// 23通道
	BYTE DI24;			// 24通道
	BYTE DI25;			// 25通道
	BYTE DI26;			// 26通道
	BYTE DI27;			// 27通道
	BYTE DI28;			// 28通道
	BYTE DI29;			// 29通道
	BYTE DI30;			// 30通道
	BYTE DI31;			// 31通道
} DAM3000M_PARA_DI, *PDAM3000M_PARA_DI;

typedef struct  _DAM3000M_PARA_LATCH      // 数字量锁存参数(1为锁存)
{
	BYTE Latch0;		// 0通道
	BYTE Latch1;        // 1通道
	BYTE Latch2;        // 2通道
	BYTE Latch3;        // 3通道
	BYTE Latch4;        // 4通道
	BYTE Latch5;        // 5通道
	BYTE Latch6;        // 6通道
	BYTE Latch7;        // 7通道
	BYTE Latch8;        // 8通道
	BYTE Latch9;        // 9通道
	BYTE Latch10;       // 10通道
	BYTE Latch11;       // 11通道
	BYTE Latch12;       // 12通道
	BYTE Latch13;       // 13通道
	BYTE Latch14;       // 14通道
	BYTE Latch15;       // 15通道
	BYTE Latch16;       // 16通道
	BYTE Latch17;       // 17通道
	BYTE Latch18;       // 18通道
	BYTE Latch19;       // 19通道
	BYTE Latch20;       // 20通道
	BYTE Latch21;       // 21通道
	BYTE Latch22;       // 22通道
	BYTE Latch23;       // 23通道
	BYTE Latch24;       // 24通道
	BYTE Latch25;       // 25通道
	BYTE Latch26;       // 26通道
	BYTE Latch27;       // 27通道
	BYTE Latch28;       // 28通道
	BYTE Latch29;       // 29通道
	BYTE Latch30;       // 30通道
	BYTE Latch31;       // 31通道
} DAM3000M_PARA_LATCH, *PDAM3000M_PARA_LATCH;


// ****************** 模拟量输入通道配置结构体 *************************
typedef struct _DAM3000M_ADCHANNEL_ARRAY
{
	BYTE bChannelEnable[16];	// [0~15]分别对应channel0~channel15

/*	BYTE bChannel0;		// 1，有效；0，无效
	BYTE bChannel1;
	BYTE bChannel2;
	BYTE bChannel3;
	BYTE bChannel4;
	BYTE bChannel5;
	BYTE bChannel6;
	BYTE bChannel7;
	BYTE bChannel8;
	BYTE bChannel9;
	BYTE bChannel10;		// 1，有效；0，无效
	BYTE bChannel11;
	BYTE bChannel12;
	BYTE bChannel13;
	BYTE bChannel14;
	BYTE bChannel15;
*/
}DAM3000M_ADCHANNEL_ARRAY, *PDAM3000M_ADCHANNEL_ARRAY;


// ****************** 计数器参数配置结构体 ******************************
typedef struct _DAM3000M_PARA_CNT			// 基于各通道的计数器参数结构体
{
	LONG WorkMode;			// 计数器/频率工作模式
	LONG FreqBuildTime;		// 测频器建立时间, 单位: s
	LONG InputMode;			// 计数器/频率输入方式	0: 非隔离	1: 隔离
	ULONG InitVal;			// 计数器初始值
	ULONG MaxVal;			// 计数器最大值
	LONG GateSts;			// 门槛值状态(计数模式)
} DAM3000M_PARA_CNT, *PDAM3000M_PARA_CNT;

typedef struct _DAM3000M_CNT_ALARM
{
	LONG AlarmMode;			// 报警方式	
	LONG EnableAlarm0;		// 0通道报警使能
	LONG EnableAlarm1;		// 1通道报警使能
	ULONG Alarm0Val;		// 0通道报警值
	ULONG Alarm1Val;		// 1通道报警值
	ULONG Alarm0HiHiVal;	// 0通道上上限(Hi-Hi)报警值, 报警方式1有效
} DAM3000M_CNT_ALARM, *PDAM3000M_CNT_ALARM;

typedef struct _DAM3000M_PARA_FILTER		// 用于计数器滤波的参数结构体
{
	LONG TrigLevelHigh;		// 触发高电平(非隔离输入)
	LONG TrigLevelLow;		// 触发低电平(非隔离输入)
	LONG MinWidthHigh;		// 高电平最小输入信号宽度
	LONG MinWidthLow;		// 低电平最小输入信号宽度
	LONG bEnableFilter;		// 使能滤波
} DAM3000M_PARA_FILTER, *PDAM3000M_PARA_FILTER;
//	LONG DisplayChannel;	// 设置显示通道		0：0通道计数/频率，1：1通道计数/频率


typedef struct _DAM3000M_CNT_STATUS			// 计数器硬件参数状态结构体
{
	LONG WorkMode;			// 计数器/频率工作模式*
	LONG FreqBuildTime;		// 测频器建立时间, 单位: s*
	LONG InputMode;			// 计数器/频率输入方式	0: 非隔离	1: 隔离*
	LONG bCNTSts;			// 计数/频率器的状态(起停状态)*
	LONG FilterSts;			// 计数器的滤波状态*
	LONG MinWidthHigh;		// 高电平最小输入信号宽度*
	LONG MinWidthLow;		// 低电平最小输入信号宽度*
	LONG TrigLevelHigh;		// 触发高电平(非隔离输入)*
	LONG TrigLevelLow;		// 触发低电平(非隔离输入)*
	LONG GateSts;			// 门槛值设置状态(计数模式)*
	ULONG MaxVal;			// 计数器最大值*
	ULONG InitVal;			// 计数器初始值*
	LONG bOverflowSts;		// 计数器溢出状态*
	LONG AlarmMode;			// 计数器报警方式*
	LONG EnableAlarm0;		// 计数器0报警使能状态*
	LONG EnableAlarm1;		// 计数器1报警使能状态*
	ULONG Alarm0Val;		// 0通道报警值*
	ULONG Alarm1Val;		// 1通道报警值*
	ULONG Alarm1HiHiVal;	// 报警方式1上上限(Hi-Hi)报警值*
	LONG bDO0;				// DO0*
	LONG bDO1;				// DO1*
} DAM3000M_CNT_STATUS, *PDAM3000M_CNT_STATUS;


// ****************** 设备基本信息的结构体 ******************************
typedef struct _DAM3000M_DEVICE_INFO
{
	LONG    DeviceType;		// 模块类型 
	LONG    TypeSuffix;		// 类型后缀
	LONG	ModusType;		// M
	LONG	VesionID;		// 版本号(2字节)
	LONG	DeviceID;		// 模块ID号(SetDeviceInfo时，为设备的新ID)
	LONG	BaudRate;		// 波特率
	LONG	bParity;		// 0:无校验 1:偶校验 2:奇校验(只有这3个值才能表示该模块有可能支持此功能，设置时此值不为0 1 2表示不设置此参数)
} DAM3000M_DEVICE_INFO, *PDAM3000M_DEVICE_INFO;


// ****************** 测温模块传感器参数的结构体 ******************************
typedef struct _DAM3000M_SENSOR_PARA
{
	BYTE	SerialNumber;	// 编号
	BYTE	Channel;		// 所在通道号
	BYTE	SequenceNumber;	// 通道内顺序号
	WORD	Temperature;	// 温度
	BYTE	ID[8];			// ID号
	BYTE	AlarmMark;		// 报警标志
} DAM3000M_SENSOR_PARA, *PDAM3000M_SENSOR_PARA;

// FOR DAM3090 ******************************
typedef struct _DAM3000M_ADTEST_PARA
{
	BYTE	PowerFre;	    // 电源频率(0:50Hz；1:60Hz)
	BYTE	TimeCon;		// 数字滤波时间常数(0~20)
	BYTE	CoSelect;	    // 冷端选择(0：固定值；1：内部冷端传感器；2：外部通道)
	WORD	CoValue;	    // 冷端固定值(0~60)
	BYTE	ChNum;			// 冷端通道号(0~5)
	WORD	ModVlaue;		// 冷端补偿修正值(5000~15000)
	BYTE	AdMode;		    // 测量模式(0：普通模式；1：慢速模式)
} DAM3000M_ADTEST_PARA, *PDAM3000M_ADTEST_PARA;


// 模拟量输入类型(电压类型) 供DAM3000M_SetModeAD函数中的lMode参数使用
#define DAM3000M_VOLT_N15_P15					0x01 //  -15～+15mV
#define DAM3000M_VOLT_N50_P50					0x02 //  -50～+50mV
#define DAM3000M_VOLT_N100_P100					0x03 // -100～+100mV
#define DAM3000M_VOLT_N150_P150					0x04 // -150～+150mV
#define DAM3000M_VOLT_N500_P500					0x05 // -500～+500mV
#define DAM3000M_VOLT_N1_P1						0x06 //   -1～+1V
#define DAM3000M_VOLT_N0_P1						0x89 //   0～+1V
#define DAM3000M_VOLT_N25_P25					0x07 // -2.5～+2.5V
#define DAM3000M_VOLT_N5_P5						0x08 //   -5～+5V
#define DAM3000M_VOLT_N10_P10					0x09 //  -10～+10V
#define DAM3000M_VOLT_N0_P5						0x0D //    0～+5V
#define DAM3000M_VOLT_N0_P10					0x0E //    0～+10V
#define DAM3000M_VOLT_N0_P25					0x0F //    0～+2.5V
#define DAM3000M_VOLT_N20_P20					0x81 //    -20～+20mV
#define DAM3000M_VOLT_N1_P5						0x82 //    1～+5V
#define DAM3000M_VOLT_N30_P30V					0x83 //  -30～+30V
#define DAM3000M_VOLT_N0_P30V					0x84 //    0～+30V
#define DAM3000M_VOLT_N500_P500V				0x8A // -500～+500V
#define DAM3000M_VOLT_N30_P30					0x8B // -30mV～+30mV
#define DAM3000M_VOLT_N0_P12					0x8C // 0～12V
#define DAM3000M_VOLT_N0_P20					0x8D // 0～20V

#define DAM3000M_VOLT_YH_N10_P10				0x08 // 研华协议下-10～+10V
#define DAM3000M_VOLT_YH_N5_P5					0x09 // 研华协议下-5～+5V
#define DAM3000M_VOLT_YH_N1_P1					0x0A // 研华协议下-1～+1V
#define DAM3000M_VOLT_YH_N500_P500V				0x0B // 研华协议下-500～+500mV
#define DAM3000M_VOLT_YH_N150_P150V				0x0C // 研华协议下-150～+150mV
#define DAM3000M_VOLT_YH_N0_P10					0x48 // 研华协议下0～+10V
#define DAM3000M_VOLT_YH_N0_P5					0x49 // 研华协议下0～+5V
#define DAM3000M_VOLT_YH_N0_P1					0x4A // 研华协议下0～+1V
#define DAM3000M_VOLT_YH_N15_P15				0x15 // 研华协议下-15～+15V
#define DAM3000M_VOLT_YH_N0_P15					0x55 // 研华协议下0～+15V

// 模拟量输入类型(电流类型) 供DAM3000M_SetModeAD函数中的lMode参数使用
#define DAM3000M_CUR_N0_P10						0x00 //   0～10mA
#define DAM3000M_CUR_N20_P20					0x0A // -20～+20mA
#define DAM3000M_CUR_N0_P20						0x0B //   0～20mA
#define DAM3000M_CUR_N4_P20						0x0C //   4～20mA
#define DAM3000M_CUR_N0_P22						0x80 //   0～22mA
#define DAM3000M_CUR_N10_P10A					0x85 // -10～+10A
#define DAM3000M_CUR_N0_P10A					0x86 //   0～+10A
#define DAM3000M_CUR_N50_P50A					0x87 // -50～+50A
#define DAM3000M_CUR_N0_P50A					0x88 //   0～+50A
#define DAM3000M_CUR_YH_N0_P20A					0x4D // 研华协议下0～20mA
#define DAM3000M_CUR_YH_N4_P20A					0x07 // 研华协议下4～20mA
#define DAM3000M_CUR_YH_N20_P20A				0x0D // 研华协议下-20～20mA

// 模拟量输入类型(电流类型) 供DAM3000M_SetModeAD函数中的lMode参数使用
#define DAM3000M_R_N0_R400Ω					0x88 // 远传压力表电阻   0～400Ω

// 模拟量输入类型(热电偶类型) 供DAM3000M_SetModeAD函数中的lMode参数使用
#define DAM3000M_TMC_J							0x10 // J型热电偶   0～1200℃
#define DAM3000M_TMC_K							0x11 // K型热电偶   0～1300℃
#define DAM3000M_TMC_T							0x12 // T型热电偶 -200～400℃
#define DAM3000M_TMC_E							0x13 // E型热电偶   0～1000℃
#define DAM3000M_TMC_R							0x14 // R型热电偶 0～1700℃
#define DAM3000M_TMC_S							0x15 // S型热电偶 0～1768℃
#define DAM3000M_TMC_B							0x16 // B型热电偶 0～1800℃
#define DAM3000M_TMC_N							0x17 // N型热电偶   0～1300℃
#define DAM3000M_TMC_C							0x18 // C型热电偶   0～2090℃
#define DAM3000M_TMC_WRE						0x19 // 钨铼5-钨铼26 0～2310℃
#define DAM3000M_TMC_K_EX						0x70 // K型热电偶   -40～1300℃
#define DAM3000M_TMC_B_N						0x71 // B型热电偶 250～1800℃

// 模拟量输入类型(热电阻类型) 供DAM3000M_SetModeAD函数中的lMode参数使用
#define DAM3000M_RTD_PT100_385_N200_P850		0x20 // Pt100(385)热电阻 -200℃～850℃
#define DAM3000M_RTD_PT100_385_N100_P100		0x21 // Pt100(385)热电阻 -100℃～100℃
#define DAM3000M_RTD_PT100_385_N0_P100			0x22 // Pt100(385)热电阻    0℃～100℃
#define DAM3000M_RTD_PT100_385_N0_P200			0x23 // Pt100(385)热电阻    0℃～200℃
#define DAM3000M_RTD_PT100_385_N0_P600			0x24 // Pt100(385)热电阻    0℃～600℃
#define DAM3000M_RTD_PT100_3916_N200_P850		0x25 // Pt100(3916)热电阻-200℃～850℃
#define DAM3000M_RTD_PT100_3916_N100_P100		0x26 // Pt100(3916)热电阻-100℃～100℃
#define DAM3000M_RTD_PT100_3916_N0_P100			0x27 // Pt100(3916)热电阻   0℃～100℃
#define DAM3000M_RTD_PT100_3916_N0_P200			0x28 // Pt100(3916)热电阻   0℃～200℃
#define DAM3000M_RTD_PT100_3916_N0_P600			0x29 // Pt100(3916)热电阻   0℃～600℃
#define DAM3000M_RTD_PT1000						0x30 // Pt1000热电阻     -200℃～850℃
#define DAM3000M_RTD_CU50						0x40 // Cu50热电阻        -50℃～150℃
#define DAM3000M_RTD_CU100						0x41 // Cu100热电阻       -50℃～150℃
#define DAM3000M_RTD_BA1						0x42 // BA1热电阻        -200℃～650℃
#define DAM3000M_RTD_BA2						0x43 // BA2热电阻        -200℃～650℃
#define DAM3000M_RTD_G53						0x44 // G53热电阻         -50℃～150℃
#define DAM3000M_RTD_Ni50						0x45 // Ni50热电阻        100℃
#define DAM3000M_RTD_Ni508						0x46 // Ni508热电阻         0℃～100℃
#define DAM3000M_RTD_Ni1000						0x47 // Ni1000热电阻      -60℃～160℃
#define DAM3000M_RTD_103AT						0x60 // 103AT电阻		  -50℃～110℃

// 模块量输出斜率类型	供DAM3000M_SetModeDA函数中的参数 lType 使用
#define DAM3000M_SLOPE_IMMEDIATE				0x00 // Immediate
#define DAM3000M_SLOPE_POINT125					0x01 // 0.125 mA/S
#define DAM3000M_SLOPE_POINT25					0x02 // 0.25  mA/S
#define DAM3000M_SLOPE_POINT5					0x03 // 0.5  mA/S
#define DAM3000M_SLOPE_1						0x04 // 1.0  mA/S
#define DAM3000M_SLOPE_2						0x05 // 2.0  mA/S
#define DAM3000M_SLOPE_4						0x06 // 4.0  mA/S
#define DAM3000M_SLOPE_8						0x07 // 8.0  mA/S
#define DAM3000M_SLOPE_16						0x08 // 16.0  mA/S
#define DAM3000M_SLOPE_32						0x09 // 32.0  mA/S
#define DAM3000M_SLOPE_64						0x0A // 64.0  mA/S
#define DAM3000M_SLOPE_128						0x0B // 128.0  mA/S
#define DAM3000M_SLOPE_256						0x0C // 256.0  mA/S
#define DAM3000M_SLOPE_512						0x0D // 512.0  mA/S
#define DAM3000M_SLOPE_1024						0x0E // 1024.0  mA/S
#define DAM3000M_SLOPE_2048						0x0F // 2048.0  mA/S

// DI计数方式 供DAM3000M_SetDeviceMode函数中的lMode参数使用
#define DAM3000M_DI_MODE_DI						0x00 // DI方式
#define DAM3000M_DI_MODE_COUNT					0x01 // 计数方式
#define DAM3000M_DI_MODE_LATCH					0x02 // 锁存方式

// DI计数方式 供DAM3000M_SetDeviceMode函数中的lEdgeMode参数使用
#define DAM3000M_DIR_FALLING					0x00 // 下降沿
#define DAM3000M_DIR_RISING						0x01 // 上升沿

//########################## 计数器 ###################################
// 模块的工作模式 供DAM3000M_SetDevWorkMode函数中的lMode参数使用
#define DAM3000M_WORKMODE_CNT					0x00 // 计数器
#define DAM3000M_WORKMODE_FREQ					0x01 // 频率器

// 计数器/频率的输入方式 供DAM3000M_PARA_CNT结构体中的lInputMode参数使用
#define DAM3000M_UNISOLATED						0x00 // 非隔离
#define DAM3000M_ISOLATED						0x01 // 隔离

// 门槛值状态 供DAM3000M_PARA_CNT结构体中的GateSts参数使用
#define DAM3000M_GATE_LOW						0x00 // 门槛值为低电平
#define DAM3000M_GATE_HIGH						0x01 // 门槛值为高电平
#define DAM3000M_GATE_NULL						0x02 // 门槛值无效

// 报警方式 供DAM3000M_CNT_ALARM结构体中的AlarmMode参数使用
#define CNT_ALARM_MODE0							0x00 // 报警方式0	0通道-1通道上限
#define CNT_ALARM_MODE1							0x01 // 报警方式1	0通道上限 / 上上限

// 报警方式0使能 供DAM3000M_CNT_ALARM结构体中的EnableAlarm0 和 EnableAlarm1参数使用
#define CNT_ALAMODE0_DISABLE					0x00 // 报警方式0禁止报警
#define CNT_ALAMODE0_ENABLE						0x01 // 报警方式0允许报警

// 报警方式1使能 供DAM3000M_CNT_ALARM结构体中的EnableAlarm0参数使用
#define CNT_ALAMODE1_DISABLE					0x00 // 报警方式1 计数器0 禁止报警
#define CNT_ALAMODE1_INSTANT					0x01 // 报警方式1 计数器0 瞬间报警允许
#define CNT_ALAMODE1_LATCH						0x02 // 报警方式1 计数器0 闭锁报警允许

// 滤波状态使能 供DAM3000M_PARA_FILTER结构体中的bEnableFilter参数使用
#define DAM3000M_FILTER_DISABLE					0x00 // 禁止滤波
#define DAM3000M_FILTER_ENABLE					0x01 // 允许滤波
//-----------------------------------------------------

//########################## 电量 ###################################
#define DAM3000M_GET_I_RMS						0x00 // 获得电流有效值
#define DAM3000M_GET_V_RMS						0x01 // 获得电压有效值
#define DAM3000M_GET_PHVOLTAGE					0x01 // 获得电压有效值、相电压
#define DAM3000M_GET_POWER						0x02 // 获得有功功率
#define DAM3000M_GET_VAR						0x03 // 获得无功功率
#define DAM3000M_GET_VA							0x04 // 获得视在功率
#define DAM3000M_GET_WATTHR						0x05 // 获得正相有功电度
#define DAM3000M_GET_RWATTHR					0x06 // 获得反相有功电度
#define DAM3000M_GET_VARHR						0x07 // 获得正相无功电度
#define DAM3000M_GET_RVARHR						0x08 // 获得反相无功电度
#define DAM3000M_GET_PF							0x09 // 获得功率因数
#define DAM3000M_GET_FREQ						0x0A // 获得输入信号频率
#define DAM3000M_GET_VAWATTHR					0x0B // 获得电度
#define DAM3000M_GET_LINEVOLTAGE				0x0C // 获得线电压


// 数显表小数点位置  供DAM3000M_SetDecimalPoint和DAM3000M_GetDecimalPoint中使用###################################

#define DAM3000M_DECPOINT_ABit					0x00 // 小数点在个位
#define DAM3000M_DECPOINT_Ten					0x01 // 小数点在十位
#define DAM3000M_DECPOINT_Hundred				0x02 // 小数点在百位
#define DAM3000M_DECPOINT_Thousand				0x03 // 小数点在千位
#define DAM3000M_DECPOINT_NULL					0x04 // 无小数点


// 串口号(以此类推) 供DAM3000M_CreateDevice使用，可根据自身需要扩充
#define DAM3000M_COM1							0x01 // COM1
#define DAM3000M_COM2							0x02 // COM2
#define DAM3000M_COM3							0x03 // COM3
#define DAM3000M_COM4							0x04 // COM4
#define DAM3000M_COM5							0x05 // COM5

// 波特率选择 供DAM3000M_SetDeviceInfo和DAM3000M_GetDeviceInfo中的PDAM3000M_DEVICE_INFO使用
#define DAM3000M_BAUD_1200						0x00
#define DAM3000M_BAUD_2400						0x01
#define DAM3000M_BAUD_4800						0x02
#define DAM3000M_BAUD_9600						0x03
#define DAM3000M_BAUD_19200						0x04
#define DAM3000M_BAUD_38400						0x05
#define DAM3000M_BAUD_57600						0x06
#define DAM3000M_BAUD_115200					0x07


// 波特率选择 供DAM3000M_SetDeviceInfo和DAM3000M_GetDeviceInfo中的PDAM3000M_DEVICE_INFO(bParity)使用
#define DAM3000M_PARITY_NONE					0x00
#define DAM3000M_PARITY_EVEN					0x01
#define DAM3000M_PARITY_ODD						0x02

#define DAM3000M_DEFAULT_TIMEOUT                 -1

// 驱动函数接口
#ifndef DEFINING
#define DEVAPI __declspec(dllimport)
#else
#define DEVAPI __declspec(dllexport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
//####################### 设备对象管理函数 #################################	
	HANDLE DEVAPI FAR PASCAL DAM3000M_CreateDevice(LONG lPortNum);		// 创建设备对象

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_InitDevice(						// 初始与模块之间的通信参数
									HANDLE	hDevice,					// 设备对象句柄
									LONG    lBaud,						// 波特率
									LONG    lParity,					// 校验方式
									LONG    lTimeOut = DAM3000M_DEFAULT_TIMEOUT);	// 超时时间，主要用于接收数据，如果为-1 则使用默认超时时间

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReleaseDevice(HANDLE hDevice);		// 释放设备对象 

	BOOL DEVAPI FAR PASCAL DAM3000M_RebootDevice(						// 重启设备
									HANDLE hDevice,						// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BOOL	bReboot);					// 重启设备标志 =TRUE 重启 =FALSE 无操作

	BOOL DEVAPI FAR PASCAL DAM3000M_ResetDevice(						// 复位设置
									HANDLE hDevice,						// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BOOL	bReset);					// 复位设备标志 =TRUE 复位 =FALSE 无操作

	BOOL DEVAPI FAR PASCAL DAM3000M_EnterCalibration(					// 使模块进入(退出)校准模式
									HANDLE hDevice,						// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BOOL	bCalibrate);				// 进入校准标志  =TRUE 进入校准模式 =FALSE 不操作

//################################### 模块信息取得/修改函数 ############################
	BOOL DEVAPI FAR PASCAL	DAM3000M_GetDeviceInfo(						// 读取模块信息(类型、地址、波特率、校验)
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PDAM3000M_DEVICE_INFO pInfo);		// 设备信息

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetDeviceInfo(						// 修改模块信息(地址、波特率、校验)
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									DAM3000M_DEVICE_INFO& Info);		// 设备信息
	
	BOOL DEVAPI	FAR	PASCAL  DAM3000M_GetDevLastError(					// 获得最后一个错误
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID);					// 模块地址

	BOOL DEVAPI FAR PASCAL DAM3000M_GetDevSafeTime(						// 获取模块安全通信时间
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lSafeTime);					// 获取安全通信时间

	BOOL DEVAPI FAR PASCAL DAM3000M_SetDevSafeTime(						// 设置模块安全通信时间
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lSafeTime);					// 设置安全通信时间参数

	BOOL DEVAPI FAR PASCAL DAM3000M_GetDevSampleRate(					// 获取模块采样率
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 模块地址
									PLONG lSampleRate);					// 模块采样率 如0x00代表500Hz

	BOOL DEVAPI FAR PASCAL DAM3000M_SetDevSampleRate(					// 设置模块采样率
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 模块地址
									LONG lSampleRate);					// 模块采样率 如0x00代表500Hz

	BOOL DEVAPI FAR PASCAL	DAM3000M_GetUploadDataTime(					// 获取上传数据时间间隔
									HANDLE hDevice,						// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PWORD	pwUploadDataTime);			// 获取数据上传时间间隔

	BOOL DEVAPI FAR PASCAL	DAM3000M_SetUploadDataTime(					// 设置上传数据时间间隔
									HANDLE hDevice,						// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									WORD	wUploadDataTime);			// 设置数据上传时间间隔

	BOOL DEVAPI FAR PASCAL DAM3000M_SetTestPara(	                    // 设置DAM3090测试参数
										HANDLE hDevice,                 // 设备对象句柄
										LONG	lDeviceID,              // 模块地址
										PDAM3000M_ADTEST_PARA pTestPARA);  //测试参数

	BOOL DEVAPI FAR PASCAL DAM3000M_GetTestPara(						// 设置DAM3090测试参数
										HANDLE hDevice,					// 设备对象句柄
										LONG	lDeviceID,				// 模块地址
										PDAM3000M_ADTEST_PARA pTestPARA); //测试参数

	BOOL DEVAPI FAR PASCAL DAM3000M_GetCommunicationMode(				// 获取模块通讯模式
										HANDLE hDevice,					// 设备句柄
										LONG lDeviceID,					// 模块地址
										PLONG lMode);					// 通讯模式0-RS485 1-RS232

	BOOL DEVAPI FAR PASCAL DAM3000M_SetCommunicationMode(				// 设置模块通讯模式
										HANDLE hDevice,					// 设备句柄
										LONG lDeviceID,					// 模块地址
										LONG lMode);					// 通讯模式0-RS485 1-RS232

	//####################### AD数据读取函数 ###################################	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadDeviceAD(						// 读取AD模拟量输入 
									HANDLE	hDevice,					// 设备对象句柄	
									LONG	lDeviceID,					// 模块地址
									LONG	lpADBuffer[],				// 接收AD数据的用户缓冲区 注意:lpADBuffer最好大于等于lLastChannel - lFirstChannel +1
									LONG    lBufferSize,        		// 数组lpADBuffer[]的大小
									LONG	lFirstChannel = 0,			// 首通道
									LONG	lLastChannel = 0);			// 末通道

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadDeviceAD_WORD(
									HANDLE hDevice,		// 设备对象句柄	
									LONG   lDeviceID,
									WORD   lADBuffer[],	// 接受AD数据的用户缓冲区 
									LONG   lBufferSize,    // 数组lpADBuffer[]的大小
									LONG   lFirstChannel,  // 首通道
									LONG   lLastChannel);	// 末通道

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadDeviceAD_WORD_Addr(
									HANDLE hDevice,		// 设备对象句柄	
									LONG   lDeviceID,
									LONG   lAddr,		// 读取AD值首地址（AD0通道地址）
									WORD   lADBuffer[],	// 接受AD数据的用户缓冲区 
									LONG   lBufferSize,    // 数组lpADBuffer[]的大小
									LONG   lFirstChannel,  // 首通道
									LONG   lLastChannel);	// 末通道

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetModeAD(							// 获得模拟量输入模式 
									HANDLE	hDevice,					// 设备对象句柄	
									LONG	lDeviceID,					// 模块地址
									PLONG	lpMode,						// AD模式
									LONG	lChannel = 0);				// 通道号
	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetModeAD_Addr(
									HANDLE hDevice,		// 设备对象句柄	
									LONG	lAddr,		// AD0通道对应地址
									LONG	lDeviceID,
									PLONG	lpADMode,
									LONG	lChannel);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetModeAD(					// 设置AD输入模式 
									HANDLE	hDevice,			// 设备对象句柄	
									LONG	lDeviceID,			// 模块地址
									LONG	lMode,				// AD模式 
									LONG	lChannel = 0);		// 通道号
	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetModeAD_Addr(
									HANDLE  hDevice,			// 设备对象句柄	
									LONG	lAddr,				// AD0通道对应地址
									LONG	lDeviceID,
									LONG	lADMode,
									LONG	lChannel);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetGroundingAD(					// 获得通道接地模式(只对可软件配置单/双端输入模块有效)
									HANDLE	hDevice,					// 设备对象句柄	
									LONG	lDeviceID,					// 模块地址
									PLONG	lpGrounding,				// AD通道接地模式
									LONG	lChannel = 0);				// 通道号
	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetGroundingAD(					// 设置通道接地模式(只对可软件配置单/双端输入模块有效)
									HANDLE	hDevice,					// 设备对象句柄	
									LONG	lDeviceID,					// 模块地址
									LONG	lGrounding,					// AD通道接地模式
									LONG	lChannel = 0);				// 通道号
	
	BOOL DEVAPI FAR PASCAL	DAM3000M_GetLowLimitVal(					// 获得模拟量输入报警下限值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lLowLimit[],				// 下限报警值
									LONG    lFirstChannel = 0,			// 首通道号
									LONG	lLastChannel = 0);			// 末通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_GetHighLimitVal(					// 获得模拟量输入报警上限值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lHighLimit[],				// 上限报警值
									LONG    lFirstChannel = 0,			// 首通道号
									LONG	lLastChannel = 0);			// 末通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetLowLimitVal(						// 设置下限报警值
									HANDLE	hDevice,
									LONG	lDeviceID,					// 模块地址
									LONG	lLowVal[],					// 下限报警值
									LONG    lFirstChannel = 0,			// 首通道号
									LONG	lLastChannel = 0);			// 末通道号
		
	BOOL DEVAPI FAR PASCAL DAM3000M_SetHighLimitVal(					// 设置上限报警值
									HANDLE	hDevice,
									LONG	lDeviceID,					// 模块地址
									LONG	lHighVal[],					// 上限报警值
									LONG    lFirstChannel = 0,			// 首通道号
									LONG	lLastChannel = 0);			// 末通道号
		
	BOOL DEVAPI FAR PASCAL  DAM3000M_GetAlarmPulse(						// 获得报警的电平
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lpAlarmVal,					// 报警电平,0:低电平, 1:高电平
									LONG	lChannel = 0);				// 通道号
	
	BOOL DEVAPI FAR PASCAL  DAM3000M_SetAlarmPulse(						// 设置模拟量输入报警电平
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lAlarmVal,					// 报警电平,0:低电平, 1:高电平	
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetAlarmSts(						// 获得报警状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lpAlarmSts,					// 报警状态
									LONG	lChannel = 0);				// 读取通道

	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetDeviceADStatus(					// 回读模拟量输入通道使能状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lChannelCount,				// 通道数
									PDAM3000M_ADCHANNEL_ARRAY pADArray);// 通道使能状态

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetDeviceADEanble(					// 设置模拟量输入通道使能状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	byADEn[],					// 设置AD使能状态
									LONG    lFirstChannel,				// 首通道号
									LONG	lLastChannel);				// 末通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_AD_AutoUpload(						// 主动上传使能
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									BOOL bUpload);						// 主动上传 1=主动上传 0=不主动上传

	BOOL DEVAPI FAR PASCAL DAM3000M_AD_GetBrokenStatus(					// 获取AD断藕状态
									HANDLE hDevice,						// 设备对象句柄
									LONG lAddr,							// AD0通道对应地址
									LONG lDeviceID,						// 设备地址
									PBYTE byBroken,						// 断藕状态
									LONG lChannel);						// 通道号

	//############ 带平均值/历史最大值/最小值(AMM)AD操作函数接口 #################
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_AMM_AD_ReadWORD(					// 读取AD模拟量输入值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lpADBuffer[],				// 接收AD数据的用户缓冲区 注意数据存放格式，从lpADBuffer[lFirstChannel]开始连续存放返回的数据
									LONG	lFirstChannel = 0,			// 首通道 通道号从0开始
									LONG	lLastChannel = 0);			// 末通道 通道号从0开始

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_AMM_AD_ReadHistoryData(			// 读取AD模拟量输入历史最大值 最小值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lpADBuffer[],				// 接收AD数据的用户缓冲区 注意数据存放格式，从lpADBuffer[lFirstChannel]开始连续存放返回的数据
									LONG	lMaxOrMin,					// 读取历史最大值还是最小值 1-最大值 2-最小值
									LONG	lFirstChannel = 0,			// 首通道 通道号从0开始
									LONG	lLastChannel = 0);			// 末通道 通道号从0开始

	BOOL DEVAPI FAR PASCAL	DAM3000M_AMM_AD_ReadAverageData(			// 读取AD模拟量所有通道平均值
									HANDLE hDevice,						// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lAverage);					// 通道平均值

	BOOL DEVAPI FAR PASCAL	DAM3000M_AMM_AD_SetInputRange(				// 设置AD模拟量输入量程
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lMode,						// AD模式 
									LONG	lChannel = 0);				// 通道号 从0开始

	BOOL DEVAPI FAR PASCAL	DAM3000M_AMM_AD_GetInputRange(				// 获取AD模拟量输入量程
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lpMode,						// AD模式
									LONG	lChannel = 0);				// 通道号 从0开始

	BOOL DEVAPI FAR PASCAL	DAM3000M_AMM_AD_SetChanEnableSts(			// 设置AD模拟量输入通道使能状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	lADEn[],					// 设置AD使能状态 lADEn[lFirstChannel]对应lFirstChannel通道 lADEn[lLastChannel]对应lLastChannel通道
									LONG	lChannelCount);				// 通道个数

	BOOL DEVAPI FAR PASCAL	DAM3000M_AMM_AD_GetChanEnableSts(			// 获取AD模拟量输入通道使能状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	lADEn[],					// 设置AD使能状态 lADEn[lFirstChannel]对应lFirstChannel通道 lADEn[lLastChannel]对应lLastChannel通道
									LONG	lFirstChannel,				// 首通道号 从0开始
									LONG	lLastChannel);				// 末通道号 从0开始

	BOOL DEVAPI FAR PASCAL	DAM3000M_AMM_AD_ResetHistoryData(			// AD模拟量输入复位历史最大值 最小值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lMaxOrMin,					// 复位最大值还是最小值，1-最大值 2-最小值
									LONG	lFirstChannel,				// 首通道 从0开始
									LONG	lLastChannel);				// 末通道 从0开始


	//####################### DA数据读取函数 ###################################
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetDeviceDAVal(					// 回读DA输出值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	lpDAValue,          		// DA输出当前值
									LONG	lChannel = 0);				// 通道号
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetDeviceDAVal_Addr(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,						//地址
									PLONG	lpDAValue,          		// DA输出当前值
									LONG	lChannel);					// 通道号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_WriteDeviceDA(						// 设定单通道DA
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lDAData,					// DA输出值
									LONG	lChannel = 0);      		// 通道号
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_WriteDeviceDA_Addr(							// 设定单通道DA
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,
									LONG	lDAData,					// DA输出值
									LONG	lChannel);      				// 通道号
	
	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetOutPutRangeDA(					// 读取模拟量输出量程
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	lpRange,					// 输出量程
									LONG	lChannel = 0);				// 通道号
	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetOutPutRangeDA_Addr(					// 读取模拟量输出量程
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,
									PLONG	lpRange,					// 输出量程
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetOutPutRangeDA(					// 设置模拟量输出量程
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lRange,						// 输出量程
									LONG	lChannel = 0);				// 通道号
	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetOutPutRangeDA_Addr(						// 设置模拟量输出类型
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,						//地址
									LONG	lRange,						// 输出量程
									LONG	lChannel);					// 通道号
	
	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetPowerOnValueDA(					// 获得DA上电值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	lpPowerOnVal,       		// 上电值
									LONG	lChannel = 0);				// 通道号
	BOOL DEVAPI	FAR PASCAL DAM3000M_GetPowerOnValueDA_Addr(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,						//地址
									PLONG	lpPowerOnVal,       		// 上电值
									LONG	lChannel);					// 通道号
	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetSafeValueDA_Addr(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,						//地址
									PLONG	lpSafeVal,					// 安全值
									LONG	lChannel);					// 通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetPowerOnValueDA(					// 设置DA上电值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lPowerOnVal,				// 上电值
									LONG	lChannel = 0);				// 通道号
	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetPowerOnValueDA_Addr(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,
									LONG	lPowerOnVal,				// 上电值
									LONG	lChannel);					// 通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetSafeValueDA(					// 获得DA安全值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	lpSafeVal,					// 安全值
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetSafeValueDA(					// 设置DA安全值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lSafeVal,					// 安全值
									LONG	lChannel = 0);				// 通道号
	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetSafeValueDA_Addr(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	Addr,						//地址
									LONG	lSafeVal,					// 安全值
									LONG	lChannel);					// 通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetSlopeDA(						// 读模拟量输出斜率
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	lpSlopeType,				// 输出斜率类型
									LONG	lChannel = 0);				// 通道号
	
	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetSlopeDA(						// 修改模拟量输出斜率
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lSlopeType,					// 输出斜率类型
									LONG	lChannel = 0);				// 通道号

	//####################### DI输入输出操作函数 ##############################
	BOOL DEVAPI FAR PASCAL	DAM3000M_GetModeDI(							// 读取数字量输入的工作模式
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lMode[],					// 输入的工作模式,0:DI模式,1:计数方式,2:锁存方式
									LONG	lEdgeMode[],				// 边沿方式,0:低电平,1:高电平
									LONG	lFirstChannel = 0,			// 首通道
									LONG	lLastChannel = 0);			// 末通道

	BOOL DEVAPI FAR PASCAL	DAM3000M_SetModeDI(							// 设置数字量输入的工作模式
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lMode,						// 输入的工作模式,0:DI模式,1:计数方式,2:锁存方式
									LONG	lEdgeMode,					// 边沿方式,0:低电平,1:高电平
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetModeCNT(						//设置CNT工作模式
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD lMode,						// 模式
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_GetModeCNT(						//获取CNT工作模式
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* lMode,					// 模式
									LONG lChannel);					// 通道号
	
	BOOL DEVAPI FAR PASCAL DAM3000M_EnableCNT(// 设置CNT启停
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD lEnable);						// 启停

	BOOL DEVAPI FAR PASCAL DAM3000M_GetEnableCNT(// 获取CNT启停
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* lEnable);					// 启停

	BOOL DEVAPI FAR PASCAL DAM3000M_LowerLimitAlarmEnable(// 下限报警使能
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD lEnable);						// 使能

	BOOL DEVAPI FAR PASCAL DAM3000M_GetLowerLimitAlarmEnable(// 获取下限报警使能
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* lEnable);					// 使能

	BOOL DEVAPI FAR PASCAL DAM3000M_UpperLimitAlarmEnable(// 上限报警使能
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD lEnable);						// 使能

	BOOL DEVAPI FAR PASCAL DAM3000M_GetUpperLimitAlarmEnable(// 获取上限报警使能
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* lEnable);					// 使能

	BOOL DEVAPI FAR PASCAL DAM3000M_GetPower_Save(				// 获取计数值断电保存
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* wEnable);					// 使能

	BOOL DEVAPI FAR PASCAL DAM3000M_SetPower_Save(				//计数值断电保存
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD wEnable);						// 使能

	BOOL DEVAPI FAR PASCAL DAM3000M_SetLimitAlarmMode(// 报警方式
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD lMode);						// 模式
	
	BOOL DEVAPI FAR PASCAL DAM3000M_GetLimitAlarmMode(// 获取报警方式
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* lMode);					// 模式

	BOOL DEVAPI FAR PASCAL DAM3000M_GetLed(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									WORD* wChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetLed(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模式
									WORD wChannel);					// 通道号
	
	BOOL DEVAPI FAR PASCAL DAM3000M_GetCNTValue(// 获取CNT计数值
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG plValue[],					// 计数值
									LONG lFirstChannel,
									LONG lLastChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetCNTValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lValue,						// 最小值
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetUpperLimitAlarmVal(			//设置上限警报值
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lValue,						// 上限值
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetLowerLimitAlarmVal(			//设置下限报警值
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lValue,						// 上限值
									LONG lChannel);					// 通道号

	
	BOOL DEVAPI FAR PASCAL DAM3000M_GetUpperLimitAlarmVal(			// 获取上限报警值
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG plValue[],					// 上限值
									LONG lFirstChannel,
									LONG lLastChannel);				// 通道号

	
	BOOL DEVAPI FAR PASCAL DAM3000M_GetLowerLimitAlarmVal(			// 获取下限报警值
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG plValue[],					// 下限值
									LONG lFirstChannel,
									LONG lLastChannel);				// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_GetCNTMaxValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG plMaxValue[],					// 计数值最大值
									LONG lFirstChannel,
									LONG lLastChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_GetCNTMinValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG plMinValue[],					// 计数值最小值
									LONG lFirstChannel,
									LONG lLastChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetCNTMaxValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lMaxValue,						// 最大值
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetCNTMinValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lMinValue,						// 最小值
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_SetCNTInitValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lInitValue,						//初值
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_GetCNTInitValue(
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG plInitValue[],					// 计数值初值
									LONG lFirstChannel,
									LONG lLastChannel);					// 通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetDIStatus(
									HANDLE hDevice, 
									LONG lDeviceID, 
									PDAM3000M_PARA_DI pDIPara,
									LONG lBufferSize);		// 获取DI

	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetDeviceDI(						// 读取开关量输入 
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PDAM3000M_PARA_DI pDIPara,			// DI值
									LONG	lBufferSize);				// 通道大小
		
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_StartDeviceDI(						// 启动DI计数
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lChannel = 0);				// 通道号
		
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_StopDeviceDI(						// 停止DI计数
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lChannel = 0);				// 通道号
		
	BOOL DEVAPI FAR PASCAL  DAM3000M_GetCNTDI(							// 读取DI计数器值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	lpCounterValue,     		// 范围(0~65535)
									LONG	lFirstChannel = 0,			// 首通道
									LONG	lLastChannel = 0);			// 末通道

	BOOL DEVAPI	FAR PASCAL  DAM3000M_SetCNTDI(							// 设置DI计数器初始值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lInitValue,					// 计数初值
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_GetCNTDI_InitValue(					// 读取DI计数器初值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lCNTInitValue[],			// 计数器初值数组
									LONG	lFirstChannel,				// 首通道
									LONG	lLastChannel);				// 末通道

	BOOL DEVAPI FAR PASCAL  DAM3000M_StartLatch(						// 启动锁存
									HANDLE	 hDevice,					// 设备句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lChannel = 0);				// 通道号
	
	BOOL DEVAPI FAR PASCAL  DAM3000M_StopLatch(							// 停止锁存
									HANDLE	 hDevice,					// 设备句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR PASCAL  DAM3000M_GetLatchStatus(					// 读锁存状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lLatchType,					// 锁存类型，分为上升沿和下降沿锁存
									PDAM3000M_PARA_LATCH pLatchStatus,	// 锁存状态
									LONG	lBufferSize);				// 通道大小

	BOOL DEVAPI	FAR PASCAL  DAM3000M_ClearCNTVal(						// 清除计数值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR PASCAL  DAM3000M_ClearLatchStatus(					// 清除锁存状态
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL	DAM3000M_GetAutoReadFlag(				// 读自动读写标志位
									HANDLE hDevice,					// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									PWORD	plAutoReadFlag);		// 自动读标志

	BOOL DEVAPI FAR PASCAL	DAM3000M_SetAutoReadFlag(				// 设置自动读写标志位
									HANDLE hDevice,					// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									WORD	lAutoReadFlag);			// 自动读标志

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetLatchStatus(				// 获取DI锁存状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									PBYTE lStatus);					// 状态值,1-锁存 0-未锁存

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetLatchStatus(				// 设置DI锁存状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									BYTE lStatus);					// 状态值,1-锁存 0-未锁存

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetFilterEnable(				// 获取DI过滤使能状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									PBYTE lStatus);					// 状态值,1-使能 0-不使能

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetFilterEnable(				// 设置DI过滤使能状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									BYTE lStatus[]);					// 状态值,1-使能 0-不使能

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetReverseValue(				// 获取DI反向状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									PBYTE lValue);					// 状态值,1-反向 0-不反向

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetReverseValue(				// 设置DI反向状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									BYTE lValue[]);					// 状态值,1-反向 0-不反向

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetCounterStatus(			// 获取DI计数器启停状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									PBYTE lStatus);					// 状态值,1-开始计数 0-停止计数

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetCounterStatus(			// 设置DI计数器启停状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									BYTE lStatus);					// 状态值,1-开始计数 0-停止计数

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetOverflowStatus(			// 获取DI溢出状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									PBYTE lStatus);					// 状态值,1-溢出 0-未溢出

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetOverflowStatus(			// 设置DI溢出状态
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									BYTE lStatus);					// 状态值,1-溢出 0-未溢出

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetMode(						// 获取DI工作模式
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lMode[],					// 模式
									LONG lFirstChannel,				// 首通道
									LONG lLastChannel);				// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetMode(						// 设置DI工作模式
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 模块地址
									LONG lMode,						// 模式
									LONG lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetHighLevelTime(			// 获取DI高电平宽度
									HANDLE hDevice,					// 设备对象句柄
									LONG lDeviceID,					// 设备地址
									LONG lTimes[],					// 宽度值
									LONG lFirstChannel,				// 首通道
									LONG lLastChannel);				// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetHighLevelTime(				// 设置DI高电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetLowLevelTime(					// 获取DI低电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetLowLevelTime(					// 设置DI低电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_GetValue(						// 获取DI计数值/频率值
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 数值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DI_SetValue(						// 设置DI计数值/频率值
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 数值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	//####################### DO数字量输出函数 ###################################	
	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetDeviceDO(						// 回读开关量输出
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PDAM3000M_PARA_DO pDOPara);			// 当前DO输出值

	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetDOStatus(						// 回读开关量输出
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PDAM3000M_PARA_DO pDOPara);			// 当前DO输出值

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetDeviceDO(						// 设置DO开关量输出值 
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	byDOSts[],					// 设置DO输出值
									LONG    lFirstChannel,				// 首通道号
									LONG	lLastChannel);				// 末通道号

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetDeviceDO_Addr(
									HANDLE  hDevice, 
									LONG	lDeviceID, 
									ULONG   Addr,
									BYTE	byDOSts[],
									LONG    lFirstChannel,		// 首通道号
									LONG	lLastChannel);		// 末通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetPowerOnValueDO(					// 获取DO上电初始值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PDAM3000M_PARA_DO pPowerOnPara);	// 上电值 

	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetPowerOnValueDO(					// 设置DO上电初始值 
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									DAM3000M_PARA_DO& PowerOnPara);		// 上电值

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetSafeValueDO(					// 读DO安全值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PDAM3000M_PARA_DO pDOSafePara);		// 安全值

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetSafeValueDO(					// 设置安全值
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									DAM3000M_PARA_DO& DOSafePara);		// 安全值
	
	BOOL DEVAPI	FAR PASCAL	DAM3000M_GetDeviceSafeOutENDO(				// 获取紧急输出通道使能标志
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									PDAM3000M_PARA_DO pDOPara);			// DO输出值
	
	BOOL DEVAPI	FAR PASCAL	DAM3000M_SetDeviceSafeOutENDO(				// 设置紧急输出通道使能标志
									HANDLE  hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	byDOSts,					// 通道状态
									LONG    lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetValue_Addr(					// 获取DO输出值
									HANDLE hDevice,						// 设备对象句柄
									LONG lAddr,							// DO0通道地址
									LONG lDeviceID,						// 设备地址
									PDAM3000M_PARA_DO pDOPara);			// 当前DO输出值
	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetValue_Addr_Standard(					// 获取DO输出值
									HANDLE hDevice,						// 设备对象句柄
									LONG lAddr,							// DO0通道地址 
									LONG lDeviceID,						// 设备地址
									BYTE pDOPara[],						// 当前DO输出值
									LONG lFirstChannel,					// 首通道号
									LONG lLastChannel);					// 末通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetValue_Addr(					// 设置DO输出值
									HANDLE hDevice,						// 设备对象句柄
									LONG lAddr,							// DO0通道地址
									LONG lDeviceID,						// 设备地址
									BYTE byDOSts[],						// 设置DO输出值
									LONG lFirstChannel,					// 首通道号
									LONG lLastChannel);					// 末通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetPowerOnStatus(				// 获取DO上电输出状态
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									PBYTE lSts);						// 状态值，1-高电平 0-低电平

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetPowerOnStatus(				// 设置DO上电输出状态
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									BYTE lSts);							// 状态值，1-高电平 0-低电平

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetSafeStatus(					// 获取DO安全输出状态
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									PBYTE lSts);						// 状态值，1-高电平 0-低电平

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetSafeStatus(					// 设置DO安全输出状态
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									BYTE lSts);							// 状态值，1-高电平 0-低电平

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetMode(							// 获取DO工作模式
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lMode[],						// DO工作模式,lMode[0]-0通道
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetMode(							// 设置DO工作模式
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lMode,							// DO工作模式
									LONG lChannel);						// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetHighLevelTime(				// 获取DO输出高电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetHighLevelTime(				// 设置DO输出高电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetLowLevelTime(					// 获取DO输出低电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetLowLevelTime(					// 设置DO输出低电平宽度
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lTimes[],						// 宽度值
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetPulseCount(					// 获取DO脉冲输出个数
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 个数
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetPulseCount(					// 设置DO脉冲输出个数
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 个数
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetLToHDelayTime(				// 获取DO低到高输出延迟时间
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 时间
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetLToHDelayTime(				// 设置DO低到高输出延迟时间
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 时间
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetHToLDelayTime(				// 获取DO高到低输出延迟时间
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 时间
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetHToLDelayTime(				// 设置DO高到低输出延迟时间
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 时间
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_GetPulseAddCount(				// 获取DO脉冲输出增加个数
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 个数
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	BOOL DEVAPI FAR PASCAL DAM3000M_DO_SetPulseAddCount(				// 设置DO脉冲输出增加个数
									HANDLE hDevice,						// 设备对象句柄
									LONG lDeviceID,						// 设备地址
									LONG lValue[],						// 个数
									LONG lFirstChannel,					// 首通道
									LONG lLastChannel);					// 末通道

	//#############################  计数器  ###################################
	BOOL DEVAPI FAR PASCAL DAM3000M_SetCounterMode(						// 对各个计数器进行参数设置
									HANDLE   hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									PDAM3000M_PARA_CNT pCNTPara,		// 基于各通道的计数器参数
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL DAM3000M_InitCounterAlarm(					// 初始化报警的工作模式
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									PDAM3000M_CNT_ALARM pCNTAlarm);		// 报警参数设置

	BOOL DEVAPI FAR PASCAL DAM3000M_SetCounterAlarmMode(				// 设置计数器报警方式
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lAlarmMode);				// 报警方式

	BOOL DEVAPI FAR PASCAL DAM3000M_GetCounterSts(						// 获得计数器设备硬件参数状态
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									PDAM3000M_CNT_STATUS pStsCNT,		// 返回值
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_StartCounter(						// 启动计数器计数
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_StopCounter(						// 停止计数器计数
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetCounterCurVal(					// 取得计数器当前值
									HANDLE	 hDevice,					// 设备对象句柄
									LONG     lDeviceID,					// 设备地址
									PULONG   pulCNTVal,					// 计数值
									LONG     lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetFreqCurVal(						// 取得频率器当前值
									HANDLE   hDevice,					// 设备对象句柄
									LONG     lDeviceID,					// 设备地址
									PULONG   pulFreqVal,				// 频率值
									LONG     lChannel = 0);				// 通道号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ResetCounter(						// 计数器复位
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_InitCounterFilter(					// 初始化滤波
									HANDLE   hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									PDAM3000M_PARA_FILTER pFilter,		// 滤波参数
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_EnableFilter(						// 使能滤波状态
									HANDLE   hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									BOOL	 bEnable,					// 使能滤波
									LONG	 lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetCounterAlarmSts(				// 获得DO及报警状态
									HANDLE   hDevice,					// 设备对象句柄
									LONG     lDeviceID,					// 设备地址
									PLONG    plEnableAlarm,				// 计数器报警状态
									PLONG    pbDO,						// DO
									LONG	 lChannel = 0);				// 通道号
	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetCounterDO(						// 设置DO
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	byDOSts[],					// DO
									LONG    lFirstChannel,				// 首通道号
									LONG	lLastChannel);				// 末通道号
										
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ClearAlarmSts(						// 清报警方式1报警输出
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID);					// 设备地址
	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetLEDCounterCH(					// 取得计数器LED显示通道
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									PLONG	plChannel);					// 通道号
	
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetLEDCounterCH(					// 设置计数器LED显示通道
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									LONG	lChannel);					// 通道号

	//#############################  电量模块  ###################################
	BOOL DEVAPI FAR PASCAL  DAM3000M_GetEnergyVal(						// 获得电量值
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lValue[],					// 电量值
									LONG	 lAanlogType,				// 模拟量类型
									LONG	 lFirstChannel = 0,			// 首通道
									LONG	 lLastChannel = 0);			// 末通道
	
	BOOL DEVAPI FAR PASCAL  DAM3000M_GetEnergyVal_GetULONG(						// 获得电量值
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									ULONG	 lValue[],					// 电量值
									LONG	 lAanlogType,				// 模拟量类型
									LONG	 lFirstChannel = 0,			// 首通道
									LONG	 lLastChannel = 0);			// 末通道

	BOOL DEVAPI FAR PASCAL  DAM3000M_ClrEnergyReg(						// 清能量寄存器
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lChannel = 0);				// 通道

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetEnergyPerLSB(					// 获得能量单位
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									PLONG	 lpEnergyPerLSB);			// 能量单位

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetEnergyPerLSB(					// 设置能量单位
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									LONG	 lEnergyPerLSB);			// 能量单位

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetInputRange(						// 获得输入量程
									HANDLE	 hDevice,					// 设备对象句柄
									LONG	 lDeviceID,					// 设备地址
									PLONG	 lpInputRangeV,				// 电压输入量程
									PLONG	 lpInputRangeI);			// 电流输入量程

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetInputRange(						// 设置输入量程
									HANDLE	hDevice,					// 设备对象句
									LONG	lDeviceID,					// 设备地址
									LONG	lInputRangeV,				// 电压输入量程
									LONG	lInputRangeI);				// 电流输入量程

	// 获得多个输入量程
	BOOL DEVAPI FAR PASCAL DAM3000M_GetInputRange_M(					// 获得输入量程
									HANDLE	hDevice,
									LONG	lDeviceID,
									WORD	lInputRange[],
									WORD	lFirstChannel,				// 首通道号
									WORD	lLastChannel);				// 末通道号

	// 设置多个输入量程
	BOOL DEVAPI FAR PASCAL DAM3000M_SetInputRange_M(					// 设置输入量程
									HANDLE	hDevice,
									LONG	lDeviceID,
									WORD	lInputRange[],
									WORD	lFirstChannel,				// 首通道号
									WORD	lLastChannel);				// 末通道号

	// 设置通道使能状态
	BOOL DEVAPI FAR PASCAL	DAM3000M_SetChanEnableSts(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	lChannelEn[],				// 设置AD使能状态 lADEn[0]对应lFirstChannel通道
									LONG	lFirstChannel,				// 首通道号
									LONG	lLastChannel);				// 末通道号

	// 获取通道使能状态
	BOOL DEVAPI FAR PASCAL	DAM3000M_GetChanEnableSts(
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									BYTE	lChannelEn[],				// 设置AD使能状态 lADEn[0]对应lFirstChannel通道
									LONG	lFirstChannel,				// 首通道号
									LONG	lLastChannel);				// 末通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetEvrmTemp(						// 获得环境温度
									HANDLE	hDevice,					// 设备对象句
									LONG	lDeviceID,					// 设备地址
									PLONG	lpEvrmTemp,					// 温度
									LONG	lChannel = 0);				// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetEvrmHum(						// 获得环境湿度
									HANDLE	hDevice,					// 设备对象句
									LONG	lDeviceID,					// 设备地址
									PLONG	lpEvrmHum,					// 湿度		
									LONG	lChannel = 0);				// 通道号


	//##################################### 看门狗 ################################
	BOOL DEVAPI FAR PASCAL  DAM3000M_HostIsOK(HANDLE hDevice);			// 下位机无返回信息

	BOOL DEVAPI FAR PASCAL  DAM3000M_EnableWatchdog(					// 打开主看门狗(先设置超时间隔，再使能看门狗)
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID);					// 模块地址

	BOOL DEVAPI FAR PASCAL  DAM3000M_CloseWatchdog(						// 禁止看门狗工作
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID);					// 模块地址

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetWatchdogStatus(					// 读取主看门狗的状态(S = 1, Host is down; S = 0 OK)
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lpWatchdogStatus);			// 看门狗状态

	BOOL DEVAPI FAR PASCAL  DAM3000M_ResetWatchdogStatus(				// Func: 复位主看门狗的状态(S = 0)
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID);					// 模块地址

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetWatchdogTimeoutVal(				// 取得看门狗设置的时间间隔
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									PLONG	lpInterval);				// 时间间隔

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetWatchdogTimeoutVal(				// 设置看门狗设置的时间间隔
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lInterval);					// 时间间隔

	// ##################################### DIGIT LED 设置函数 #################################
	BOOL DEVAPI FAR PASCAL  DAM3000M_GetDLedMode(						// 获得显示模式请求
									HANDLE hDevice,						// 设备对象句柄
									LONG   lDeviceID,					// 模块地址
									PLONG  lpDispMode);					// 显示模式 0x00：温度格式,0x01:欧姆值

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetDLedMode(						// 修改显示模式请求
									HANDLE hDevice,						// 设备对象句柄
									LONG   lDeviceID,					// 模块地址
									LONG   lDispMode);					// 显示模式 0x01：温度格式,0x02:欧姆值

	BOOL DEVAPI FAR PASCAL  DAM3000M_GetDLedDispChannel(				// 获得LED显示通道号
									HANDLE hDevice,						// 设备对象句柄
									LONG   lDeviceID,					// 模块地址
									PLONG  lpChannel);					// 通道号,lpChannel = 0xff:主机控制显示

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetDLedDispChannel(				// 设置LED显示通道号
									HANDLE hDevice,						// 设备对象句柄
									LONG   lDeviceID,					// 模块地址
									LONG   lChannel = 0);				// 通道号,lpChannel = 0xff:主机控制显示

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetDLedValueW(						// 主机控制显示值
									HANDLE hDevice,						// 设备对象句柄
									LONG   lDeviceID,					// 模块地址
									LPCWSTR strWriteBuf,				// 显示的字符串
									LONG   llength);					// 数据长度

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetDLedValueA(						// 主机控制显示值
									HANDLE hDevice,						// 设备对象句柄
									LONG   lDeviceID,					// 模块地址
									LPCSTR strWriteBuf,				// 显示的字符串
									LONG   llength);					// 数据长度

#ifdef UNICODE
#define DAM3000M_SetDLedValue  DAM3000M_SetDLedValueW
#else
#define DAM3000M_SetDLedValue  DAM3000M_SetDLedValueA
#endif // !UNICODE

//####################### 输入输出任意二进制字符 ###########################
	int DEVAPI	FAR	PASCAL	DAM3000M_WriteDeviceChar(					// 直接写设备
									HANDLE	hDevice,					// 设备对象句柄
									char*	strWriteBuf,				// 写的数据
									long	llength,					// 数据长度
									long	timeout = 100);				// 超时范围(mS)
	
	int	DEVAPI	FAR	PASCAL	DAM3000M_ReadDeviceChar(					// 直接读设备
									HANDLE	hDevice,					// 设备对象句柄
									char*	strReadBuf,					// 读取的数据
									long	llength,					// 数据长度
									long	timeout = 100);				// 超时范围(mS)

	int DEVAPI FAR PASCAL DAM3000M_ReadDeviceUnsignedChar(				// 直接读设备 无符号
									HANDLE	hDevice,					// 设备对象句柄
									unsigned char*	strReadBuf,			// 读取的数据
									long	llength,					// 数据长度
									long	timeout = 100);				// 超时范围(mS)
											   
//###########################　模块信息确认函数  #################################
	BOOL DEVAPI	FAR	PASCAL	InitCheckInfo(
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									DWORD	dwNum);

	BOOL DEVAPI	FAR	PASCAL	ReadCheckInfo(
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									LONG	lIndex, 
									BYTE&	byEncrypt);

//####################################### 辅助函数 ####################################
	BOOL DEVAPI FAR PASCAL  DAM3000M_AdjustSlopeVal(					// 微调当前补偿斜率
									HANDLE  hDevice,					// 设备对象句柄
									LONG    lDeviceID,   				// 模块地址
									LONG    lAdjustVal,					// 微调值
									LONG    lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_StoreSlopeVal(						// 设置当前值为输出补偿斜率
									HANDLE  hDevice,					// 设备对象句柄
									LONG    lDeviceID,   				// 模块地址
									LONG    lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetFaultSlopeVal(					// 设定补偿斜率为默认值
									HANDLE  hDevice,					// 设备对象句柄
									LONG    lDeviceID,   				// 模块地址
									LONG    lChannel);					// 通道号	0xFF为所有通道恢复

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetZeroRepair(						// 设置零点偏移补偿
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 模块地址
									LONG	lZeroRepair,				// 零点值
									LONG	lChannel);					// 通道号

	BOOL DEVAPI FAR PASCAL  DAM3000M_SetDevTestMode(					// 设置模块进入测试模式
									HANDLE  hDevice,					// 设备对象句柄
									LONG    lDeviceID);					// 模块地址

	BOOL DEVAPI FAR PASCAL  DAM3000M_ResetModule(						// 模块软复位
									HANDLE  hDevice,					// 设备对象句柄
									LONG    lDeviceID); 				// 模块地址

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetEnvironmentTemp(				// 取得环境温度(为取热电偶值作准备)
									HANDLE	hDevice,
									LONG	lDeviceID,
									PFLOAT	lpETemprt);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetAdjustTemp(						// 取得环境温度(为取热电偶值作准备)
									HANDLE	hDevice,
									LONG	lDeviceID,
									BYTE	lETemprt);

	//####################################### 测温操作函数 ####################################

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadMeasuringValue(			// 读取测量值 
									HANDLE	hDevice,				// 设备对象句柄	
									LONG	lDeviceID,				// 模块地址
									WORD	lpADBuffer[]);			// 接收数据的用户缓冲区128

	BOOL DEVAPI FAR PASCAL DAM3000M_ReadSensorTemp(					// 读取测量温度值(自定义地址和读取长度)
									HANDLE hDevice,					// 设备对象句柄	
									LONG   lDeviceID,
									LONG   lAddr,					// 温度寄存器地址
									LONG   lCount,					// 温度传感器个数
									WORD   lADBuffer[]);			// 接受数据的用户缓冲区

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_TempResetModule(				// 复位测温模块 
									HANDLE	hDevice,				// 设备对象句柄	
									LONG	lDeviceID);				// 模块地址

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetSensorSerialNumber(			// 修改传感器编号
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 设备地址
									BYTE	bChannel,				// 通道号
									BYTE	bSequenceNumber,		// 通道内顺序号
									BYTE	bNewNumber,				// 新编号
									BYTE	bOldNumber,				// 旧编码
									BOOL	bAuto);					// 是否自动编号  FALSE手动编号 TURE自动编号(通道号 通道内顺序号 新编号 参数不起作用)

	BOOL DEVAPI FAR PASCAL	DAM3000M_GetSensorPara(						// 读取传感器参数
									HANDLE	hDevice,					// 设备对象句柄
									LONG	lDeviceID,					// 设备地址
									DAM3000M_SENSOR_PARA pInfo[128]);	// 传感器参数

	BOOL DEVAPI FAR PASCAL DAM3000M_GetSingleSensorPara(				// 读取单个传感器参数
									HANDLE hDevice,													// 设备对象句柄
									LONG lDeviceID,													// 设备地址
									LONG lSensorNumber,											// 传感器编号
									DAM3000M_SENSOR_PARA* pSingleInfo);		// 传感器参数

	BOOL DEVAPI FAR PASCAL DAM3000M_LoadSensorConfigure(		// 导入传感器配置参数到板卡
									HANDLE hDevice,												// 设备对象句柄
									LONG lDeviceID,													// 设备地址
									LONG lSensorNumber,											// 传感器编号
									LONG lChannelNumber,										// 所在通道号
									LONG lSequenceNumber,										// 通道内顺序号
									BYTE bSensorID[8]);											// 传感器ID号


//####################################### Modus 基本功能操作函数 ####################################

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadCoils(							// 读继电器状态
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									int		len, 
									BYTE	bCoilsFlag[]);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadDiscretes(						// 读开关量输入
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									int		len, 
									BYTE	bDIState[]);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadMultiRegs(						// 读保持寄存器
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									int		len, 
									BYTE	buf[]);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadInputRegs(						// 读输入寄存器
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									int		len, 
									BYTE	buf[]);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_WriteCoil(							// 设置单个继电器
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									BYTE	status);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_WriteSingleReg(					// 设置单个保持寄存器
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									USHORT val);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ForceMultiCoils(					// 设置多个继电器
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									int		len, 
									BYTE	bDOState[]);

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_WriteMultiRegs(					// 设置多个保持寄存器
									HANDLE	hDevice, 
									LONG	lDeviceID, 
									int		addr, 
									int		len, 
									BYTE	buf[]);





	//####################################### 数码管显示 ####################################
	BOOL DEVAPI	FAR	PASCAL	DAM3000M_DisplayData(					// 单显部分 显示数据
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									WORD	wData);					// 数据

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_DisplaySpecialSymbols(			// 单显部分 特殊符号
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									WORD	wSymbols);				// 符号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadData(						// 单显部分 读数据
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									PWORD	pwData);				// 数据

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadSpecialSymbols(			// 单显部分 读特殊符号
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									PWORD	pwSymbols);				// 符号

	BOOL DEVAPI FAR PASCAL  DAM3000M_DisplayDataSymbols(			// 混显部分 显示数据及特殊符号
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									WORD	wData,					// 数据
									WORD	wSymbols);				// 符号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_ReadDataSymbols(				// 混显部分 读数据及特殊符号
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									PWORD	pwData,					// 数据
									PWORD	pwSymbols);				// 符号

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_SetDecimalPoint(				// 设置小数点位置
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									LONG	lDecimalPoint);			// 小数点位置

	BOOL DEVAPI	FAR	PASCAL	DAM3000M_GetDecimalPoint(				// 读取小数点位置
									HANDLE	hDevice,				// 设备对象句柄
									LONG	lDeviceID,				// 模块地址
									PLONG	plDecimalPoint);		// 小数点位置
#ifdef __cplusplus
}
#endif

//#######################################################################
// 自动包含驱动函数导入库
#ifndef DEFINING
#ifndef _WIN64
#pragma comment(lib, "DAM3000M_32.lib")
#pragma message("======== Welcome to use our art company's products!")
#pragma message("======== Automatically linking with DAM3000M_32.dll...")
#pragma message("======== Successfully linked with DAM3000M_32.dll")
#else
#pragma comment(lib, "DAM3000M_64.lib")
#pragma message("======== Welcome to use our art company's products!")
#pragma message("======== Automatically linking with DAM3000M_64.dll...")
#pragma message("======== Successfully linked with DAM3000M_64.dll")
#endif // _WIN64
#endif // DEFINING

#endif // ifndef _ART_DAM3000M_SERIAL_




