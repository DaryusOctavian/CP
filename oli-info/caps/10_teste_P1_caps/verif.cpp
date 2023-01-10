#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

ifstream fout("caps.out");
ifstream fin("caps.ok");

void msg(string mesage,int score)
{
    cout<<score<<' '<<mesage<<'\n';
    fin.close();
    fout.close();
    exit(0);
}


int main()
{
    char x1,x2;
    long long y1,y2;
    string mesaj;
    if ( !fout )
        msg("Nu exista fisierul caps.out!", 0);
    //if ( !fin )
        //msg("Nu exista fisierul caps.ok!", 0);
    int ok1=1,ok2=1;
    while (fin>>x1>>y1)
    {
        if(!(fout>>x2>>y2))
            {msg("fisier incomplet ",0); return 0;}
        if(x1!=x2) ok1=0;
        if(y1!=y2) ok2=0;
    }
    if(ok1+ok2==2)
                msg("corect!!! ",5);
    else
                if(ok1==1)
                    msg("litera corecta ",2);
                else
                    if(ok2==1)
                        msg("Nr aparitii ok ",3);
                    else
                        msg("Raspuns gresit ",0);
    return 0;
}
