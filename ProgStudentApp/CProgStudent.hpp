//
//  CProgStudent.hpp
//  ClassCreationPractical
//
//  Created by James Connolly on 13/03/2022.
//

#ifndef CProgStudent_hpp
#define CProgStudent_hpp


#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#endif /* CProgStudent_hpp */

using namespace std;
class CProgStudent{
private:
    string m_name;
    string m_KNum;
    int m_ChristmasMark;
    int m_LLAttendanceMark;
    int m_Proj1Mark;
    int m_Proj2Mark;
    int m_MayMark;
    
public:
    CProgStudent(void);
    CProgStudent(string name, string kNumber);
    
    void SetMayExamMark(int mark);
    void SetChristmasMark(int mark);
    void SetProj1Mark(int mark);
    void SetProj2Mark(int mark);
    void SetLLAttendanceMark(int mark);
    
    string GetName(void);
    string GetkNum(void);
    void ShowDetails(void);
    int GetTotalMark(void);
    bool hasPassed(void);
};
