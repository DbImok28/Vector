#include <iostream>
#include "Vector.hpp"

int main()
{
	mathVector::Vector a = { 1,2,3 };
	mathVector::Vector b = { 4,5,6 };
	mathVector::Vector c = { 2,1,7 };

	std::cout << "a+b"						<< "\t\t\t\t"	<< (a + b).to_string()		<< std::endl;
	std::cout << "a-b"						<< "\t\t\t\t"	<< (a - b).to_string()		<< std::endl;
	std::cout << "a*b"						<< "\t\t\t\t"	<< (a * b).to_string()		<< std::endl;
	std::cout << "a*2"						<< "\t\t\t\t"	<< (a * 2).to_string()		<< std::endl;
	std::cout << "a.dot()"					<< "\t\t\t\t"	<< a.dot(b)					<< std::endl;
	std::cout << "a.length()"				<< "\t\t\t"		<< a.length()				<< std::endl;
	std::cout << "a.cos(b)"					<< "\t\t\t"		<< a.cos(b)					<< std::endl;
	std::cout << "a.sin(b)"					<< "\t\t\t"		<< a.sin(b)					<< std::endl;
	std::cout << "a.projection(b)"			<< "\t\t\t"		<< a.projection(b)			<< std::endl;
	std::cout << "a.mixedProduct(b,c)"		<< "\t\t"		<< a.mixedProduct(b,c)		<< std::endl;
	std::cout << "a.collinear(b)"			<< "\t\t\t"		<< a.isCollinear(b)			<< std::endl;
	std::cout << "a.orthogonality(b)"		<< "\t\t"		<< a.isOrthogonality(b)		<< std::endl;
	std::cout << "a.coplanarity(b,c)"		<< "\t\t"		<< a.isCoplanarity(b,c)		<< std::endl;
	std::cout << "a.triangleArea(b)"		<< "\t\t"		<< a.triangleArea(b)		<< std::endl;
	std::cout << "a.parallelogramArea(b)"	<< "\t\t"		<< a.parallelogramArea(b)	<< std::endl;
	std::cout << "a.tetrahedronVolume(b,c)" << "\t"			<< a.tetrahedronVolume(b,c) << std::endl;
	return 0;
}