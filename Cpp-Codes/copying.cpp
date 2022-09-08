#include <iostream>
#include <cstring>

using namespace std;
class string_
{
private:
    char *m_buffer;
    unsigned int m_size;

public:
    string_(const char *string_)
    {
        m_size = strlen(string_);
        m_buffer = new char[m_size + 1];
        memcpy(m_buffer, string_, m_size);
        m_buffer[m_size] = 0;
    }
    ~string_()
    {
        delete[] m_buffer;
    }
    friend ostream &operator<<(ostream &stream, const string_ &string_);
};

ostream &operator<<(ostream &stream, const string_ &string_)
{
    stream << string_.m_buffer;
    return stream;
}

int main()
{

    return 0;
}