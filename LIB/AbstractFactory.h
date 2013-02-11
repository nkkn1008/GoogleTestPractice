#include <iostream>
#include <string>
#include <vector>

// �I�u�W�F�N�g�w���̂������p.181���Q��
// ContinentFactory ->ResFactory
// LowResFact/HighResFact -> AfricaFactory, AmericaFactory
// main�ŗ��p����Animal World�N���X��Africa,America�̈Ⴂ��
// �ӎ�����K�v���Ȃ�

class Herbivore {
public:
	virtual std::string GetName() = 0;
};

class Carnivore {
public:
	virtual std::string Eat(Herbivore* h) = 0;
	virtual std::string GetName() = 0;
};

class ContinentFactory {
public:
  virtual Herbivore* CreateHerbivore() = 0;
  virtual Carnivore* CreateCarnivore() = 0;
};

class Lion : public Carnivore {
public:
	std::string Eat(Herbivore* h)
	{
		//std::cout << GetName() << " eats " << h->GetName() << std::endl;
		return GetName() + " eats " + h->GetName();
	}

  virtual std::string GetName() {
    return "Lion";
  }
};

class Bison : public Herbivore {
  virtual std::string GetName() {
    return "Bison";
  }
};

class Wolf : public Carnivore {
public:
	std::string Eat(Herbivore* h) {
	  //    std::cout << GetName() << " eats " << h->GetName() << std::endl;
	return GetName() + " eats " + h->GetName();	
  }
  
  virtual std::string GetName() {
    return "Wolf";
  }
};

class Wildebeest : public Herbivore {
  virtual std::string GetName() {
    return "Wildebeest";
  }
};

class AfricaFactory : public ContinentFactory {
public:
  virtual Herbivore* CreateHerbivore() {
    return new Wildebeest();
  }

  virtual Carnivore* CreateCarnivore() {
    return new Lion();
  }
};

class AmericaFactory : public ContinentFactory {
public:
  virtual Herbivore* CreateHerbivore() {
    return new Bison();
  }

  virtual Carnivore* CreateCarnivore() {
    return new Wolf();
  }
};

class AnimalWorld {
private:
  Herbivore* herbivore_;
  Carnivore* carnivore_;

public:
  AnimalWorld(ContinentFactory* factory);
  std::string RunFoodChain();

};
