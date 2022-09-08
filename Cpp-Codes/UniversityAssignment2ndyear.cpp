#include <iostream>
#include <sstream>

using namespace std;

class HashTable
{
public:
    struct Entry
    {
        std::string Data;
        std::string Status = "never used";
    };
    static const int Size = 26;
private:
    Entry m_Entries[Size];
private:
    int Getindex(const string& entrystring)
    {
        return entrystring.back() - 'a';
    }
    bool Find(const string& entrystring, int* outindex = nullptr)
    {
        int index = Getindex(entrystring);
        while (true)
        {
            if (m_Entries[index].Data == entrystring)
            {
                if (outindex)
                *outindex = index;
                return true;
            }
            if (m_Entries[index].Status == "never used")
            return false;

            index = (index+1)%Size;
        }
        return false;
    }
    int GetInsertIndex(const string& entrystring)
    {
        int index = Getindex(entrystring);
        while (true)
        {
            if (m_Entries[index].Status == "never used" || m_Entries[index].Status == "tombstone")
            return index;

            index = (index+1)%Size;
        }
        return -1;
    }


public:
    HashTable() = default;

    void Add(const string& entrystring)
    {
        int unused;
        bool exist = Find(entrystring);
        if (!exist)
        {
            int insertindex = GetInsertIndex(entrystring);
            m_Entries[insertindex].Data = entrystring;
            m_Entries[insertindex].Status = "occupied";
        }
    }
    void Delete(const string& entrystring)
    {
        int index;
        bool exist = Find(entrystring, &index);
        if (exist)    
            m_Entries[index].Status = "tombstone";
    }

    void print()
    {
        for (int i = 0; i < Size; i++)
        {
            if (m_Entries[i].Status == "occupied")
            cout<< m_Entries[i].Data <<' ';
        }
            std::cout<<std::endl;
    }

};
int main ()
{
    std::string input;
    getline(std::cin, input);

    HashTable hashtable;

    std::stringstream ss(input);
    while (ss.good())
    {
        std::string token;
        ss>>token;

        std::string entryname = token.substr(1);//also can use &token[1];
        if (token[0] == 'A')
        {
            hashtable.Add(entryname);
        }
        else if (token[0] =='D')
        {
            hashtable.Delete(entryname);
        }
        
    }
    hashtable.print();
    
return 0;
}