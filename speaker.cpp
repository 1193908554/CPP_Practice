#include"speaker.h"

string Speaker::GetName()
{
	return m_Name;
}

double Speaker::GetScore(int i)
{
	return m_Score[i];
}

void Speaker::SetName(string name)//��������
{
	this->m_Name = name;
}
void Speaker::SetScore(int i, double score)//���÷���
{
	this->m_Score[i] = score;
}