#include <iostream>
#include <fstream>
#include "feedback.h"

using namespace std;

Feedback::Feedback(string filename) {
    readFeedback(filename);
}

Feedback::Feedback(double sessionBegins, double sessionEnds, int intense)
{
    setDuration(sessionBegins, sessionEnds);
    setIntensity(intense);
}

Feedback::Feedback(double sessionBegins, double sessionEnds, int intense, std::string text)
{
    double time = setDuration(sessionBegins, sessionEnds);
    int intensity = setIntensity(intense);
    giveFeedback(time, intensity, text);


}

double Feedback::setDuration(double sessionBegins, double sessionEnds)
{
    start_ = sessionBegins;
    end_ = sessionEnds;
    duration_ = start_ - end_; //calculates time session
    return duration_;
}

int Feedback::setIntensity (int intense)
{
    intensity_ = intense;
    return intensity_;
}

void Feedback::giveFeedback(double time, int intensity, string text) {
    string filename;

    //gets the filename/Feedback Title of User and names creating file
    cout << "Enter Feedback Title: " << endl;
    getline(cin, filename);

    //creates file and opens it for writing
    ofstream file(filename);

    //error handling
    if (!file.good()) {
        cerr << filename << "cannot be created! Program terminates here!\n";
    } else {
        file << text << endl; //Users input in file
        file << "Training session: " << time << '\n' << "Training intensity: " << intensity << '\n';
        file.close();
    }

}

void Feedback::readFeedback(string filename) {

    //Open file for reading
    ifstream source(filename);
    cout << "Feedback of " << filename << "is: \n";

    //error handling
    while(source.good())
    {
        string line;
        getline(source, line); //reads line
        cout << line << endl;
    }
    source.close();
}
