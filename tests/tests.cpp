#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "IReciever.h"
#include "ConcreteRecieverY.h"

class MockReciever : public IReciever {
public:
    MOCK_METHOD0(performTask, void() const);
};

TEST(IRecieverTest, PerformTask_CallsPerformTaskMethod) {
    MockReciever mockReciever;
    EXPECT_CALL(mockReciever, performTask()).Times(1);

    mockReciever.performTask();
}

TEST(ConcreteRecieverYTest, PerformTask_CallsPerformTaskMethod) {
    ConcreteRecieverY concreteRecieverY;
    // В этом тесте не проверяется реализация performTask() в ConcreteRecieverY, 
    // но проверяется, что метод virtual был вызван.
    EXPECT_CALL(concreteRecieverY, performTask()).Times(1);

    concreteRecieverY.performTask();
}

TEST(IRecieverTest, Destructor_DoesNotThrowException) {
    MockReciever* mockReciever = new MockReciever();
    delete mockReciever;
}
