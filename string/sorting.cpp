#include <bits/stdc++.h>
    using namespace std;

    class CaseInsensitive
    {
        public:
            bool operator()(string const &left, string const &right) const
            {
                return strcasecmp(left.c_str(), right.c_str()) < 0;
            }
    };
    int main(int argc, char **argv)
    {
            vector<string> v;
              int n; cin>>n;
               string s;

              for(int i=0; i<n; i++)
                    { cin>>s;
                        v.push_back(s);
                    }

        //sort(argv, argv + argc, CaseInsensitive{});
            sort(v.begin(), v.end(),CaseInsensitive{});


        for (int idx = 0; idx < n; ++idx)
            cout << v[idx] << " ";
        cout << '\n';
    }