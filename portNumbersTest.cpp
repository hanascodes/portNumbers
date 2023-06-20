#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <locale>

using namespace std;

struct Question {
    string protocol;
    int port;
    string tcpOrUdp;
};

// Function to read questions from a file
vector<Question> readQuestionsFromFile() {
    string filePath = "/Users/hana/Desktop/uni/CiscoAcademy/questions.txt";  // Update the file path accordingly
    ifstream inputFile(filePath);
    vector<Question> questions;

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            Question question;
            question.protocol = line;
            inputFile >> question.port >> question.tcpOrUdp;
            inputFile.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in the line
            questions.push_back(question);
        }

        inputFile.close();
    } else {
        cout << "Failed to open the file: questions.txt" << endl;
    }

    return questions;
}

// Function to randomize the order of questions
void randomizeQuestions(vector<Question>& questions) {
    random_device rd;
    mt19937 generator(rd());
    shuffle(questions.begin(), questions.end(), generator);
}

// Function to convert a string to lowercase
string toLowercase(const string& str) {
    string result;
    locale loc;
    for (char c : str) {
        result += tolower(c, loc);
    }
    return result;
}

int main() {
    vector<Question> questions = readQuestionsFromFile();
    randomizeQuestions(questions);

    int pointCounter = 0;

    cout << "Note: if the protocol uses both TCP and UDP, just type in \"both\"" << endl;

    for (const auto& question : questions) {
        cout << question.protocol << endl;
        int numberOfPort;
        string tcpOrUdp;

        cin >> numberOfPort;
        cout << "TCP or UDP?" << endl;
        cin >> tcpOrUdp;

        // Convert user input to lowercase for case-insensitive comparison
        string tcpOrUdpLower = toLowercase(tcpOrUdp);
        string questionTcpOrUdpLower = toLowercase(question.tcpOrUdp);

        if (numberOfPort == question.port && (tcpOrUdpLower == questionTcpOrUdpLower || tcpOrUdpLower == "both")) {
            cout << "That is correct!" << endl;
            pointCounter++;
        } else {
            cout << "Incorrect." << endl;
        }
    }

    cout << "You got " << pointCounter << " points on this test!" << endl;

    return 0;
}

/*
 made by ChatGPT
 */
