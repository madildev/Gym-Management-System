#include"Trainer.h"
///////////////////////   CLASS   TRAINER           ////////////////////
////////////////////      Constructor         ///////////////////

Trainer::Trainer()
{
    for (int i = 0; i < 10; i++)
    {
        ID[i] = 0;
        Name[i] = " ";
    }
}
 Trainer::Trainer(int id,string Name)
 {
     for (int i = 0; i < 10; i++)
     {
         ID[i] = id;
         this->Name[i] = Name;
         break;
     }
 }
////////////////////////        Destructor           /////////////////////

Trainer::~Trainer() {};

///////////////////////   Setter  Function       /////////////////////

Trainer& Trainer::setID(int id)
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
Trainer& Trainer::setName(string name)
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
Trainer& Trainer::setHallId(int id)
{
    for (int i = 0; i < 10; i++)
    {
        if (ID[i] != 0)
        {
            this->HallId[i] = id;
            break;
        }
    }
    return *this;
}
//Getter Functions
int Trainer::getID()
{
    
    for (int i = 0; i < 10; i++)
    {
            return ID[i];
            break;
    } 
}
string Trainer::getName()
{
    for (int i = 0; i < 10; i++)
    {
            return Name[i];
            break;
    }
}

//Member Functions
bool Trainer::isExistTrainer(int Id)
{
    for (int i = 0; i < 10; i++)
    {
        if (this->ID[i] == Id)
        {
            return true;
            break;
        }
        else
        {
            return false;
            break;
        }
    }
}
bool Trainer::AddTrainer(int id, string n,int Hid)
{
    bool valid = false;
    bool valid1 = false;
    for (int i = 0; i < 10; i++)
    {
        if (this->ID[i] == 0)
        {
            this->ID[i] = id;
            this->Name[i] = n;
            this->HallId[i] = Hid;
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
        cout << "\nThe Trainer has been added successfully ";
    }
    else
    {
        return valid1;
        cout << "\nThe Trainer has not been added successfully ";
    }

}
bool Trainer::DeleteTrainer(int Id)
{
    bool valid = false;
    bool valid1 = false;
    for (int i = 0; i < 10; i++)
    {
        if (ID[i] == Id)
        {
            ID[i] = 0;
            this->Name[i] = " ";
            HallId[i] = 0;
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

bool Trainer::EditTrainer(int Id,int I,string name,int Hid)
{
    bool valid1 = false;
    bool valid2 = false;
    for (int i = 0; i < 10; i++)
    {
        if (ID[i] == Id)
        {
            this->ID[i] = I;
            this->Name[i] = name;
            this->HallId[i] = Hid;
            valid1 = true;
            valid2 = true;
        }
        if (valid1)
        {
            break;
        }
    }
    if (valid1)
    {
        return valid2;
        cout << "\nThe Equipment has been Updated successfully ";
    }
    else
    {
        return valid2;
        cout << "\nThe Equipment has not been Updated successfully ";
    }
}

//Output Function
void Trainer::DispData()
{
    cout << "\nTrainer ID" << "\tTrainer Name" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (this->ID[i] != 0)
        {
            cout << ID[i] << "\t\t" << Name[i] << "\n";
        }
    }
}
//Save the Data in files
void Trainer::SaveData()
{
    ofstream file;
    file.open("Trainer.txt", ios::out);
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
                file << ID[i] <<'\t'<< Name[i] << '\t' <<HallId[i] <<"\n";
            }
        }
    }
    file.close();
}
void Trainer::LoadTrainer()
{
    ifstream file;
    file.open("Trainer.txt", ios::out);
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
                getline(file, Name[i],'\t');
                file >> HallId[i];
        }
    }
    file.close();
}
//Load Data from the files
bool Trainer::LoadData(int nId)
{
    bool valid = false;
    ifstream file;
    int Id;
    string Name;
    file.open("Trainer.txt", ios::in);
    if (file.fail())
    {
        cout << "\nUnable to open File";
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            file >> ID[i];
            Id = ID[i];
            file.ignore();
            getline(file, this->Name[i], '\t');
            file>>HallId[i];
            Name = this->Name[i];
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
/*void Trainer::UpdateTrainer(int Id, int nId, string name)
{
    string line;
    ifstream myfile2; //for reading records
    myfile2.open("Trainer.txt");

    ofstream temp;
    temp.open("temp.txt");
    while ()
    {
        if (line !=  to_string(Id))

            temp << line << endl;
    }
    myfile2.close();
    temp.close();
    remove("Trainer.txt");
    rename("temp.txt", "Trainer.txt");

    //Now add new Record to file
    ofstream myfile;
    myfile.open("Trainer.txt", ios::app | ios::out);
    myfile << nId << "\t" << name << endl;
}
*/
/////////////////////         End  of Class Trainer           ///////////////////

