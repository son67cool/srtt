Домашняя работа

10. Написать программу, которая по введенным датам рождения
определяет старшего по возрасту (формат ввода: Mila 12 06 2001 /n Nasty 11
12 2000 вывод: Nasty)

  #include <stdio.h>
  
  #include <locale.h>
  
  int main()
  
   {
  
	int d1, m1, y1;
  
	int d2, m2, y2;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите дату рождения Миллы:\n");
	scanf_s("%d %d %d", &d1, &m1, &y1);

	printf("Введите дату рождения Насти:\n");
	scanf_s("%d %d %d", &d2, &m2, &y2);
	if (y1 > y2) {
		printf("Milla");
	}
	else if (y1 < y2) {
		printf("Nasty");
	}
	else if (m1 > m2) {
		printf("Milla");
	}
	else if (m1 < m2) {
		printf("Nasty");
	}
	else if (d1 > d2) {
		printf("Milla");
	}
	else {
		printf("Nasty");
	}
	return 0;
}

Блок-схема 


<img width="385" height="769" alt="image" src="https://github.com/user-attachments/assets/bd18ea86-dc10-47b2-b47a-0c9f1632a3e7" />

