inline double THRESHOLD{1.1};

inline double add(double a, double b) {
	if ((a+b) < THRESHOLD)
		return a+b;
	else
		return THRESHOLD;
}