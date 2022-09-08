#include <iostream>
using namespace std;

    class random
    {
        public:
            random(const random&) = delete;//prevents the copy.
            static random& get()
            {
                static random s_instance;
                return s_instance;
            }

            void func() {cout<<"hello!"<<endl;}

            static float Float() {return get().IFloat();}
        private:
            float IFloat() {return m_randomgenerator;}
            random() {}
            float m_randomgenerator = 0.5f;
            //static random s_instance;//better way is used above in the get function.
    };
    //random random::s_instance;//better way is used above in the get function.
    namespace randomclass{//other way using namespace.
        static float s_randomgenerator = 0.5f;
        static float Float() {return s_randomgenerator;}
    }
int main ()
{
   // random instance = random::get(); //can not be done as copy is prevented above.
    random::get().func();
    
    float number = random::Float();
    float num = randomclass::Float();
    std::cout<< num <<std::endl;
    std::cout<< number << std::endl;
return 0;
}