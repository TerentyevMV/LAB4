#include <stdio.h>
#include <locale.h>

int checkIndicator();

int main() {

	// Кодировка
	setlocale(LC_ALL, ".UTF-8");

	// Вызов приверки
	checkIndicators();

	return 0;
}

int checkIndicators() {

	int firstIndicator;
	int secondIndicator;

	puts("Введите целые значения A и B для индикаторов: ");
	scanf("%d %d", &firstIndicator, &secondIndicator);

	int firstLamp = firstIndicator;
	int secondLamp = secondIndicator;

	int isTrue = (firstLamp % 2 != 0 && secondLamp % 2 == 0) || (firstLamp % 2 == 0 && secondLamp % 2 != 0);

	printf("Условие выполнилось с результатом: %d", isTrue);

	return 0;
}
