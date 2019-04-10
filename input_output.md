# INPUT/OUTPUT FILES

```
// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("sample_out.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
```

```
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  if (myfile.is_open ("sample_out.txt"))
  {
  myfile << "Writing this to a file.\n";
  myfile << "Writing two lines.";
  myfile.close();
  }
  else 
  cout << "Unable to open the file.";
  return 0;
}
```

```
// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("sampel_out.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
```