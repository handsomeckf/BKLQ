#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>

int main() {
	for (int hen = 0; hen <= 20;hen++) {
		for (int cock = 0; cock <= 33; cock++) {
			for (int chicken = 0; chicken <= 100; chicken++) {
				if (((hen + cock + chicken == 100) && (hen * 5 + 3 * cock + chicken / 3.0 == 100))) {
					std::cout << hen << "Ä¸¼¦" << cock << "¹«¼¦" << chicken << "Ð¡¼¦" << std::endl;
				}
			}
		}
	}
}