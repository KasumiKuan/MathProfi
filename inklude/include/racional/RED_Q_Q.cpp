/*
	Криворучко Никита 5305
	Модуль: RED_Q_Q
	Назначение: Сокращение дроби
	Зависимости: GCF_NN_N
				 DIV_ZZ_Z
				 ABS_Z_N
*/

struct RACIONAL RED_Q_Q(struct RACIONAL rNum) {
	struct RACIONAL rez; // Возращаемое значение
	struct NATURAL NOD;	// НОД чисел
	
	NOD = GCF_NN_N(rNum.numerator, rNum.denominator); // Нахождение НОД
	rez.numerator = DIV_ZZ_Z(ABS_Z_N(rNum.numerator), NOD); // Сокращаем модуль числителя на НОД
	rez.denominator = DIV_ZZ_Z(ABS_Z_N(rNum.denominator), NOD);	// Сокращаем модуль знаменателя на НОД
	rez.token = rNum.token;	// Cохраним знак
	
	return rez;
}