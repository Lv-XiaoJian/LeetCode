#pragma once
class FindeDuplication
{
public:
	/*�ҳ��ظ�����
	һ������Ϊn����������������ֶ���0����n-1�ķ�Χ�ڣ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�
	Ҳ��֪��ÿ�������ظ��˼��Σ����ҳ�����������һ���ظ������֣����磺�������� ����Ϊ7������
	{2��3��1��0��2��5��3}����ô��Ӧ������ظ���������2��3*/

	//�����ظ��������������飬���鳤�ȣ����ظ����洢��
	bool FindReContains(int* numbers, int length, int* RecordRenumber);//ʱ�临�Ӷ� n   �ռ临�Ӷ�1
 	
																 
	/*���޸������ҳ��ظ������֣��������飬���鳤�ȣ�ssss*/
	bool FindReContainsNoEdit(int* numbers, int length);
	bool FindReContainsNoEdit_Back(int Start, int End, int* numbers, int nSize);
};

