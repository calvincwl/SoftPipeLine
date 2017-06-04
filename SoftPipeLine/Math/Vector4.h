/////////////////////////////////////////////////////////////////////////////////
/// Copyright (C), 2017, zhangxuan. All rights reserved.
/// \brief   ��ά����
/// \author  zhangxuan
/// \date    2017-06
/////////////////////////////////////////////////////////////////////////////////
#ifndef _Vector4_H_
#define _Vector4_H_

class Vector3;
class Matrix4;

class Vector4
{
public:
	/// \brief Ĭ�Ϲ��캯��
	Vector4();

	/// \brief �������캯��
	Vector4(float x, float y, float z);

	/// \brief �������캯��
	Vector4(float x, float y, float z, float w);

	/// \brief ���ƹ��캯��
	Vector4(const Vector4& a);

	/// \brief ��������
	~Vector4();

	/// \brief ���ظ�ֵ�����,���������ã���ʵ����ֵ
	Vector4& operator = (const Vector4& a);

	/// \brief ���ظ�ֵ�����,���������ã���ʵ����ֵ
	Vector4& operator = (const Vector3& a);

	/// \brief ���ض�Ԫ"+"�����
	Vector4 operator +(const Vector4& a) const;

	/// \brief ���ض�Ԫ"-"�����
	Vector4 operator -(const Vector4& a) const;

	/// \brief ���ض�Ԫ"*"����� �����
	Vector4 operator *(float a) const;

	/// \brief ���ض�Ԫ"*"����� ������
	float operator *(const Vector4& a) const;

	/// \brief ���ض�Ԫ"*"����� ������
	Vector4 operator *(const Matrix4& a) const;

public:
	/// \brief ��Ϊ������
	void zero();

	/// \brief ��ʼ��
	void init(float x,float y,float z);

	/// \brief ��ʼ��
	void init(float x,float y,float z,float w);

	/// \brief ������׼��
	void normalize();

	/// \brief ��׼��οռ�任
	void Homogenous();

public:
	union
	{
		float M[4]; 
		struct
		{
			float x;
			float y;
			float z;
			float w;
		};
	};
};

#endif