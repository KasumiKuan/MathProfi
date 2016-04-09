/*
	���������� ������ 5305
	������: RED_Q_Q
	����������: ���������� �����
	�����������: GCF_NN_N
				 DIV_ZZ_Z
				 ABS_Z_N
*/

struct RACIONAL RED_Q_Q(struct RACIONAL rNum) {
	struct RACIONAL rez; // ����������� ��������
	struct NATURAL NOD;	// ��� �����
	
	NOD = GCF_NN_N(rNum.numerator, rNum.denominator); // ���������� ���
	rez.numerator = DIV_ZZ_Z(ABS_Z_N(rNum.numerator), NOD); // ��������� ������ ��������� �� ���
	rez.denominator = DIV_ZZ_Z(ABS_Z_N(rNum.denominator), NOD);	// ��������� ������ ����������� �� ���
	rez.token = rNum.token;	// C������� ����
	
	return rez;
}