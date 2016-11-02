#include <iostream>

#include "lobster_eye.h"
#include "light.h"

using namespace std;

int main()
{

    // Solver solver ;
    // solver.config(infilename) ;
    // solver.run(RunCondition) ;
    // solver.dump(outfilename) ;
    // return 1;


    Lobster_Eye lob ;
    Light   l;
    std::cout<<"Lobster_Eye.Cross() = "<<lob.Cross(l)<<std::endl;


    cout << "Read Input File >>> " << endl;

    cout << "Conduct non-seq light Tracing >>>" <<std::endl;

    cout << "Write Light Object >>> " << std::endl;

    return 0;
}

