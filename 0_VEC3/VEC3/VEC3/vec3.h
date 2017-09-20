#ifndef _VEC3_
#define _VEC3_

template <class TYPE>

class vec3
{
private:

	TYPE x, y, z;

public:


	vec3() {}
	vec3(TYPE x, TYPE y, TYPE z) : x(x), y(y) z(z) {}

	TYPE operator+(const vec3 other_vec)
	{
		return other_vec(x + other_vec.x , y + other_vec.y , z + other_vec.z);
	}

	bool operator== (vec3 other_vec)
	{
		return other_vec.x == x && other_vec.y == y && other_vec.z == z;
	}

};

#endif

