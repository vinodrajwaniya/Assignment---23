#include<iostream>
using namespace std;

int main()
{
    float cub_l,cub_h,cub_w,area;
    cout<<"Enter cuboid leght height width ";
    cin>>cub_l>>cub_h>>cub_w;
    area=cub_l*cub_h*cub_w;
    cout<<"volume of a cuboid is "<<area;
    return 0;
}