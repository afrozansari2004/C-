// #include <iostream>
// #include <sstream>
// using namespace std;

// int main()
// {
//     string sentence = "This is a program to get the idea of control statements";

//     istringstream iss(sentence);
//     string word;
//     while (iss >> word)
//     {
//         cout << word << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    cout << "Enter a sentence: ";
    string sentence;
    getline(std::cin, sentence);
    stringstream s(sentence);
    string word;

    // Output each word on a separate line
    while (s >> word)
    {
        std::cout << word << std::endl;
    }
    return 0;
}