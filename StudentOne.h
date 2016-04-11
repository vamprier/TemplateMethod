#ifndef STUONE_H
#define STUONE_H

#include "testpaper.h"
class StudentOne : public TestPaper
{
public:
	StudentOne(void);
	~StudentOne(void);
public:
	virtual string AnswerOne();
	virtual string AnswerTwo();
	virtual string AnswerThree();
};

#endif
