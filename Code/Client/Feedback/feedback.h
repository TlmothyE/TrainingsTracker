#ifndef UNTITLED7_FEEDBACK_H
#define UNTITLED7_FEEDBACK_H

#include <string>

class Feedback {
private:
    double start_ = 0;
    double end_ = 0;
    double duration_ = 0;
    int intensity_ = 0;

protected:
    //creates file and saves users input in file associated to specific Training object
    void giveFeedback(double time, int intensity, std::string text);

    //opens file user wishes to read associated to specific Training object
    void readFeedback(std::string filename);

    //sets Duration
    double setDuration(double sessionBegins, double sessionEnds);

    //sets Intensity
    int setIntensity(int intense);

public:
    //calls readFeedback
    Feedback(std::string filename);

    //initialises private members and calculates duration
    Feedback(double sessionBegins, double sessionEnds, int intense);

    //initialises private members, calculates duration and calls giveFeedback
    Feedback(double sessionBegins, double sessionEnds, int intense, std::string text);

};

#endif //UNTITLED7_FEEDBACK_H
