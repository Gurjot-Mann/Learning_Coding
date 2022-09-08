#include <iostream>
using namespace std;

template <typename t>
class Vector
{
public:
    Vector()
    {
        Realloc(2);
    }
    void Pushback(const t& data)
    {
        if (m_capacity <= m_size)
        {
            Realloc(m_capacity + (m_capacity / 2));
        }

        m_data[m_size] = data;
        m_size++;
    }
    const t& operator[](size_t index) const
    {
        if (index >= m_size)
        {
            //assert
        }
        
        return m_data[index];
    }
    t& operator[](size_t index)
    {
         if (index >= m_size)
        {
            //assert
        }
        return m_data[index];
    }

    int Size() const
    {
        return m_size;
    }
    
    

private:
    void Realloc(size_t newcapacity)
    {

        t *newblock = new t[newcapacity];

        if (newcapacity < m_size)
            m_size = newcapacity;

        for (size_t i = 0; i < m_size; i++)
        {
            newblock[i] = m_data[i];
        }
        delete[] m_data;
        m_data = newblock;
        m_capacity = newcapacity;
    }

private:
    t *m_data = nullptr;
    size_t m_size = 0;
    size_t m_capacity = 0;
};
/*struct vector3
{
    float x = 0.0f, y = 0.0f, z = 0.0f;

    vector3() {}
    vector3(float scalar)
        :x(scalar), y(scalar), z(scalar) {}

    vector3(float x, float y, float z)
        :x(x), y(y) ,z(z) {}

    vector3(const vector3& other)
        :x(ohter.x), y(other.y) ,z(other.z)
        {
            std::cout<<"Copied!\n";
        }
    vector3(vector&& other)
        :x(ohter.x), y(other.y) ,z(other.z)
        {
            std::cout<<"Moved!\n";
        }
    ~vector3()
    {
        std::cout<<"Destroyed!\n";
    }
};*/
template<typename T>
void print(const Vector<T>& vector)
    {
        for (size_t i = 0; i < vector.Size(); i++)
        {
            std::cout<< vector[i] << std::endl;
        }
        
            std::cout<<"-------------------------\n";
    }

int main()
{
    Vector<std::string> vec;
    vec.Pushback("Cherno");
    vec.Pushback("Hello");
    vec.Pushback("HI!");
   
    print(vec);
   


    return 0;
}