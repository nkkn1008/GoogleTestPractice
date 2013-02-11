#include "../gtest-1.6.0/include/gtest/gtest.h"
#include "../LIB/AbstractFactory.h"

#include <memory>

// Animal World�́AAmerica��Africa����ʂ����ɏ������\

TEST(AbstractFactory, Test1_CallConstract)
{
	ContinentFactory* africa = new AfricaFactory();
	AnimalWorld* world = new AnimalWorld(africa);
	EXPECT_STREQ(world->RunFoodChain().c_str(), "Lion eats Wildebeest");
	delete world;
  
	ContinentFactory* america = new AmericaFactory();
	world = new AnimalWorld(america);
	EXPECT_STREQ(world->RunFoodChain().c_str(), "Wolf eats Bison");
}


