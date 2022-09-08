#include <iostream>
using namespace std;

template<typename Vector>
class vectorit
{
    public:
        using valuetype = typename Vector::valuetype;
        using pointertype = valuetype*;
        using referencetype = valuetype&;
    public:
        vectorit(pointertype ptr)
            : m_ptr(ptr) {}

        vectorit& operator++()
        {
            m_ptr++;
            return *this;
        }

        vectorit operator++(int)
        {
            vectorit iterator = *this;
            ++(*this);
            return iterator;
        }
         vectorit& operator--()
        {
            m_ptr--;
            return *this;
        }

        vectorit operator--(int)
        {
            vectorit iterator = *this;
            --(*this);
            return iterator;
        }

        referencetype operator[](int index)
        {
            return *(m_ptr + index);
        }

        pointertype operator->()
        {
            return m_ptr;
        }

         referencetype operator*()
        {
            return *m_ptr;
        }

        bool operator==(const vectorit& other) const
        {
            return m_ptr == other.m_ptr;
        }

        bool operator!=(const vectorit& other) const
        {
            return !(*this == other);
        }

    private:
    pointertype m_ptr;
};

template <typename t>
class Vector
{
public:
    using valuetype = t;
    using iterator = vectorit<Vector<t>>;
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
    iterator begin()
    {
        return iterator(m_data);
    }
     iterator end()
    {
        return iterator(m_data + m_size);
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