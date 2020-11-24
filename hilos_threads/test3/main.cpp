#include <iostream>
#include <thread>
using namespace std;

void pause_thread(string id, int n)
{
    std::this_thread::sleep_for (std::chrono::seconds(n));
    std::cout << "tid: " << id << ", pause of " << n << " seconds ended\n";
}

int main()
{
    std::cout << "Spawning 3 threads...\n";
    std::thread t1 (pause_thread, "t1", 3);
    std::thread t2 (pause_thread, "t2", 2);
    std::thread t3 (pause_thread, "t3", 1);
    std::cout << "Done spawning threads. Now waiting for them to join:\n";
    t1.join();
    t2.join();
    t3.join();

    return 0;
}
