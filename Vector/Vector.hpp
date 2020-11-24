#pragma once
#include <string>

namespace mathVector
{
	class Vector
	{
	public:
		float x;
		float y;
		float z;
		Vector(float x, float y, float z) : x(x), y(y), z(z) {}
		Vector() : x(0.f), y(0.f), z(0.f) {}
		Vector(const Vector& vec) : x(vec.x), y(vec.y), z(vec.z) {}
		Vector& operator=(const Vector& vec) noexcept;
		Vector operator+(const Vector& vec) const noexcept;
		Vector operator-(const Vector& vec) const noexcept;
		Vector operator*(const Vector& vec) const noexcept;
		Vector operator*(const float value) const noexcept;
		float dot(const Vector& vec) const noexcept;
		float mixed(const Vector& vecB, const  Vector& vecC) const noexcept;
		float dotProduct(const Vector& vec) const noexcept;
		float mixedProduct(const Vector& vecB, const  Vector& vecC) const noexcept;
		float length() const noexcept;
		float cos(const Vector& vec) const noexcept;
		float sin(const Vector& vec) const noexcept;
		float projection(const Vector& vec) const noexcept;
		float triangleArea(const Vector& vec) const noexcept;
		float parallelogramArea(const Vector& vec) const noexcept;
		float tetrahedronVolume(const Vector& vecB, const  Vector& vecC) const noexcept;
		bool isCollinear(const Vector& vec) const noexcept;
		bool isOrthogonality(const Vector& vec) const noexcept;
		bool isCoplanarity(const Vector& vecB, const Vector& vecC) const noexcept;
		std::string to_string() const noexcept;
	};

	float dot(const Vector& vecA, const Vector& vec) noexcept;
	float mixed(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept;
	float dotProduct(const Vector& vecA, const Vector& vec) noexcept;
	float mixedProduct(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept;
	float length(const Vector& vecA) noexcept;
	float cos(const Vector& vecA, const Vector& vecB) noexcept;
	float sin(const Vector& vecA, const Vector& vecB) noexcept;
	float projection(const Vector& vecA, const Vector& vecB) noexcept;
	float triangleArea(const Vector& vecA, const Vector& vecB) noexcept;
	float parallelogramArea(const Vector& vecA, const Vector& vecB) noexcept;
	float tetrahedronVolume(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept;
	bool isCollinear(const Vector& vecA, const Vector& vecB) noexcept;
	bool isOrthogonality(const Vector& vecA, const Vector& vecB) noexcept;
	bool isCoplanarity(const Vector& vecA, const Vector& vecB, const Vector& vecC) noexcept;
	std::string to_string(const Vector& vecA) noexcept;
}