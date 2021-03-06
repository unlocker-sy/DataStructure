
class MyQueue
{
protected:
#if(0)
	int data[100];
#endif
	int *buffer;
	int front;
	int rear;
	int size;
	static const int maxQueueLen;
public:
	MyQueue();
	MyQueue(int _size);
	~MyQueue();
	virtual int enQueue(int _data) = 0;
	virtual int deQueue(void) = 0;
	virtual int isEmpty() = 0;
	//virtual int isFull() = 0;
};

class ArrayQueue:public MyQueue
{
private:
#if(0)
	int data[100];
#endif

public:
	ArrayQueue();
	ArrayQueue(int _size);
	~ArrayQueue();
	int enQueue(int _data);
	int deQueue(void);
	int isEmpty();
	void initQueue();
};

class CircularQueue:public MyQueue
{
private:
#if(0)
	int data[100];
#endif

public:
	CircularQueue();
	CircularQueue(int _size);
	~CircularQueue();
	int enQueue(int _data);
	int deQueue(void);
	int isEmpty();
	int isFull();
};
