#include <bits/stdc++.h>

using namespace std;

struct Match {
  string time;
  string text;
  string team1;
  string team2;
};

int main() {
  cout << "What do you want to know?" << endl;
  cout << "For events from every match, press 1:" << endl;
  cout << "For every match without events, press 2:" << endl;
  cout << "For teams and their players, press 3:" << endl;
  int nr, k = 1, s = 0;
  cin >> nr;
  string rez;
  string t1, t2;
  ifstream f{"./eventscsv.txt"};
  string line;
  getline(f, line);
  while (getline(f, line)) {
    stringstream ss(line);
    vector<string> cmps;
    string crt;
    char r = '"';
    while (getline(ss, crt, r)) {
      if (crt != ",")
        cmps.push_back(crt);
    }
    if (nr ==
        1) /////////////////////////////////////////////////////////////////////////
    {
      Match match;
      match.team1 = cmps[6];
      match.team2 = cmps[7];
      if (match.team1 != t1 && match.team1 != t2 ||
          match.team2 != t1 && match.team2 != t2) {
        if (s > 0) {
          cout << "Final Result: " << rez << endl;
        }
        s++;
        cout << match.team1 << "-" << match.team2 << endl;
        cout << "    ||      ||       ||" << endl;
        cout << "    ||      ||       ||" << endl;
        cout << "    ||      ||       ||" << endl;
        cout << "   " << char(92) << "  /"
             << "    " << char(92) << "  /"
             << "     " << char(92) << "  /" << endl;
        cout << "    " << char(92) << "/"
             << "      " << char(92) << "/"
             << "       " << char(92) << "/" << endl;
      }
      match.time = cmps[3];
      int nrv = 0;
      string timp;
      for (int i = 0; i < match.time.size(); i++) {
        if (nrv == 2) {
          if (match.time[i] != ',') {
            timp.push_back(match.time[i]);
          } else {
            break;
          }
        }
        if (match.time[i] == ',') {
          nrv++;
        }
      }
      match.time = timp;
      match.text = cmps[4];
      bool ok = false;
      int knr = 0;
      if (match.text[0] == 'G' && match.text[1] == 'o' &&
          match.text[2] == 'a' && match.text[3] == 'l' &&
          match.text[4] == '!') {
        rez = "";
        for (int i = 7; i < 100; i++) {
          if (match.text[i] >= 48 && match.text[i] <= 57 && !ok) {
            knr++;
          }
          if (match.text[i] == ',') {
            rez.push_back(' ');
            match.text[i] = '-';
          }
          rez.push_back(match.text[i]);
          if (knr == 2) {
            break;
          }
        }
      }
      cout << "Time "
           << "[" << match.time << "]"
           << " Event: " << match.text << endl;
      t1 = match.team1;
      t2 = match.team2;
    } else if (nr ==
               2) { ////////////////////////////////////////////////////////////
      Match match;
      match.team1 = cmps[6];
      match.team2 = cmps[7];
      match.text = cmps[4];
      if (match.team1 != t1 && match.team1 != t2 ||
          match.team2 != t1 && match.team2 != t2) {
        if (s > 0) {
          cout << "Final Result: " << rez << endl;
        }
        s++;
        cout << match.team1 << "-" << match.team2 << endl;
        cout << "    ||      ||       ||" << endl;
        cout << "    ||      ||       ||" << endl;
        cout << "    ||      ||       ||" << endl;
        cout << "   " << char(92) << "  /"
             << "    " << char(92) << "  /"
             << "     " << char(92) << "  /" << endl;
        cout << "    " << char(92) << "/"
             << "      " << char(92) << "/"
             << "       " << char(92) << "/" << endl;
      }
      bool ok = false;
      int knr = 0;
      if (match.text[0] == 'G' && match.text[1] == 'o' &&
          match.text[2] == 'a' && match.text[3] == 'l' &&
          match.text[4] == '!') {
        rez = "";
        for (int i = 7; i < 100; i++) {
          if (match.text[i] >= 48 && match.text[i] <= 57 && !ok) {
            knr++;
          }
          if (match.text[i] == ',') {
            rez.push_back(' ');
            match.text[i] = '-';
          }
          rez.push_back(match.text[i]);
          if (knr == 2) {
            break;
          }
        }
      }
      t1 = match.team1;
      t2 = match.team2;
    } else if (nr == 3) {
      map<string, string> tap;
      Match match;
      match.team1 = cmps[6];
      match.team2 = cmps[7];
      match.text = cmps[4];
      int mts = match.text.size();
      string mt = match.text;
      vector<string> vmt;
      string ans;
      set<string> teams;
      set<string> players;
      string teamspecial;
      for (int i = 0; i < mts; i++) {
        if (mt[i] == '(') {
          i++;
          while (mt[i] != ')') {
            teamspecial.push_back(mt[i]);
            i++;
          }
          vmt.push_back(teamspecial);
        } else if (mt[i] != ' ') {
          ans.push_back(mt[i]);
        } else {
          vmt.push_back(ans);
          ans = "";
        }
      }
      for (int i = 1; i < vmt.size(); i++) {
        if (vmt[i] == match.team1) {
          string rez = vmt[i - 2] + ' ' + vmt[i - 1];
          teams.insert(match.team1);
          players.insert(rez);
          auto it = players.rbegin();
          string nush = *it + ' ';
          tap[match.team1] = tap[match.team1] + nush;
        } else if (vmt[i] == match.team2) {
          string rez = vmt[i - 2] + ' ' + vmt[i - 1];
          teams.insert(match.team2);
          players.insert(rez);
          auto it = players.rbegin();
          string nush = *it + ' ';
          tap[match.team2] = tap[match.team2] + nush;
        }
      }
      for (auto &[key, value] : tap) {
        cout << key << " => " << value << '\n';
      }
    }
  }

  return 0;
}
