#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "ConcreteReciever.h"



class MockState : public ConcreteReciever {
public:
  MOCK_METHOD0(insertCoin, void());
  MOCK_METHOD0(ejectQuarter, void());
  MOCK_METHOD0(turnCrank, void());
  MOCK_METHOD0(dispense, void());
};

TEST(ConcreteRecieverTest, InsertCoin) {
  MockState ConcreteReciever;

  EXPECT_CALL(ConcreteReciever, insertCoin()).Times(1);

  ConcreteReciever.insertCoin();
}

TEST(ConcreteRecieverTest, EjectQuarter) {
  MockState ConcreteReciever;

  EXPECT_CALL(ConcreteReciever, ejectQuarter()).Times(1);

  ConcreteReciever.ejectQuarter();
}

TEST(ConcreteRecieverTest, TurnCrank) {
  MockState ConcreteReciever;

  EXPECT_CALL(ConcreteReciever, turnCrank()).Times(1);

  ConcreteReciever.turnCrank();
}
