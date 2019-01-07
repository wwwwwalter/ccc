class SingleTon
{
private:
	SingleTon();
	static SingleTon *instance;
public:
	static SingleTon *getInstance();
};
