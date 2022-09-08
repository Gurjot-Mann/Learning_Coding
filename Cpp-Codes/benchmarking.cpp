#include <iostream>
#include <chrono> 
using namespace std;

    class timer
    {
        public:
        timer()
        {
            m_starttimepoint = std::chrono::high_resolution_clock::now();
        }
        ~timer()
        {
            stop();
        }
        void stop()
        {
            auto endtimepoint = std::chrono::high_resolution_clock::now();
            auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_starttimepoint).time_since_epoch().count();
            auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endtimepoint).time_since_epoch().count();

            auto duration = end - start;
            double ms = duration * 0.001;

            std::cout<< duration << "us, " << ms <<"ms\n";

        }
        
        private:
            std::chrono::time_point<std::chrono::high_resolution_clock> m_starttimepoint;
    };

int main ()
{
    int value = 0;
    {
        timer time;
        for (int i = 0; i < 1000000; i++)
        {
            value += 2;
        }
    }
        std::cout<< value << std::endl;
return 0;
}