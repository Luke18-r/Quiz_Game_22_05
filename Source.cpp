#include <iostream>


using namespace std;
int main() {

	std::string questions[] = { "1. What car does Elon Musk created?: ",
								 "2. What is EU stand for?: ",
								 "3. What is the speed of light?: ",
								 "4. What is the biggest organ in the human body?" };

	std::string options[][4] = { {"A. Mustang", "B. Tesla", "C. Volvo", "D. SAAB"},
								{"A. European Union ", "B.Enlargement Union ", "C. Everest Unified", "D. Enlighment Unit"},
								{"A. 299 999 Km/s", "B. 300 000 Km/s", "C. -200 0000 Km/s", "D. 300 000 m/s"},
								{"A. Skin", "B. Eye", "C. Colon", "D. Leg"} };

	char answerKey[] = { 'B', 'A', 'B', 'A' };

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score=0;

	for (int i = 0; i < size; i++) {
		std::cout << "*******************************\n";
		std::cout << questions[i] << '\n';
		std::cout << "*******************************\n";

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
			std::cout << options[i][j] << '\n';
		}

		std::cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i]) {
			std::cout << "CORRECT\n";
			score++;
		}
		else {
			std::cout << "WRONG!\n";
			std::cout << "Answer: " << answerKey[i] << '\n';
		}
	}
	std::cout << "*******************************\n";
	std::cout << "*        ~~~RESULTS~~~        *\n";
	std::cout << "*******************************\n";
	std::cout << "CORRECT GUESSES: " << score << '\n';
	std::cout << "Total numaber of questions: " << size << '\n';
	std::cout << "SCORE: " << (score / (double)size) * 100 << "%";

	return 0;
}