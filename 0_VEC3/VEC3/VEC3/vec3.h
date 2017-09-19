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

	TYPE operator+(const TYPE other_vec)
	{
		return other_vec.x + x && other_vec.y + y && other_vec.z + z;
	}

	bool operator== (const TYPE other_vec)
	{
		return other_vec.x == x && other_vec.y == y && other_vec.z == z;
	}



}








#endif