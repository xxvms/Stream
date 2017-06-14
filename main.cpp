#include <iostream>
#include <fstream> 										// file stream
// PUT IN from keyboard - source (entrance)
// PUT OUT to the file - destination (exit)

using namespace std;

int main() {

	fstream myFileHandler;

	myFileHandler.open("test.txt");

	if (myFileHandler.is_open())							// we could do this to check if file is opened
	{
		cout << "The file has been opened properly";		// message to inform us about if operation is successful
		myFileHandler << "this is sample text";				// adding some data to file
		myFileHandler.close(); 								// make sure we close file afterwards
	} else (cout << "unable to open file ");

	std::cin.get();
	return 0;
}