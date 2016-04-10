/*
  Бакиев Александр 5305
  Модуль: MUL_Z-_Z
  Назначение: Умножение целого на (-1)
*/

struct INTEGER MUL_Z-_Z(struct INTEGER iNum) { 
	iNum.token = (iNum.token == 1 ? 0 : 1 );
	
	return iNum;
}
