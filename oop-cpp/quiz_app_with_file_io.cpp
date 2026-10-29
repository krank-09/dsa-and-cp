// Small quiz program: questions in a class, saved to a file, scored.

#include<iostream>
#include<fstream>
using namespace std;
class Question{
    // options,diplayquestion()
    // evaluate(to check if the answer is correct)
    int tscore = 0, catt = 0, incatt = 0;
    int fscore = 0;
    string questiontext[10];
    string options[10][4];
    string correct[10];
    ofstream questionfile;
    public:
    Question() : questionfile("questions.txt", ios::out) {}
    void dispquest(){
        ifstream questionfile("questions.txt", std::ios::in);
        if (!questionfile.is_open()) {
            cout << "Error: Unable to open the file." << "\n";
            return;
        }
        string line;
        int count = 0;
        while (getline(questionfile, line) && count < 5) {
            cout << line << endl;
            count++;
        }
        questionfile.close();
    }
    void correctopt(string a){

    }
    int evaluate(string a){
        ifstream questionfile("questions.txt", ios::in);
        if (!questionfile.is_open()) {
            cout << "Error: Unable to open the file." << "\n";
            return -1;
        }
        string line;
        int count = 0;
        while (getline(questionfile, line) && count < 5) {
            if (line == a) {
                cout << "Correct answer!" << "\n";
                tscore++;
                catt++;
                return 1;
            }
            count++;
        }
        cout << "Wrong answer!" << "\n";
        incatt++;
        questionfile.close();
        return 0;
    }
};
int main(){
    string name; cout << "Enter your name: "; cin >> name;
    
}