/*
	����������� ������ 5305
	������: NMR_P_P
	����������: �������������� ���������� - ������� ����� � �������
	�����������: GCF_PP_P
				 DER_P_P
				 DIV_PP_P
*/

struct POLINOM NMR_P_P(struct POLINOM pNum) {
	return DIV_PP_P(pNum, GFC_PP_P(pNum, DER_P_P(base)));
}