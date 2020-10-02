#include"GymHalls.h"
GymHalls::GymHalls()
{
	for (int i = 0; i < 10; i++)
	{
		GymId[i] = 0;
		GymName[i] = " ";
	}
}
GymHalls::GymHalls(int id, string name)
{
	for (int i = 0; i < 10; i++)
	{
		GymId[i] = id;
		GymName[i] = name;
		break;
	}
};
 int* GymHalls::GetGymId()
{
	int id[10];
	for (int i = 0; i < 10; i++)
	{
		id[i] = this->GymId[i];
	}
	return id;
}
string* GymHalls::GetGymName()
{
	string Name[10];
	for (int i = 0; i < 10; i++)
	{
		Name[i] = GymName[i];
	}
	return Name;
}
GymHalls& GymHalls::SetHallId(int Id)
{
	for (int i = 0; i < 10; i++)
	{
		if (GymId[i] != 0)
		{
			GymId[i] = Id;
			break;
		}
	}
	return *this;
}
GymHalls& GymHalls::SetName(string Name)
{
	for (int i = 0; i < 10; i++)
	{
		if (GymId[i] != 0)
		{
			GymName[i] = Name;
			break;
		}
	}
	return *this;
}
bool GymHalls::AddHall(int Id, string Name)
{
	bool valid = false;
	bool valid1 = false;
	for (int i = 0; i < 10; i++)
	{
		if (GymId[i] == 0)
		{
			GymId[i] = Id;
			this->GymName[i] = Name;
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
		cout << "\nThe Equipment has been added Successfully ";
	}
	else
	{
		return valid1;
		cout << "\nThe Equipments has not been added Successfully ";
	}
}
bool GymHalls::DeleteHall(int Id)
{
	bool valid = false;
	bool valid1 = false;
	for (int i = 0; i < 10; i++)
	{
		if (GymId[i] == Id)
		{
			GymId[i] = 0;
			this->GymName[i] = " ";
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
		cout << "\nThe Equipment has been deleted successfully ";
	}
	else
	{
		return valid1;
		cout << "\nThe Equipment has not been deleted successfully ";
	}
}
bool GymHalls::EditHall(int Id, int I, string name)
{
	bool valid1 = false;
	bool valid = false;
	for (int i = 0; i < 10; i++)
	{
		if (GymId[i] == Id)
		{
			GymId[i] = I;
			GymName[i] = name;
			valid1 = true;
			valid = true;
		}
		if (valid1)
		{
			break;
		}
	}
	if (valid1)
	{
		return valid;
		cout << "\nThe Equipment has been deleted successfully ";
	}
	else
	{
		return valid;
		cout << "\nThe Equipment has not been deleted successfully ";
	}
}
void GymHalls::SaveHall()
{
	ofstream file;
	file.open("GymHalls.txt", ios::out);
	if (file.fail())
	{
		cout << "\nUnable to open File";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (GymId[i] == -1)
			{

			}
			else if (GymId[i] != 0)
			{
				file << GymId[i] << "\t" << GymName[i] << "\n";
			}
		}
		file.close();
	}
}
//Load Data From the files
void GymHalls::LoadHalls()
{
	ifstream file;
	file.open("GymHalls.txt", ios::in);
	if (file.fail())
	{
		cout << "\nUnable to open File";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{

			file >> this->GymId[i];
			file.ignore();
			getline(file, this->GymName[i], '\n');
		}
	}
	file.close();
}

bool GymHalls::CheckHalls(int Id)
{
	ifstream file;
	int nId;
	bool valid = false;
	file.open("GymHalls.txt", ios::in);
	if (file.fail())
	{
		cout << "\nUnable to open File";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{

			file >> this->GymId[i];
			nId = this->GymId[i];
			file.ignore();
			getline(file, this->GymName[i], '\n');
			if (Id == nId)
			{
				valid = true;
				break;
			}
		}
	}
	file.close();
	return valid;
}
