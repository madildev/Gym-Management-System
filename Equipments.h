#pragma once
#include<iostream>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Equipments
{
	int EquipID[10];
	string Name[10];
	int HallId[10];
public:
	Equipments();
	Equipments(int id, string name);
	int getEquipID();
	string getName();
	Equipments& setEquipID(int id);
	Equipments& setName(string name);
	Equipments& setHallid(int id);
	void printDetail();
	bool AddEquipment(int Id, string Name,int Hid);
	bool DeleteEquipment(int Id);
	bool EditEquipment(int Id, int nId, string nName,int Hid);
	void SaveEquipments();
	bool  LoadData(int nId);
	void LoadEquipments();
	bool isExistId(int Id);
};