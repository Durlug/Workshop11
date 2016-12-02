
template <class A, class B, class C, class D, class E, int length>

bool validate(const A& min, const B& max, C (&array)[length], D size, E e[])
{
	bool result;

	for (int i = 0; i <= size; i++)
	{
		if (min > array[i] || max < array[i])   //Checking to see if value is outside min/max range
		{
			result = false;                    //Sets result to false if it is
			e[i] = result;                     //Sets bool array index to false 
		}
		else
		{
			result = true;                    //If within range, result is set to true
			e[i] = result;                    //Sets bool array index to true
		}

		if (e[i] == false)
		{
			return false;
		}
		else
			return true;
	}
}


