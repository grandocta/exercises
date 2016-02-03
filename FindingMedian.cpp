#include <iostream>
#include <string>

int main()
{
int size, forMedian, temp, j, i;
std::string name;
std::cout<<"How many numbers?: ";
std::cin>>size;
int *grade = new int[size];

for (i=0; i<size; i++)
	{
	 std::cout << "Enter Number";
     std::cin >> grade[i];
	}

//start sort
for(i=0; i<size-1; i++)
    for(j=i+1; j<size; j++)
        if(grade[i] > grade[j])
        {
        temp = grade[i];
        grade[i] = grade[j];
        grade[j] = temp;
        }    
std::cout<<"The numbers you typed are        
for(i=0;i<size;i++)
std::cout<<grade[i]<<", ";
// end sort

delete[]grade;
std::cout<<"the median is ";
forMedian = size/2;
if (size%2==0)
    {
    forMedian = (grade[forMedian] + grade[forMedian-1]);
    std::cout<<forMedian<<".";
    }
else
    {
    forMedian = grade[forMedian];
    std::cout<<forMedian<<".";
    }


return;

}