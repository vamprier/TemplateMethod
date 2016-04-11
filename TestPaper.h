#ifndef TEST_H
#define TEST_H

#include <string>
#include <iostream>

using namespace std;

class TestPaper
{
public:
	TestPaper(void);
	virtual ~TestPaper(void);
public:
	void QuestionOne();
	void QuestionTwo();
	void QuestionThree();
public:
	virtual string AnswerOne();
	virtual string AnswerTwo();
	virtual string AnswerThree();
};

#endif

