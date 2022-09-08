#include <iostream>
#include <vector>
using namespace std;
struct vertex
{
    float x,y,z;
    vertex(float x, float y, float z)
        : x(x),y(y) ,z(z)
        {

        }
        vertex(const vertex& vertex)
            : x(vertex.x), y(vertex.y), z(vertex.z)
            {
                cout<<"Copied!"<<endl;
            }
};
int main ()
{
     vector<vertex> vertices;
     vertices.reserve(3);//it tells to reserve the memory for three.
    vertices.emplace_back(1,2,3);
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);//what emplace do is it directly adds the element to the memory allocated by the vector in the heap and not to the main function.
return 0;
}