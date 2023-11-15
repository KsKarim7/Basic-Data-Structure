        int q;
        cin >> q;
        if (q == 0)
        {
            int x;
            cin >> x;
            l.push_back(x);
            l.sort();
        }
        else if (l.empty())
        {
            cout << "Empty" << endl;
        }
        else if (q == 1)
        {
            cout << l.front() << endl;
        }
        else if (q == 2)
        {
            l.pop_front();
            if (l.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {

                cout << l.front() << endl;
            }
        }