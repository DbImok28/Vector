#include "Vector.hpp"

mathVector::Vector& mathVector::Vector::operator=(const Vector& vec) noexcept
{
	x = vec.x;
	y = vec.y;
	z = vec.z;

	return *this;
}
mathVector::Vector mathVector::Vector::operator+(const Vector& vec) const noexcept
{
	return { x + vec.x,y + vec.y,z + vec.z };
}
mathVector::Vector mathVector::Vector::operator-(const Vector& vec) const noexcept
{
	return { x - vec.x,y - vec.y,z - vec.z };
}
mathVector::Vector mathVector::Vector::operator*(const Vector& vec) const noexcept
{
	return { y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x };
}
mathVector::Vector mathVector::Vector::operator*(const float value) const noexcept
{
	return { value * x,value * y, value * z };
}
float mathVector::Vector::dot(const Vector& vec) const noexcept
{
	return x * vec.x + y * vec.y + z * vec.z;
}
float mathVector::Vector::mixed(const Vector& vecB, const Vector& vecC) const noexcept
{
	return dot(vecB * vecC);
}
float mathVector::Vector::dotProduct(const Vector& vec) const noexcept
{
	return dot(vec);
}
float mathVector::Vector::mixedProduct(const Vector& vecB, const Vector& vecC) const noexcept
{
	return mixed(vecB, vecC);
}
float mathVector::Vector::length() const noexcept
{
	return sqrtf(x * x + y * y + z * z);
}
float mathVector::Vector::cos(const Vector& vec) const noexcept
{
	return dot(vec) / (length() * vec.length());
}
float mathVector::Vector::sin(const Vector& vec) const noexcept
{
	return sqrtf(1 - powf(cos(vec), 2));
}
float mathVector::Vector::projection(const Vector& vec) const noexcept
{
	return dot(vec) / vec.length();
}
float mathVector::Vector::triangleArea(const Vector& vec) const noexcept
{
	return ((*this) * vec).length() / 2;
}
float mathVector::Vector::parallelogramArea(const Vector& vec) const noexcept
{
	return ((*this) * vec).length();
}
float mathVector::Vector::tetrahedronVolume(const Vector& vecB, const Vector& vecC) const noexcept
{
	return abs(mixed(vecB, vecC)) / 6;
}
bool mathVector::Vector::isCollinear(const Vector& vec) const noexcept
{
	return (x / vec.x == y / vec.y && y / vec.y == z / vec.z);
}
bool mathVector::Vector::isOrthogonality(const Vector& vec) const noexcept
{
	return dot(vec) == 0;
}
bool mathVector::Vector::isCoplanarity(const Vector& vecB, const Vector& vecC) const noexcept
{
	return mixedProduct(vecB, vecC) == 0;
}
std::string mathVector::Vector::to_string() const noexcept
{
	return (std::to_string(x) + ' ' + std::to_string(y) + ' ' + std::to_string(z));
}


float mathVector::dot(const Vector& vecA, const Vector& vec) noexcept
{
	return vecA.x * vec.x + vecA.y * vec.y + vecA.z * vec.z;
}
float mathVector::mixed(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept
{
	return dot(vecA, vecB * vecC);
}
float mathVector::dotProduct(const Vector& vecA, const Vector& vec) noexcept
{
	return dot(vecA, vec);
}
float mathVector::mixedProduct(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept
{
	return mixed(vecA, vecB, vecC);
}
float mathVector::length(const Vector& vecA) noexcept
{
	return sqrtf(vecA.x * vecA.x + vecA.y * vecA.y + vecA.z * vecA.z);
}
float mathVector::cos(const Vector& vecA, const Vector& vecB) noexcept
{
	return dot(vecA, vecB) / (vecA.length() * vecB.length());
}
float mathVector::sin(const Vector& vecA, const Vector& vecB) noexcept
{
	return sqrtf(1 - powf(cos(vecA, vecB), 2));
}
float mathVector::projection(const Vector& vecA, const Vector& vecB) noexcept
{
	return dot(vecA, vecB) / vecB.length();
}
float mathVector::triangleArea(const Vector& vecA, const Vector& vecB) noexcept
{
	return (vecA * vecB).length() / 2;
}
float mathVector::parallelogramArea(const Vector& vecA, const Vector& vecB) noexcept
{
	return (vecA * vecB).length();
}
float mathVector::tetrahedronVolume(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept
{
	return abs(mixed(vecA, vecB, vecC)) / 6;
}
bool mathVector::isCollinear(const Vector& vecA, const Vector& vecB) noexcept
{
	return (vecA.x / vecB.x == vecA.y / vecB.y && vecA.y / vecB.y == vecA.z / vecB.z);
}
bool mathVector::isOrthogonality(const Vector& vecA, const Vector& vecB) noexcept
{
	return dot(vecA, vecB) == 0;
}
bool mathVector::isCoplanarity(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept
{
	return mixedProduct(vecA, vecB, vecC) == 0;
}
std::string mathVector::to_string(const Vector& vecA) noexcept
{
	return (std::to_string(vecA.x) + ' ' + std::to_string(vecA.y) + ' ' + std::to_string(vecA.z));
}