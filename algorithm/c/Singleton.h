#pragma once

class Singleton {
public:

	static Singleton* Instance() {
		if (instance == nullptr)
		{
			//lock
			if (instance == nullptr)
			{
				instance = new Singleton();
			}
		}
		return instance;
	}
private:
	static Singleton * instance;
};

Singleton* Singleton::instance = nullptr;