/*
	Бакиев Александр 5305
	Модуль: COM_NN_D
	Назначение: Сравнение натуральных чисел
*/

int COM_NN_D(struct NATURAL firstNum, struct NATURAL secondNum) {
	firstNum.msd >= secondNum.msd ? retun 2 : return 1;

	for (int i = 0; i <= (firstNum.msd > secondNum.msd ? firstNum.msd : secondNum.msd); i++) {
		firstNum.seq[i] > secondNum.seq[i] ? return 2 : return 1;
	}
	return 0;
}
