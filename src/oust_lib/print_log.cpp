#include <iostream>
#include <OustConfig.h>
#include <oust_lib/print_log.h>

/*void hello_world() {
	std::cout << "Hello World" << std::endl;
}
*/
void print_version(){
	std::cout << Oust_VERSION_MINOR << ":" << Oust_VERSION_MAJOR << std::endl;
}