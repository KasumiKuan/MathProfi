/*
  Правда Роман 5305
  Модуль: GCF_PP_P
  Назначение: НОД многочленов
  Зависимости: DEG_P_N
               MOD_PP_P
*/

struct POLINOM GCF_PP_P(struct POLINOM polinom1, struct POLINOM polinom2) {
	while ((DEG_P_N(polinom1) != 0 && polinom1->factor[0].numerator != 0) || (DEG_P_N(polinom2) != 0 && polinom2[0].factor.numerator != 0)) {
		if (DEG_P_N(polinom1) >= DEG_P_N(polinom2))
			polinom1 = MOD_PP_P(polinom1, polinom2);
		else
			polinom2 = MOD_PP_P(polinom2, polinom1);
	}
	if (DEG_P_N(polinom1) != 0 || polinom1->factor[0].numerator != 0)
		return polinom1;
	else
		return polinom2;
}
