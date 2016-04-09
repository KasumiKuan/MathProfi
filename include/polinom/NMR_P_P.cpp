/*
	Игнатовский Андрей 5305
	Модуль: NMR_P_P
	Назначение: Преобразование многочлена - кратные корни в простые
	Зависимости: GCF_PP_P
				 DER_P_P
				 DIV_PP_P
*/

struct POLINOM NMR_P_P(struct POLINOM pNum) {
	return DIV_PP_P(pNum, GFC_PP_P(pNum, DER_P_P(base)));
}