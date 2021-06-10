#include <iostream>
using namespace std ;

int main (int argc,char **argv){
    //atoi:argv;
    //Clearing Screen
    system("clear");
   if(argc != 2)
    cout <<"Usage: "<<argv[0]<<" u or l\n";
    cout << "Welcome to the CLI based minecraft launcher.\n";
    //Select switch
    switch (argv[1][0])
    {
    case 'l':
        cout <<" launching minecraft \n";
        system("java -jar /home/kshitij/Videos/TLauncher-2.75.jar");
    break;
    case 'u':
        cout <<"latest 1.17 \n";
       /* system("java -jar /home/kshitij/Videos/TLauncher-2.75.jar");*/
    break;
    
    default:
    cout <<"Usage: "<<argv[0]<<" u or l \n";
        break;
    }
}
