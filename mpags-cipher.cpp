#include <iostream> 
#include <string>
#include <vector>

int main (int argc, char* argv[])
{
    //Exercise 1
    std::cout << "Hello World!\n";

    //Exercise 2

    int a;
    double b = 1.2;
    double c(3.4);

    a = 43;
    b = 2.2;
    c = a * b;

    std::cout << c << std::endl;

    //Exercise 3

    std:: string msg("Hello");
    std::cout <<msg << "\n";

    int a1(5);
    a1 = 10;

    const int b1(5);
    //b1 = 10;

    const double c1(3.3);

    std::cout << c1 << "\n";

    //Exercise 4

    int a2;
    double b2 = 3.9;
    double c2(3.4);
    double c3(3.4);

    a2 = 3;

    c2 = a2 * b2;

    std::cout << c2 << std::endl;

    c3 = a2 / b2;

    std::cout << c3 << "\n";

    std:: string msg2("Hello");
    std::cout <<msg2<<"\n";

    std::cout << msg2[4]<<"\n";

    //Exercise 5

    char in_char{'x'};
    std::string out_str{""};

    // take each letter from user input and in each case:
    while(std::cin >> in_char) //loops until the user presses eneter then Ctrl+D
    {
        // -convert to upper case
        if (std::isalpha(in_char)) {
            //std::cout << in_char << std::endl;
            out_str += std::toupper(in_char);
            continue; 
        }
        // - change numbers to words

        switch (in_char){

            case '1':
                out_str += "ONE";
                break;
            case '2':
                out_str += "TWO";
                break;
            case '3':
                out_str += "THREE";
                break;
            case '4':
                out_str += "FOUR";
                break;  
            case '5':
                out_str += "FIVE";
                break;        
            case '6':
                out_str += "SIX";
                break;  
            case '7':
                out_str += "SEVEN";
                break;
            case '8':
                out_str += "EIGHT";
                break;
            case '9':
                out_str += "NINE";
                break;
            case '0':
                out_str += "ZERO";
                break;
            default:
                //DO NOTHING
                break;
        }

        //ignore any other (non-alpha) characters

        // In each case, add result to a string variable

    }

    //print out the new string
    std::cout <<"Final String: "<< out_str << std::endl;

    //Example 1: Manipulation

    //construct a vector
    std::vector<double> vec = {1.2, 3.4, 5.6};

    //print out the vector size (3)
    std::cout <<"Vector Size: "<< vec.size() << std::endl;

    //end a few elements
    vec.push_back(7.8);
    vec.push_back(9.1);

    //vector size (5)
    std::cout <<"Vector Size: "<< vec.size() << std::endl;

    //remove an element 
    vec.pop_back();

    //vector size (4)
    std::cout <<"Vector Size: "<< vec.size() << std::endl;

    //loop over the vector using an index counter
    for (size_t i{0}; i< vec.size(); i++)
    {
        std::cout<<"Index: "<< i << " " <<vec[i]<< std::endl;
    }

    //Exercise 6 
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };

    for (int i=0;i<argc; i++)
    {
        //std::cout<<cmdLineArgs[i]<< std::endl;

        //Exercise 7 and 8
        if(std::string(argv[i]) == "-h" || std::string(argv[i]) == "--help")
        {
            std::cout << "List of HELP text:..."<< std::endl;
        }
        else if(std::string(argv[i]) == "--version")
        {
            std::cout << "Version: 1"<< std::endl;
        }
        else if(std::string(argv[i]) == "-i")
        {
            std::string Input_name = argv[i+1];
            std::cout << "Input_file:"<< Input_name << std::endl;
            i=i+1;
        }
        else if(std::string(argv[i]) == "-o")
        {
            std::string Output_name = argv[i+1];
            std::cout << "Output_file:" << Output_name << std::endl;
            i=i+1;
        }
        else 
        {
            std::cout<<cmdLineArgs[i]<< std::endl;
        }

    }
    return 0;

}
