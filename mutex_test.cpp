#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;//互斥锁
std::condition_variable cv;//条件变量
bool ready = false; //发送的消息是否准备好
const char* message = nullptr; //发送的消息

void sender()
{
    //先准备数据
     message = "a55a";
    //通知接收者可以读取数据
    {
        std::unique_lock<std::mutex> lock(mtx);
        ready = true;
        cv.notify_one();
    }
}

void receiver()
{
    //等待消息发送者准备数据
    {
        std::unique_lock<std::mutex> lock(mtx);
        while (!ready) 
        {
            cv.wait(lock);
        }
        
        //cv.wait(lock,[]{ return ready; });
        ready = false;
    }
    //读取数据并处理
    std::cout << "receive message" <<message << std::endl;
}

int main()
{
    //创建线程并启动
    std::thread t1(sender);
    std::thread t2(receiver);

    //等待线程结束
    t1.join();
    t2.join();

    return 0;
}