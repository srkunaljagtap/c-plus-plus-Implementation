
// main base or a superclass
class shape
{
public:
	float l;
	float w;
	// pure virtual function providing interface framework.
	virtual float get_area() = 0;
	virtual float get_volume() = 0;
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
class Square : public shape
{
public:

	float get_area() {
		return (l * l);
	}
	
private:

};

class Rectangle : public shape
{
public:

	float get_area() {
		return (l * w);
	}

private:

};

class Triangle : public shape
{
public:

	float get_area() {
		return (0.5 * l * w);
	}

private:

};

class Circle : public shape
{
public:

	float get_area() {
		return (3.14 * l * l);
	}

private:

};


// derived class: subclass of a superclass shape
class Sphere : public shape

{
public:
	float get_area() {
		return (l * l * l);
	}
	float get_volume() {
		return ((4/3) *3.14 * l*l*l);
	}

private:

};

class Cube : public shape
{
public:

	float get_area() {
		return (6 * l * l);
	}
	float get_volume() {
		return (l*l*l);
	}
private:

};
