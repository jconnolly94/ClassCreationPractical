//
//  CProgStudent.cpp
//  ClassCreationPractical
//
//  Created by James Connolly on 13/03/2022.
//

#include "CProgStudent.hpp"

//string m_name;
//string m_KNum;
//int m_ChristmasMark;
//int m_LLAttendanceMark;
//int m_Proj1Mark;
//int m_Proj2Mark;
//int m_MayMark;


CProgStudent::CProgStudent(void){
    m_name = "";
    m_KNum = "";
    m_ChristmasMark = 0;
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

CProgStudent::CProgStudent(string name, string kNumber){
    m_name = name;
    m_KNum = kNumber;
    m_ChristmasMark = 0;
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

void CProgStudent::SetMayExamMark(int mark){
    m_MayMark = mark;
}

void CProgStudent::SetChristmasMark(int mark){
    m_ChristmasMark = mark;
}

void CProgStudent::SetProj1Mark(int mark){
    m_Proj1Mark = mark;
}

void CProgStudent::SetProj2Mark(int mark){
    m_Proj2Mark = mark;
}

void CProgStudent::SetLLAttendanceMark(int mark){
    m_LLAttendanceMark = mark;
}

string CProgStudent::GetName(void){
    return m_name;
}

string CProgStudent::GetkNum(void){
    return m_KNum;
}

void CProgStudent::ShowDetails(void){
    cout << "Name: " << m_name << endl;
    cout << "KNumber: " << m_KNum << endl;
    cout << "Christmas Mark: " << m_ChristmasMark << endl;
    cout << "Project 1 Mark: " << m_Proj1Mark << endl;
    cout << "Project 2 Mark: " << m_Proj2Mark << endl;
    cout << "May Mark: " << m_MayMark << endl;
    cout << "Attendance: " << m_LLAttendanceMark << endl;
}

int CProgStudent::GetTotalMark(void){
    return m_ChristmasMark + m_LLAttendanceMark + m_Proj1Mark +
    m_Proj1Mark + m_Proj2Mark + m_MayMark;
}



bool CProgStudent::hasPassed(void){
    if(GetTotalMark() >= 40)
        return true;
    return false;
}
