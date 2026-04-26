
class Demo    //  Encapsulatin (Binding Charecteristics And Behaviour)
{
    public:   // Abstraction (public Asses Specifire)
        int iNo1;           // Charecterestic   (data)
        int iNo2;           // Charecterestic   (data)

        // Behaviour    (function as demo)
        Demo()              // Default Costructor
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Demo(int a, int b)      // Parameterished Constructor
        {
            iNo1 = a;
            iNo2 = b;
        }
        
        ~Demo()                // Distrructor
        {
            //logic
        }


        //   polymorphism single name as demo and multiple behaviour
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);

    return 0;
}

// g++ First -o Myexe
// Myexe.exe  (Windows)    ./Myexe  (Linux) 