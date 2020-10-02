#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
using namespace std;
class GymHalls
{
	int GymId[10];
	string GymName[10];
public:
	GymHalls();
	GymHalls(int id, string name);
	int* GetGymId();
	string* GetGymName();
	GymHalls& SetHallId(int Id);
	GymHalls& SetName(string Name);
	bool AddHall(int Id, string Name);
	bool DeleteHall(int Id);
	bool EditHall(int Id, int I, string name);
	void SaveHall();
	void LoadHalls();
	bool CheckHalls(int Id);
};