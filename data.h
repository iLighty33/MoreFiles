#pragma once

int X, Y;
const double _PI = 3.14; // _PI - переменная не в проекте, а взятая из доп.файла

int MX[5][5];

void fillMX() {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			MX[i][j] = i + j;
}