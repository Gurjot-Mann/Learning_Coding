#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


struct timer{
    std::chrono::time_point<std::chrono::steady_clock> start,end;
    std::chrono::duration<float> duration;
     
     timer(){
         start = std::chrono::high_resolution_clock::now();
     }
        ~timer()
        {
            end = std::chrono::high_resolution_clock::now();
            duration = end - start;

            float ms = duration.count() * 1000.0f;
            std::cout << "timer took " << ms << "ms"<<std::endl;
        }
};
    void function ()
    {
        timer timer;
        for (int i = 0; i < 100; i++)
        {
            cout<<"hello\n"
        }
        
    }


int main ()
{   
    functiom();

    using namespace std::literals::chrono_literals;
    auto star = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto en = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = en - star;
    std::cout<<duration>count()<<"s"<<std::endl;

return 0;
}