#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include<fstream>
#include<sstream>
using namespace std;
class Trainer
{               /////////////////    Data Members           ///////////////////
    int ID[10];  
    string Name[10];
    int HallId[10];
public:
    Trainer();
    Trainer(int id,string Name);
    ~Trainer();
    Trainer& setID(int id);
    Trainer& setName(string name);
    Trainer& setHallId(int id);
    int getID();
    string getName();
    bool isExistTrainer(int Id);
    bool AddTrainer(int id, string n,int Hid);
    bool DeleteTrainer(int Id);
    bool EditTrainer(int Id,int nId, string Name,int Hid);
    void DispData();
    void SaveData();
    bool LoadData(int nId);
    void LoadTrainer();
};