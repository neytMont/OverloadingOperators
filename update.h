#pragma once
#ifndef upDate_h
#define upDate_h

#include <string>
#include <stdio.h>

using namespace std;

class upDate
{
private:
	int month;
	int day;
	int year;
	int* dptr;
	static int count;
public:
	upDate();
	upDate(int M, int D, int Y);
	upDate(const upDate& obj);
	~upDate();
	void setDate(int M, int D, int Y);
	int getMonth();
	int getDay();
	int getYear();
	string getMonthName();
	int julian();
	void GDate(int JD, int& month, int& day, int& year);
	void incrDate(int N);
	void decrDate(int N);
	int daysBetween(upDate D);
	static int GetDateCount();
	upDate operator =(upDate T);
	upDate operator +(int n);
	upDate operator -(int n);
	int operator -(upDate D);
	friend upDate operator +(int x, upDate D);
	friend upDate operator -(int x, upDate D);
	friend ostream& operator <<(ostream& out, upDate D);
	upDate operator ++(int x);
	upDate operator ++();
	upDate operator --(int x);
	upDate operator --();
	bool operator <(upDate T);
	bool operator >(upDate T);
	bool operator ==(upDate T);
};

#endif 
