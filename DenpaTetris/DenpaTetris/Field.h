#pragma once
#include"Resource.h"
#
//�O���錾
class Point;
class Cell;

//�t�B�[���h�N���X
class Field {
public:
	//�R���X�g���N�^
	Field();

	//�������֐�
	void clear();

	//�폜�֐�
	int deleteLine();

	//�����낤����H
	/*
	�Ȃ񂾂���H
	*/
	void fixPiece(const Point pos, const Cell cells[][PieceHeight]);

	//�폜�������𓮂���
	void shiftLine(int delCount);

	//�l�񂾂��ǂ������ׂ�
	bool isStacked()const
	{
		/*

		���������̌��ߑł�������

		*/
		if (cells_[6][0].getBlock() || cells_[7][0].getBlock()) {
			return true;
		}
		else {
			return false;
		}
	}

	Cell getCell(int x, int y) const
	{
		return cells_[x][y];
	}

private:
	//�u���b�N�z��
	Cell cells_[FieldWidth][FieldHeight];
};