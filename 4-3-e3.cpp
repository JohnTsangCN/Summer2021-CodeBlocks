/*
Date:2021-08-16
Author:John Tsang
Remark:一小球从200米高处落下，每次落地后反跳回原高度的一半，计算总共弹跳的路程。
*/
#include<iostream>
using namespace std;
int calcDistance()
{
  float distance = 0;
  float height = 200;
  do
  {
      distance = distance + height;
      height = height / 2;
      distance = distance + height;
      cout << height << endl;
  }
  while(height > 0.5);
  cout << "The distance is " <<distance;
  return 0;
}
