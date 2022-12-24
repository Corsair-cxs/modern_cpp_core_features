#include <iostream>
#include <string>
struct C {
	C(std::initializer_list<std::string> a)
	{
		for (const std::string* item = a.begin(); item != a.end(); ++item) {
			std::cout << item << " ";
		}
		std::cout << std::endl;
	}

};

int main()
{
	C c{ "hello", "c++", "world" };
	std::cout << "sizeof(std::string) = " <<
		std::hex << sizeof(std::string) << std::endl;
}

/* GIMPLE

main ()
{
  struct initializer_list D.38399;
  const struct basic_string D.35629[3];
  struct allocator D.35623;
  struct allocator D.35625;
  struct allocator D.35627;
  int D.38403;

  {
    struct C c;

    try
      {
        std::allocator<char>::allocator (&D.35623);
        try
          {
            try
              {
                std::__cxx11::basic_string<char>::basic_string (&D.35629[0], "hello", &D.35623);
                std::allocator<char>::allocator (&D.35625);
                try
                  {
                    try
                      {
                        std::__cxx11::basic_string<char>::basic_string (&D.35629[1], "c++", &D.35625);
                        std::allocator<char>::allocator (&D.35627);
                        try
                          {
                            try
                              {
                                std::__cxx11::basic_string<char>::basic_string (&D.35629[2], "world", &D.35627);
                                try
                                  {
                                    try
                                      {
                                        D.38399._M_array = &D.35629;
                                        D.38399._M_len = 3;
                                        C::C (&c, D.38399);
                                      }
                                    finally
                                      {
                                        {
                                          const struct basic_string * D.35630;

                                          D.35630 = &D.35629 + 96;
                                          <D.38400>:
                                          if (&D.35629 == D.35630) goto <D.38401>; else goto <D.38402>;
                                          <D.38402>:
                                          D.35630 = D.35630 + 18446744073709551584;
                                          std::__cxx11::basic_string<char>::~basic_string (D.35630);
                                          goto <D.38400>;
                                          <D.38401>:
                                        }
                                      }
                                  }
                                finally
                                  {
                                    D.35629 = {CLOBBER};
                                  }
                              }
                            finally
                              {
                                std::allocator<char>::~allocator (&D.35627);
                              }
                          }
                        finally
                          {
                            D.35627 = {CLOBBER};
                          }
                      }
                    finally
                      {
                        std::allocator<char>::~allocator (&D.35625);
                      }
                  }
                finally
                  {
                    D.35625 = {CLOBBER};
                  }
              }
            finally
              {
                std::allocator<char>::~allocator (&D.35623);
              }
          }
        finally
          {
            D.35623 = {CLOBBER};
          }
        _1 = std::operator<< <std::char_traits<char> > (&cout, "sizeof(std::string) = ");
        _2 = std::basic_ostream<char>::operator<< (_1, hex);
        _3 = std::basic_ostream<char>::operator<< (_2, 32);
        std::basic_ostream<char>::operator<< (_3, endl);
      }
    finally
      {
        c = {CLOBBER};
      }
  }
  D.38403 = 0;
  return D.38403;
}


*/