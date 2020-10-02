#include"Equipments.h"
//constructor
Equipments::Equipments()
{
	for (int i = 0; i < 10; i++)
	{
		EquipID[i] = 0;
		Name[i] = " ";
	}
}
Equipments::Equipments(int id, string name)
{
	for (int i = 0; i < 10; i++)
	{
		EquipID[i] = id;
		Name[i] = name;
	}
}
//getter and setter methods
int Equipments::getEquipID()
{
	for (int i = 0; i < 10; i++)
	{
		return EquipID[i];
	}
}
string Equipments::getName()
{
	for (int i = 0; i < 10; i++)
	{
		return Name[i];
	}
}
Equipments& Equipments::setEquipID(int id)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->EquipID[i] != 0)
		{
			EquipID[i] = id;
			break;
		}
	}
	return *this;
}
Equipments& Equipments::setName(string name)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->EquipID[i] != 0)
		{
			Name[i] = name;
			break;
		}
	}
	return *this;
}
Equipments& Equipments::setHallid(int id)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->EquipID[i] != 0)
		{
			this->HallId[i] = id;
			break;
		}
	}
	return *this;
}
// Output Functions
void Equipments::printDetail()
{
	cout << "\nEquipment ID " << "\t   " << "Equipment Name " << endl;
	for (int i = 0; i < 10; i++)
	{
		if (EquipID[i] != 0)
			cout << "\t" << EquipID[i] << "\t  " << Name[i] << endl;
	}
}
//Functions for adding/Deleting and Editing the Data
bool Equipments::AddEquipment(int Id, string Name,int HId)
{

	bool valid = false, valid2 = false;
	for (int i = 0; i < 10; i++)
	{
		if (EquipID[i] == 0)
		{
			EquipID[i] = Id;
			this->Name[i] = Name;
			this->HallId[i] = HId;
			valid = true;
		}
		if (valid)
		{
			break;
		}
	}
	if (valid)
	{
		valid2 = true;
		return valid2;
	}
	else
	{
		return valid2;
	}
}
bool Equipments::DeleteEquipment(int Id)
{
	bool valid = false;
	bool valid1 = false;
	for (int i = 0; i < 10; i++)
	{
		if (EquipID[i] == Id)
		{
			EquipID[i] = 0;
			this->Name[i] = " ";
			this->HallId[i] = 0;
			valid = true;
		}
		if (valid)
		{
			break;
		}
	}
	if (valid)
	{
		valid1 = true;
		return valid1;
		cout << "\nThe Equipment has been deleted successfully ";
	}
	else
	{
		return valid1;
		cout << "\nThe Equipment has not been deleted successfully ";
	}
}
bool Equipments::EditEquipment(int Id,int nId,string nName,int Hid)
{
	bool valid1 = false;
	bool valid2 = false;
	for (int i = 0; i < 10; i++)
	{
		if (EquipID[i] == Id)
		{
			EquipID[i] = nId;
			Name[i] = nName;
			this->HallId[i] = Hid;
			valid1 = true;
		}
		if (valid1)
		{
			break;
		}
	}
	if (valid1)
	{
		valid2 = true;
		return valid2;
		cout << "\nThe Equipment has been Updated successfully ";
	}
	else
	{
		return valid2;
		cout << "\nThe Equipment has not been Updated successfully ";
	}
}
void Equipments::SaveEquipments()
{
	ofstream file;
	file.open("Equipments.txt", ios::out);
	if (file.fail())
	{
		cout << "\nUnable to open File";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if(this->EquipID[i] == -1)
			{

			}
			else if (EquipID[i] != 0)
			{
				file << EquipID[i] << "\t" << Name[i] << "\t" << HallId[i] << "\n";
			}
		}
		file.close();
	}
}
//Load Data From the files
void Equipments::LoadEquipments()
{
	ifstream file;
	file.open("Equipments.txt", ios::in);
	if (file.fail())
	{
		cout << "\nUnable to open File";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			file >> EquipID[i];
			file.ignore();
			getline(file, this->Name[i]);
			file >> this->HallId[i];
		}
	}
}
bool Equipments::LoadData(int nId)
	{
	bool valid = false;
		ifstream file;
		int Id;
		string Name;
	file.open("Equipments.txt",ios::in);
	if(file.fail())
	{
		cout<<"\nUnable to open File";
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			file >> EquipID[i];
			Id = EquipID[i];
			file.ignore();
			getline(file,this->Name[i],'\n');
			Name = this->Name[i];
			file>>HallId[i];
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
bool Equipments::isExistId(int Id)
{
	for (int i = 0; i < 10; i++)
	{
		if (EquipID[i] == Id)
		{
			return true;
			break;
		}
		else
		{
			return false;
		}
	}
}