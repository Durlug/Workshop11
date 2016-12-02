
template <class A, class B, class C, class D, class E, int length>

bool validate(const A& min, const B& max, C (&array)[length], D size, E e[])
{
	bool result = true;

	for (int i = 0; i <= size; i++)
	{
		if (min > array[i] || max < array[i])   //Checking to see if value is outside min/max range
		{
			result = false;                    //Sets result to false if it is
			e[i] = false;                     //Sets bool array index to false 
		}
		else
		{
			e[i] = true;                    //Sets bool array index to true
		}
	}

	return result;
}


