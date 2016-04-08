
// main base or a superclass
class shape
{
public:
	float l;
	float w;
	void set_length(float length) {
		l = length;
	}
	float get_length() {
		return l;
	}
	void set_width(float width) {
		w = width;
	}
	float get_width() {
		return w;
	}
private:

};


// derived class: subclass of a superclass shape
class two_dimensional : public shape
{
public:

	float Rectange_area() {
		return (l * w);
	}
	float square_area() {
		return (l*l);
	}
	float triangle_area() {
		return (0.5 * l * w);
	}
	float circle_area() {
		return (3.14 * l * l);
	}


private:

};

// derived class: subclass of a superclass shape
class three_dimensional : public shape

{
public:
	float sphere_area() {
		return (l * l * l);
	}
	float cube_area() {
		return (6 * l * l);
	}

private:

};
