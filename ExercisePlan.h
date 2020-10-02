#pragma once
#include <iostream>
#include<string>
#include <fstream>
using namespace std;
class exercisePlans {
	int planId[10];
	int Tid[10];
	int Eid[10];
	int duration[10];
public:
	exercisePlans();
	exercisePlans(int Id,int tid,int eid,int time);
	exercisePlans& SetPlanId(int id);
	exercisePlans& SetTid(int id);
	exercisePlans& SetEid(int Eid);
	exercisePlans& Setduration(int timing);
	int GetPlanId();
	int GetDuration();
	bool isExistPlan(int Id);
	bool AddPlans(int Id, int tid, int eid, int time);
    bool DeletePlans(int id);
	bool EditPlans(int id, int pID, int nTid, int nEid, int dTime);
	void SavePlans();
	bool LoadPlans(int nId);
	void LoadData();
};
