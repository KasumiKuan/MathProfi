/*
	Болгова Анна 5305
	Модуль: MUL_P_Q
	Назначение: Умножение многочлена на рациональное число
*/

struct POLINOM MUL_P_Q(struct POLINOM A, struct RATIONAL_CH D) {
	for (int i = 0; i < A.step_mn; i++) {
		A.mass_k[i].chislit = MUL_ZZ_Z(A.mass_k[i].chislit, D.chislit);
		A.mass_k[i].znamen = MUL_ZZ_Z(A.mass_k[i].znamen, D.znamen);
	}

	return A;
}

