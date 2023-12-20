#include <iostream>

int main(){
    std::string questions[] = {"1. Where is the eiffel Tower?: ",
                                "2. is Earth Flat?: ",
                                "3. Who is the predecessor of C++?: ",
                                "4. What year was C++ created?: "};
    
    std::string options[][4] = {{"A. USA", "B. France", "C. Spain", "D. Italy"},
                                {"A. Yes", "B. No", "C. sometimes", "D. whats Earth?"},
                                {"A. python", "B. C--", "C. C#", "D. C"},
                                {"A. 1989", "B. 1975", "C. 1985", "D. 1983"}}; 

    char answerKey[] = {'B', 'B', 'D', 'C'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "*****************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*****************\n";
        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++ ){
            std::cout << options[i][j] << '\n';
            
        };
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct!" << '\n';
            score++;

        } else {
            std::cout << "Wrong!" << '\n';
            std::cout << "Correct Answer = " << answerKey[i] << '\n';
        }
    }

        std::cout << "*****************\n";
        std::cout << "*     Results    *" << '\n';
        std::cout << "*****************\n";
        std::cout << "Correct Guesses: " << score << '\n';
        std::cout << "Number of Questions: " << size << '\n';
        std::cout << "Score:  " << (score/(double)(size)) * 100 << "%\n";





    return 0;
}