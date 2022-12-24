namespace A::B::inline C {
    int foo() { return 5; }
}
// 或者
namespace A::inline B::C {
    int foo() { return 5; }
}

// 等同于：

namespace A::B { 
    inline namespace C {
        int foo() { return 5; }
    } 
}

namespace A { 
    inline namespace B { 
        namespace C {
            int foo() { return 5; }
        } 
    } 
}
