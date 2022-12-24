namespace V1 {
		void foo() { std::cout << "foo v1.0" << std::endl; }
	}

	inline namespace V2 {
		void foo() { std::cout << "foo v2.0" << std::endl; }
	}
}

int main()
{
	Parent::foo();
}
