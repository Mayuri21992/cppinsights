class cppinsights
{
	int a, b;
	int* p;

public:cppinsights(int ma,int mb)
{
	a = ma;
	b = mb;
}
	void referencemethod()
{
		int& r = a;
		p = &a;
		std::cout << "ADDRESS OF REFERNCE VARIABLE ,POINTER VARIABLE AND VARIABLE THAT ASIGNED TO REFERNCE VAR AND POINTER VAR" << std::endl;
		std::cout << "ADDRESS OF REFERNCE VARIABLE:" << &r << std::endl;
		std::cout << "ADDRESS OF pointer VARIABLE:" << &p << std::endl;
		std::cout << "ADDRESS OF VARIABLE THAT ASIGNED TO REFERNCE VAR AND POINTER  VARIABLE:" << &a << std::endl;
	
}

};
