#include"Customer.h"
/// Class started  /////


	//Private Data members


	// ******** public started ********  //


	// ********* Constructor **********  //
	Customer::Customer()
	{
		for (int i = 0; i < 10; i++)
		{
			ID[i] = 0;
			Name[i] = " ";
			Address[i] = " ";
			Email[i] = " ";
			Phone[i] = " ";
			subscriptionID[i] = 0;
			Tid[i] = 0;
			PlanId[i] = 0;
			date[i] = " ";
		}
	}
	Customer::Customer(int id, string Name, string Address, string Email, string Phone)
	{
		for (int i = 0; i < 10; i++)
		{
			ID[i] = id;
			this->Name[i] = Name;
			this->Address[i] = Address;
			this->Email[i] = Email;
			this->Phone[i] = Phone;
			break;
		}

	}
	// ******* Distructor ******* //
	Customer::~Customer() {};

	// ****************   Member Functions  ******************  //

	Customer& Customer::setID(int id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				ID[i] = id;
				break;
			}
		}
		return *this;
	}

	Customer& Customer::setName(string name)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{

				Name[i] = name;
				break;
			}
		}
		return *this;
	}

	Customer& Customer::setAddress(string address)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{

				Address[i] = address;
				break;
			}
		}
		return *this;
	}

	Customer& Customer::setPhone(string phone)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				Phone[i] = phone;
				break;
			}
		}
		return *this;
	}

	Customer& Customer::setEmail(string email)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				Email[i] = email;
				break;
			}
		}
		return *this;
	}
	Customer& Customer::SetSubId(int Id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				this->subscriptionID[i] = Id;
				break;
			}
		}
		return *this;

	}
	Customer& Customer::SetDate(string Date)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				this->date[i] = Date;
				break;
			}
		}
		return *this;
	}

	Customer& Customer::SetTid(int Id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				this->Tid[i] = Id;
				break;
			}
		}
		return *this;

	}
	Customer& Customer::SetPId(int Id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				this->PlanId[i] = Id;
				break;
			}
		}
		return *this;
	}
	Customer& Customer::setHallId(int id)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] != 0)
			{
				this->Hallid[i] = id;
				break;
			}
		}
		return *this;
	}
	//  *******************   Getter Functions  **********************  //

	int Customer::getID()
	{
		for (int i = 0; i < 10; i++)
		{
			return ID[i];
		}
	}

	string Customer::getName()
	{
		for (int i = 0; i < 10; i++)
		{
			return this->Name[i];
		}
	}

	string Customer::getAddress()
	{
		for (int i = 0; i < 10; i++)
		{
			return Address[i];
		}
	}

	string Customer::getPhone()
	{
		for (int i = 0; i < 10; i++)
		{
			return Phone[i];
		}
	}

	string Customer::getEmail()
	{
		for (int i = 0; i < 10; i++)
		{
			return Email[i];
		}

	}
	int Customer::getSubsId()
	{
		for (int i = 0; i < 10; i++)
		{
			return subscriptionID[i];
		}
	}
	string Customer::getDate()
	{
		for (int i = 0; i < 10; i++)
		{
			return date[i];
		}
	}
	int Customer::getTrainerId()
	{
		for (int i = 0; i < 10; i++)
		{
			return this->Tid[i];
		}
	}
	int Customer::getPlanId()
	{
		for (int i = 0; i < 10; i++)
		{
			return PlanId[i];
		}
	}

	//  ***********  Member Functions  ************  //


