#include <mutex>

std::mutex mx;
bool shared_flag = true;
int main()
{
	if (std::lock_guard<std::mutex> lock(mx); shared_flag) { 
		shared_flag = false;
	}
}
