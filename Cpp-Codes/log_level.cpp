#include <iostream>
using namespace std;

class log
{
public:
   
   
    int loglevelerror = 0, loglevelwarning =1, loglevelinfo = 2;
   

private : int m_loglevel = loglevelinfo;
public:
    void setlevel(int level)
    {
        m_loglevel = level;
    }
    void error(const char *message)
    {
        if (m_loglevel >= loglevelerror)
            cout << "[ERROR]: " << message << endl;
    }
    void warn(const char *message)
    {
        if (m_loglevel >= loglevelwarning)
            cout << "[WARNING]: " << message << endl;
    }
    void info(const char *message)
    {
        if (m_loglevel >= loglevelinfo)
            cout << "[INFO] " << message << endl;
    }
};

int main()
{
    log log;
    log.setlevel(log.loglevelinfo);
    log.warn("HELLO");
    log.error("HELLO");
    log.info("HELLO");
    return 0;
}