//  *******************   Add Customer Function   *******************   //
	bool Customer::addCustomer(int id, string name, string address, string phone, string email, int Sid, string Date, int Tid, int PlanId,int Hid)
	{
		bool valid = false;
		bool valid1 = false;
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] == 0)
			{
				this->ID[i] = id;
				this->Name[i] = name;
				this->Address[i] = address;
				this->Phone[i] = phone;
				this->Email[i] = email;
				this->subscriptionID[i] = Sid;
				this->date[i] = Date;
				this->Tid[i] = Tid;
				this->PlanId[i] = PlanId;
				this->Hallid[i] = Hid;
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
			cout << "\nThe Customer has been added successfully ";
		}
		else
		{
			return valid1;
			cout << "\nThe Customer has not been added successfully ";
		}

	}

	//   ******************   Delete Customer Function   ********************   //

	bool Customer::DeleteCustomer(int Id)
	{
		bool valid = false,valid1=false;
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] == Id)
			{
				ID[i] = 0;
				this->Name[i] = " ";
				this->Address[i] = " ";
				this->Phone[i] = "";
				this->Email[i] = " ";
				this->date[i] = " ";
				Tid[i] = 0;
				this->subscriptionID[i] = 0;
				PlanId[i] = 0;
				this->Hallid[i] = 0;
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

	//  *******************   Edit Customer Function   ********************   //

	bool Customer::EditCustomer(int Id,int I,string name,string address,string phone,string email,int Sid,string Date,int TrId,int Pid,int Hid)
	{
		bool valid1 = false;
		bool valid = false;
		for (int i = 0; i < 10; i++)
		{
			if (ID[i] == Id)
			{
				this->ID[i] = I;
				this->Name[i] = name;
				this->Address[i] = address;
				this->Phone[i] = phone;
				this->Email[i] = email;
				this->subscriptionID[i] = Sid;
				this->date[i] = Date;
				this->Tid[i] = TrId;
				this->PlanId[i] = Pid;
				this->Hallid[i] = Hid;
				valid = true;
				valid1 = true;
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

	//  *******************   Display Customer's Data Function  ******************   //

	void Customer::DispData()
	{
		cout << "\nID\t" << "Name\t\t\t\t" << "Address\t\t\t\t\t" << "Phone No\t\t" << "Email" << "Subscription Id    " << "Subscription Date ";
		for (int i = 0; i < 10; i++)
		{
			if (this->ID[i] != 0)
			{
				cout << ID[i] << "\t" << Name[i] << "\t" << Address[i] << "\t" << Phone[i] << "\t" << Email[i];
			}
		}
	}

	//  *******************   Saving data in files   ********************   //

	void Customer::SaveData()
	{
		ofstream file;
		file.open("Customer.txt", ios::app);
		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if (ID[i] == -1)
				{

				}
				else if (ID[i] != 0)
				{

						file << ID[i] << ',' << Name[i] << ',' << Address[i] << ',' << Phone[i] << ',' << Email[i] << "\n";
				}
				
			}
		}
		file.close();
	}

	//   ******************    Loading data from file   ******************    //

	void Customer::LoadData()
	{
		ifstream file;
		file.open("Customer.txt", ios::in);
		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				file >> ID[i];
				file.ignore();
				getline(file, Name[i], ',');
				getline(file, Address[i], ',');
				getline(file, Phone[i], ',');
				getline(file, Email[i]);
			}
		}
		file.close();
	}
	void Customer::SaveSubscription()
	{
		ofstream file;
		file.open("Subscription.txt", ios::app);

		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if (ID[i] == -1)
				{

				}
				else if (this->ID[i] != 0)
				{
					file << this->subscriptionID[i] << '\t' << this->date[i] << '\t\t' << this->ID[i] << '\t' << this->Tid[i] << '\t' << this->PlanId[i] << '\t' << this->Hallid[i]<<"\n";
				}
			}
		}
		file.close();
	}
	void Customer::LoadSubscription()
	{
		ifstream file;
		file.open("Subscription.txt", ios::in);
		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				    file >> this->subscriptionID[i];
					file.ignore();
				    getline(file,this->date[i],'\t');
				    file >> this->ID[i];
					file >> this->Tid[i];
					file >> this->PlanId[i];
					file >> this->Hallid[i];
			}
		}
		file.close();
	}

	bool Customer::CheckTrainer(int Id)
	{
		ifstream file;
		bool valid = false;
		int Sid;
		string date;
		int CustomerId;
		int TrainerId;
		int PlanId;
		file.open("Subscription.txt", ios::in);
		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{

					file >> this->subscriptionID[i];
					Sid = this->subscriptionID[i];
					getline(file, this->date[i]);
					date = this->date[i];
					file >> this->ID[i];
					CustomerId = this->ID[i];
					file >> this->Tid[i];
					TrainerId = this->Tid[i];
					file >> this->PlanId[i];
					PlanId = this->PlanId[i];
					if (Id == TrainerId)
					{
						valid = true;
						break;
					}
 			}
		}
		file.close();
		return valid;
	}
	bool Customer::CheckCustomer(int Id)
	{
		ifstream file;
		bool valid = false;
		int CustomerId;
		file.open("Customer.txt", ios::in);
		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				file >> ID[i];
				CustomerId = ID[i];
				getline(file, Name[i], '\t');
				getline(file, Address[i], '\t');
				getline(file, Phone[i], '\t');
				getline(file, Email[i], '\n');
				if (Id == CustomerId)
				{
					valid = true;
					break;
				}
			}
		}
		file.close();
		return valid;
	}
	bool Customer::CheckSubscription(int Id)
	{
		ifstream file;
		bool valid = false;
		int Sid;
		string date;
		int CustomerId;
		int TrainerId;
		int PlanId;
		file.open("Subscription.txt", ios::in);

		if (file.fail())
		{
			cout << "\nUnable to open File";
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if (this->ID[i] != 0)
				{
					file >> this->subscriptionID[i];
					Sid = this->subscriptionID[i];
					getline(file, this->date[i]);
					date = this->date[i];
					file >> this->ID[i];
					CustomerId = this->ID[i];
					file >> this->Tid[i];
					TrainerId = this->Tid[i];
					file >> this->PlanId[i];
					PlanId = this->PlanId[i];
					if (Sid == Id)
					{
						valid = true;
						break;
					}
				}
			}
		}
		file.close();
		return valid;
	}
//   *****************   End of Class   *****************/          