#include <iostream>
#include <future>
#include <compare>


static bool s_finished = false;

void dowork()
{
   using namespace std::literals::chrono_literals;
    while (!s_finished)
    {

        std::cout<<"working....\n";
        std::this_thread::sleep_for(1s);
    }
    
}

int main ()
{
   std::thread worker(dowork); 

    std::cin.get();
    s_finished = true;

   worker.join();//it will stop the main thread to do its work until the work of worker thread is complete.
    std::cout<<"Finished."<<std::endl;
  std:: cin.get();
return 0;
}