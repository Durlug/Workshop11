
template <class A, class B, class D>

bool validate(const A& min, const A& max, B array[], D size, bool* e)
{
	bool result = true;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < max && array[i] > min || array[i] <= max && array[i] >= min)   //Checking to see if value is outside min/max range
		{
			e[i] = true;                     //Sets bool array index to false 
		}
		else
		{
			result = false;
			e[i] = false;                    //Sets bool array index to true
		}
	}

	return result;
}


