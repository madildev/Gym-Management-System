#pragma once
#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<string>
#include "TrainerObject.h"
#include "ExercisePlanObject.h"
using namespace std;
class Customer
{	
public:
	int ID[10];
	string Name[10];
	string Address[10];
	string Email[10];
	string Phone[10];
	int subscriptionID[10];
	string date[10];
	int Tid[10];
	int PlanId[10];
	int Hallid[10];
	Customer();
	Customer(int id, string Name, string Address, string Email, string Phone);
	~Customer();
	Customer& setID(int id);
	Customer& setName(string name);
	Customer& setAddress(string address);
	Customer& setPhone(string phone);
	Customer& setEmail(string email);
	Customer& SetSubId(int Id);
	Customer& SetDate(string Date);
	Customer& SetTid(int Id);
	Customer& SetPId(int Id);
	Customer& setHallId(int id);
	int getID();
	string getName();
	string getAddress();
	string getPhone();
	string getEmail();
	int getSubsId();
	string getDate();
	int getTrainerId();
	int getPlanId();
	bool addCustomer(int id, string name, string address, string phone, string email, int Sid, string Date, int Tid, int PlanId,int Hid);
	bool DeleteCustomer(int Id);
	bool EditCustomer(int Id, int I, string name, string address, string phone, string email, int Sid, string Date, int TrId, int Pid,int Hid);
	void DispData();
	void SaveData();
	void LoadData();
	void LoadSubscription();
	void SaveSubscription();
	bool CheckTrainer(int Id);
	bool CheckCustomer(int Id);
	bool CheckSubscription(int Id);
};

