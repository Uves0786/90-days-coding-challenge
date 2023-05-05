
class Solution {

public:

    string predictPartyVictory(string senate) {

        int cntR = 0, cntD = 0, totalR = 0, totalD = 0;

        queue<char> q;

        for(char c : senate) {

            q.push(c);

            if(c == 'R') totalR++;

            else totalD++;

        }

        

        while(q.size() > 1) {

            char c = q.front(); q.pop();

            if(c == 'R') {

                if(cntR > 0) {

                    cntR--;

                    continue;

                }

                q.push('R');

                cntD++;

            }

            else {

                if(cntD > 0) {

                    cntD--;

                    continue;

                }

                q.push('D');

                cntR++;

            }

            if(cntR > totalD) return "Dire";

            if(cntD > totalR) return "Radiant";

        }

        return q.front() == 'R' ? "Radiant" : "Dire";

    }

};

    
