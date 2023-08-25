#include <iostream>
#include <string>
#include <Windows.h>
#include <exception>
#include "Figure.h"
#include "Triangle.h"
#include "Triangle90.h"
#include "IsoscelesTriangle.h"
#include "Triangle60.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Recangle.h"
#include "Rhomb.h"
#include "Square.h"
void print(Figure* figure)
{
	figure->print();
}


int main(int argc, char** argv)
{
	system("chcp 1251");
	try
	{
		Triangle Triangle(3, 5, 6, 75, 40, 65);
		print(&Triangle);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	try
	{
		Triangle90 triangle90(10, 20, 30, 50, 60, 70);
		print(&triangle90);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	try
	{
		IsoscelesTriangle isoscelestriangle(10, 10, 30, 55, 70, 55);
		print(&isoscelestriangle);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	try
	{
		Triangle60 triangle60(30, 40, 40, 60, 60, 60);
		print(&triangle60);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}

	try
	{
		Quadrangle quadrangle(10, 20, 30, 40, 90, 90, 90, 90);
		print(&quadrangle);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	try
	{
		Recangle rectangle(10, 20, 10, 20, 90, 80, 90, 90);
		print(&rectangle);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	try
	{
		Square square(20, 30, 20, 20, 90, 90, 90, 90);
		print(&square);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	try
	{
		Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
		print(&parallelogram);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	
	try
	{
		Rhomb rhomb(30, 30,30,30, 40,50,40,50);
		print(&rhomb);
	}
	catch (const std::exception& ex)
	{

		std::cout << ex.what() << std::endl;
	}
	
	return 0;
}