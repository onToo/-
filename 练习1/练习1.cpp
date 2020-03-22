#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cstdlib>//	srand()
#include <string>
#include <ctime>
#include <vector>
#include <array>


using namespace std;

 
int main(void) {
	string father_name, daughter_name;                  //取名
	int d_brith_month, d_brith_day;                     //生日和日期
	                                   
	array<int,5> value_array_baseinfo;               //动态分配内存的数组
	int value_daughtar_gold = 500;                          //初始资金
	string d_constell;                                   //星座
	array<string, 5>value_array_baseinfo_name = { "体力","智力","魅力","道德","气质" };//5个基本属性
	//星座二维数组
	string constellations[12][2] = {
		{"摩羯座","水瓶座"},
		{"水瓶座","双鱼座"},
		{"双鱼座","白羊座"},
		{"白羊座","金牛座"},
		{"金牛座","双子座"},
		{"双子座","巨蟹座"},
		{"巨蟹座","狮子座"},
		{"狮子座","处女座"},
		{"处女座","天平座"},
		{"天平座","天蝎座"},
		{"天蝎座","射手座"},
		{"射手座","摩羯座"},
	};
	int choice, temp1, temp2, temp3;

	cout << "父亲的姓名:";
	cin >> father_name;
	cout << "女儿的姓名:";
	cin >> daughter_name;
	 
		cout << "女儿的生日(MM DD):";
		cin >> d_brith_month >> d_brith_day;
	
	int constell_date[] = { 20,19,21,20,21,22,23,23,23,24,23,22 };          //各月份的星座结束日期
	d_constell = constellations[d_brith_month -1][d_brith_day / constell_date[d_brith_month -1]];

	cout << "女儿的信息:";
	cout << "姓名:" << daughter_name << endl;
	cout << "生日:1659-" << d_brith_month << "-" << d_brith_day << endl;
	cout << "星座:" << d_constell << endl;

	if (d_constell == "白羊座") {
		value_array_baseinfo[0] = 80; value_array_baseinfo[1] = 15; value_array_baseinfo[2] = 15; value_array_baseinfo[3] = 11; value_array_baseinfo[4] = 21;
	}else if (d_constell == "金牛座") {
		value_array_baseinfo[0] = 46; value_array_baseinfo[1] = 30; value_array_baseinfo[2] = 28;	value_array_baseinfo[3] = 35; value_array_baseinfo[4] = 20;
	}else if (d_constell == "双子座") {
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 35; value_array_baseinfo[2] = 23;	value_array_baseinfo[3] = 26; value_array_baseinfo[4] = 8;
	}else if (d_constell == "巨蟹座") {
		value_array_baseinfo[0] = 40; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 33;	value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 17;
	}else if (d_constell == "狮子座") {
		value_array_baseinfo[0] = 85; value_array_baseinfo[1] = 9; value_array_baseinfo[2] = 11;	value_array_baseinfo[3] = 28; value_array_baseinfo[4] = 20;
	}else if (d_constell == "处女座") {
		value_array_baseinfo[0] = 35; value_array_baseinfo[1] = 28; value_array_baseinfo[2] = 36;	value_array_baseinfo[3] = 19; value_array_baseinfo[4] = 18;
	}else if (d_constell == "天平座") {
		value_array_baseinfo[0] = 42; value_array_baseinfo[1] = 33; value_array_baseinfo[2] = 25;	value_array_baseinfo[3] = 24; value_array_baseinfo[4] = 32;
	}else if (d_constell == "天蝎座") {
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 25; value_array_baseinfo[2] = 40;	value_array_baseinfo[3] = 20; value_array_baseinfo[4] = 18;
	}else if (d_constell == "射手座") {
		value_array_baseinfo[0] = 57; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 15;	value_array_baseinfo[3] = 26; value_array_baseinfo[4] = 19;
	}else if (d_constell == "摩羯座") {
		value_array_baseinfo[0] = 56; value_array_baseinfo[1] = 21; value_array_baseinfo[2] = 16;	value_array_baseinfo[3] = 22; value_array_baseinfo[4] = 25;
	}else if (d_constell == "水瓶座") {
		value_array_baseinfo[0] = 43; value_array_baseinfo[1] = 43; value_array_baseinfo[2] = 20;	value_array_baseinfo[3] = 27; value_array_baseinfo[4] = 23;
	}else if (d_constell == "双鱼座") {
		value_array_baseinfo[0] = 41; value_array_baseinfo[1] = 20; value_array_baseinfo[2] = 29;	value_array_baseinfo[3] = 25; value_array_baseinfo[4] = 23;
	}
	for (int i = 0; i < 5; i++) {
		cout << value_array_baseinfo[i] << "\t";
	}
	cout << endl;
	for (int year = 1659; year <= 1659 + 7; year++) {
		for (int month = (year == 1659) ? 6 : 1; month <= 12; month++) {
			if (month == d_brith_month) {//判断本月是否是女儿的生日
				cout << "本月是" << daughter_name << "的生日,要不要送礼物呢?" << endl;
				//根据用户的输入进行判断
			}
			//显示主菜单
			cout << "\n1.查看状态\n2.安排行程\n3.亲子谈话\n4.存档\n5.读档" << endl;
			cin >> choice;
			switch (choice) {
			case 1://查看状态
				cout << "女儿的信息:" << endl;
				cout << "姓名:" << daughter_name << endl;
				cout << "生日:1659-" << d_brith_month << "-" << d_brith_day << endl;
				cout << "星座:" << d_constell << endl;
				cout << "金钱:" << value_daughtar_gold << endl;
				//打印核心属性
				cout << left;
				for (int i = 0; i < 5; i++) {
					cout << value_array_baseinfo_name[i] << ":" <<setw(6)<< value_array_baseinfo[i];
					//计算实心方框的数量
					int solidCount = value_array_baseinfo[i] / 10;
					for (int j = 0; j < 10; j++) {
						if (j < solidCount) {
							cout << "■";
						}else {
							cout << "□";
						}
					}
					cout << endl;
				}
				break;
			case 2: {//安排行程:一个月安排三个行程
				string month_parts[] = { "上旬", "中旬", "下旬" };
				for (int i = 0; i < 3; i++) {
					cout << "-- " << month << "月 --" << month_parts[i] << endl;
					cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << endl;
					cout << "请选择:";
					cin >> choice;
					//这里注意,需要判断没钱的情况:强制打工
					srand(time(NULL));
					if (choice == 1) {//+体力 +魅力 -金钱
						value_array_baseinfo[0] += temp1 = rand() % 11;
						value_array_baseinfo[2] += temp2 = rand() % 11;
						value_daughtar_gold -= temp3 = rand() % 51;
						cout << "学习武艺成功!!!" << endl;
						cout << "体力+" << temp1 << ",魅力+" << temp2 << ",金钱-" << temp3 << endl;
					}else if (choice == 5) {
						value_daughtar_gold += temp3 = rand() % 101;
						cout << "通过努力打工,赚到了" << temp3 << "元" << endl;
					}
				}
				break;
			}
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				break;
			}
		}
	}
	//根据游戏参数,判断游戏结果
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += value_array_baseinfo[i];
	}
	if (sum >= 2000) {
		cout << "最优游戏结果: 登基为女王!" << endl;
	}else if (sum >= 1800 && sum < 2000) {
		cout << "最佳游戏结果: 成为王妃!" << endl;
	}else if (sum >= 1600 && sum < 1800) {
		cout << "最好游戏结果: 成为女将军!" << endl;
	}else if (sum >= 1200 && sum < 1600) {
		int maxValue = value_array_baseinfo[0];
		int maxIndex = 0;
		for (int i = 1; i < 5; i++) {
			if (maxValue < value_array_baseinfo[i]) {
				maxValue = value_array_baseinfo[i];
				maxIndex = i;
			}
		}
		if ("道德" == value_array_baseinfo_name[maxIndex]&&value_array_baseinfo[2]> value_array_baseinfo[4]) {
			cout << "经过长期的训练," << daughter_name << "成长成为一名光荣的祭祀!" << endl;
		}
	}


	 



	system("pause");
	return 0;
}