// TemplateMethod.cpp : 定义控制台应用程序的入口点。
//

#include "StudentOne.h"

int main(int argc,char* argv[])
{
	TestPaper* one = new StudentOne;
	one->QuestionOne();
	one->QuestionTwo();
	one->QuestionThree();

	cin.ignore();

	return 0;
}

