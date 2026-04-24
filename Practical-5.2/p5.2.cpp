clude<string>
using namespace std;

int main()
{
    ifstream file("input.txt");

    if(!file)
    {
        cerr<<"File can not be opened!"<<endl;
        return 1;
    }

    string line;
    int lines=0,words=0,chars=0;

    while(getline(file,line))
    {
        lines++;
        chars+=line.length();

        bool inword=false;

        for(int i=0;i<line.length();i++)
        {
            if(!isspace(line[i]))
            {
                if(!inword)
                {
                    words++;
                    inword=true;
                }
            }
            else{
                inword=false;
            }
        }
    }

    file.close();

    cout<<"Lines: "<<lines<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Characters: "<<chars<<endl;
}
