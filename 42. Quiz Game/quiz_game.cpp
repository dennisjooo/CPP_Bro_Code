#include <iostream>

int main(){

    std::string questions[] = {"What is the capital of France?", 
                               "What is the capital of Germany?", 
                               "What is the capital of Italy?", 
                               "What is the capital of Spain?", 
                               "What is the capital of Portugal?"};

    std::string options[][4] = {{"A. Paris", "B. London", "C. Berlin", "D. Rome"}, 
                                {"A. Berlin", "B. Paris", "C. London", "D. Rome"}, 
                                {"A. Rome", "B. Berlin", "C. Paris", "D. London"}, 
                                {"A. Madrid", "B. Barcelona", "C. Rome", "D. Berlin"}, 
                                {"A. Lisbon", "B. Madrid", "C. Barcelona", "D. Rome"}};

    char answers[] = {'A', 'A', 'A', 'A', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    int options_size = sizeof(options[0]) / sizeof(options[0][0]);

    char guess;

    int score = 0;

    for (int i = 0; i < size; i++){
        std::cout << questions[i] << std::endl;

        for (int j = 0; j < options_size; j++){
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "Enter your answer: ";
        std::cin >> guess;

        guess = toupper(guess);

        if (guess == answers[i]){
            std::cout << "Correct!\n" << std::endl;
            score++;
        } else {
            std::cout << "Incorrect!\n" << std::endl;
        }
    }
    
    std::cout << "Your score is: " << score << std::endl;
    
    return 0;
}