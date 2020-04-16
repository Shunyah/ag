// Example program
#include <iostream>
#include <vector>
using namespace std;

struct nn {
    int l;
    int r;
}

bool cmp(nn a, nn b) {
    if (a.r > b.l) {
        nn c = a;
        a = b;
        b = c;
    }
    if (a.r > b.l)
        return true;
    else
        return false;
}

int main()
{
    int n;
    vector <nn> les;
    vector <vector <nn> > audit;

    while (cin » n) {
        for (int i = 0; i < n; ++i) {
            nn c;
            cin » c.l » c.r;
            les.push_back(c)
        }
        for (int i = 0; i < les.size(); ++i) {
            int audit_num = -1;
            for (int j = 0; j < (int)audit.size(); ++j) {
                bool p = false;
                for (int q = 0; q < audit[j].size(); ++q)
                {
                    if (cmp(audit[j][q], les[i]))
                    {
                        p = true;
                        break;
                    }
                }
                if (p == false) {
                    audit_num = j;
                    break;
                }
            }
            if (audit_num == -1) {
                vector<nn> audit_new(1, les[i]);
                audit.push_back(audit_new);
            }
            else
                audit[audit_num].push_back(les[i]);
        }
        cout << audit.size() << endl;
    }
    system("pause");
    return 0;
}
