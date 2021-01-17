#include <iostream>
#include <string>
using namespace std;
int main()
 {
 	int number_student;
    for(number_student=0; number_student < 5; number_student++)
    {
    	int i = 0;
        int subjectMark;
        string subjectMarktxt;
        float sumMark = 0;
        float averageMark;
        cout<<"Input the marks of the student: "<<endl;
        cout<<"Write done when you are done" <<endl;
        while(true)
        {
            cin>>subjectMarktxt;
            if (subjectMarktxt == "done")
            	{
            		break;
            	}
            subjectMark = stof(subjectMarktxt);

            if(subjectMark >= 0)
            {
                sumMark=sumMark+subjectMark;
                i++;
            }
        
        }
        averageMark=sumMark/i;
        cout << sumMark << endl;
        cout << averageMark << endl;
    }
 }