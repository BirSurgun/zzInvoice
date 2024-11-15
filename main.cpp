#include<boost/asio.hpp>
#include<iostream>

int main(){
    boost::asio::io_context io_context;
    std::cout << "Boost.Asio is working!" << std::endl;

    return 0;
}