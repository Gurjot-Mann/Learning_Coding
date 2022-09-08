#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct vertex
{
    float x,y,z;
};
ostream& operator<<(ostream& stream, const vertex& vertex)
{
    stream << vertex.x<<","<<vertex.y<<","<<vertex.z;
    return stream;
}
int main ()
{
    vector<vertex> vertices;
    vertices.push_back({1,2,3});
    vertices.push_back({4,5,6});

    for (int i = 0; i < vertices.size(); i++)
    {
        cout<<vertices[i]<<endl;
    }
     vertices.erase(vertices.begin()+1);//this will erase the second element of array or vector.
    for(vertex& v : vertices)//same result as the above for loop.
     cout<<v<<endl;//by using & it is reffering to the vertices.
     //vertices.clear();
    
return 0;
}