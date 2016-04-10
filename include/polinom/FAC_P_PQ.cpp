/*
  Сыроветник Дмитрий 5305
  Модуль: FAC_P_PQ
  Назанчение: Вынесение из многочлена НОК 
              знаменателей коэффициентов и НОД числителей
  Зависимости: ABS_Z_N
               RANS_Z_N
               LCM_NN_N
               GCF_NN_N
               TRANS_N_Z
               DIV_ZZ_Z
*/

struct POLINOM FAC_P_PQ(struct POLINOM polinom) {
  int i;
  NATURAL NOD,
          NOK;
          
  // Предполагается, что степень многочлена больше 1
  // Вычисление НОДа числителей коэффицентов
  for (i=0; i<polinom.degree; i++) {
    if (i==0)
      NOD=TRANS_Z_N(ABS_Z_N(polinom.factor[0].numerator));
    else
      NOD=GCF_NN_N(TRANS_Z_N(ABS_Z_N(NOD)), TRANS_Z_N(ABS_Z_N(polinom.factor[i].numerator)));
  }
  // Вычисление НОKа числителей коэффицентов
  for (i=0; i<polinom.degree; i++) {
    if (i==0)
      NOK=TRANS_Z_N(ABS_Z_N(polinom.factor[0].denominator));
    else
      NOK=LCM_NN_N(TRANS_Z_N(ABS_Z_N(NOK)), TRANS_Z_N(ABS_Z_N(polinom.factor[i].denomerator)));
  }

  for (i=0; i<polinom.degree; i++) {
    polinom.factor[i].numerator = DIV_ZZ_Z(polinom.factor[i].numerator, TRANS_N_Z(NOD));
    polinom.factor[i].denominator = DIV_ZZ_Z(polinom.factor[i].denominator, TRANS_N_Z(NOK));
  }
};
