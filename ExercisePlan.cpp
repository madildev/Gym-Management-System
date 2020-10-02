#include"ExercisePlan.h"

    	// Null Constructor

	exercisePlans::exercisePlans()
	{
		for (int i = 0; i < 10; i++)
		{
			planId[i] = 0;
			duration[i] = 0;
		}
	}
	// Parameterized Constructor
	exercisePlans::exercisePlans(int Id,int tid,int eid, int time)
	{
		for (int i = 0; i < 10; i++)
		{
			planId[i] = Id;
			Tid[i] = tid;
			Eid[i] = eid;
			duration[i] = time;
			break;
		}
	}
	// Setter Functions

	exercisePlans& exercisePlans::SetPlanId(int id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] != 0)
			{
				planId[i] = id;
				break;
			}
		}
		return *this;
	}

	exercisePlans& exercisePlans::Setduration(int timing)
	{
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] != 0)
			{
				duration[i] = timing;
				break;
			}
		}
		return *this;
	}
	exercisePlans& exercisePlans::SetTid(int id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] != 0)
			{
				Tid[i] = id;
				break;
			}
		}
		return *this;
	}
	exercisePlans& exercisePlans::SetEid(int id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] != 0)
			{
				Eid[i] = id;
				break;
			}
		}
		return *this;
	}
	bool exercisePlans::isExistPlan(int Id)
	{
		bool valid = false;
		bool valid1 = false;
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] == Id)
			{
				planId[i] = 0;
				duration[i] = 0;
				Tid[i] = 0;
				Eid[i] = 0;
				valid = true;
				valid1 = true;
			}
			if (valid)
			{
				break;
			}
		}
		if (valid)
		{
			return valid1;
		}
		else
		{
			return valid1;
		}
	}
	// Getter Functions

	int exercisePlans::GetPlanId()
	{
		for (int i = 0; i < 10; i++)
		{
			return planId[i];
			break;
		}
	}

	int exercisePlans::GetDuration()
	{
		for (int i = 0; i < 10; i++)
		{
			return duration[i];
			break;
		}
	}

	// Display Information


	// ADD Exercise Plans 

	bool exercisePlans::AddPlans(int Id, int tid, int eid, int time)
	{
		bool valid = false;
		bool valid1 = false;
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] == 0)
			{
				planId[i] = Id;
				Tid[i] = tid;
				Eid[i] = eid;
				duration[i] = time;
				valid = true;
				valid1 = true;
			}
			if (valid)
			{
				break;
			}
		}
		if (valid)
		{
			return valid1;
			cout << "The Exercise Plan Has been Added Successfully." << endl;

		}
		else
		{
			return valid1;
			cout << "The Exercise Plan Has Not Been Added Successfully." << endl;
		}
	}

	// Delete Exercise Plans 

	bool exercisePlans::DeletePlans(int id)
	{
		bool valid = false;
		bool valid1 = false;
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] == id)
			{
				planId[i] = 0;
				Tid[i] = 0;
				Eid[i] = 0;
				duration[i] = 0;
				valid = true;
				valid1 = true;
			}

		}
		if (valid)
		{
			return valid1;
			cout << "The Exercise Plan Has Been Deleted Successfully." << endl;

		}
		else
		{
			return valid1;
			cout << "The Exercise Plan Has Not Been Deleted Successfully" << endl;
		}

	}

	// Editing Exercise Plans

	bool exercisePlans::EditPlans(int id,int pID,int nTid,int nEid,int dTime)
	{
		bool valid = false;
		bool valid1 = false;
		for (int i = 0; i < 10; i++)
		{
			if (planId[i] == id)
			{
				planId[i] = pID;
				Tid[i] = nTid;
				Eid[i] = nEid;
				duration[i] = dTime;
				valid = true;
				valid1 = true;
			}
		}
		if (valid)
		{
			return valid1;
			cout << "This Exercise Plan Has Been Edited Successfully." << endl;
		}
		else
		{
			return valid1;
			cout << "This Exercise Plan Has Not Been Edited Successfully." << endl;
		}

	}
	// Save data in files 
	void exercisePlans::SavePlans()
	{
		ofstream file;
		file.open("ExercisePlans.txt",ios::out);
		if (file.fail())
		{
			cout << "\nError! File Not Founded." << endl;
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if (planId[i] == -1)
				{

				}
				if (planId[i] != 0)
				{
					file << planId[i] << "\t" << Tid[i] << "\t" << Eid[i] << "\t" << duration[i] << endl;

				}

			}
			file.close();
		}

	}
	// Load Data from files
	void exercisePlans::LoadData()
	{
		ifstream file;
		file.open("ExercisePlans.txt", ios::in);
		if (file.fail())
		{
			cout << "\nError! File Not Founded." << endl;
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				file >> planId[i] >> Tid[i] >> Eid[i] >> duration[i];

			}
			file.close();
		}
	}
	bool exercisePlans::LoadPlans(int nId)
	{
		bool valid = false;
		ifstream file;
		int Id;
		string Name;
		file.open("ExercisePlans.txt", ios::in);
		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				file >> planId[i];
				Id = planId[i];
				if (nId == Id)
				{
					valid = true;
					break;
				}
			}
		}
		file.close();
		return valid;
	}
