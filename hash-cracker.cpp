#include <iostream>
#include <ostream>

int main() {
    std::cout << "hash-cracker MD5" << std::endl;
    std::string hash_cracker;
    std::cin>> hash_cracker;
    
    if (hash_cracker == "25d55ad283aa400af464c76d713c07ad"){
        std::cout << "12345678" << std::endl;

    }
    else if (hash_cracker == "25f9e794323b453885f5181f1b624d0b"){
        std::cout << "123456789" << std::endl;
    }
    else if (hash_cracker == "d8578edf8458ce06fbc5bb76a58c5ca4"){
        std::cout << "qwerty" << std::endl;
    }
    else if (hash_cracker == "5f4dcc3b5aa765d61d8327deb882cf99"){
        std::cout << "password" << std::endl;
    }
    else if (hash_cracker == "96e79218965eb72c92a549dd5a330112"){
        std::cout << "111111"  << std::endl;
    } 
    else if (hash_cracker == "e99a18c428cb38d5f260853678922e03"){
        std::cout << "abc123" << std::endl;
    }
    else if (hash_cracker == "fcea920f7412b5da7be0cf42b8c93759"){
        std::cout << "1234567" << std::endl;
    }
    else if (hash_cracker == "7c6a180b36896a0a8c02787eeafb0e4c"){
        std::cout << "password1" << std::endl;
    }
    else if (hash_cracker == "827ccb0eea8a706c4c34a16891f84e7b"){
        std::cout << "12345" << std::endl;
    }
    else if (hash_cracker == "e807f1fcf82d132f9bb018ca6738a19f"){
        std::cout << "1234567890" << std::endl;
    }
    else if (hash_cracker == "4297f44b13955235245b2497399d7a93"){
        std::cout << "123123" << std::endl;

    }
    else if (hash_cracker == "670b14728ad9902aecba32e22fa4f6bd"){
        std::cout << "000000" << std::endl;
    }
   
   
   
   
   
   
    return 0; 
}
