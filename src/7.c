
// This program will generate a random number between 1 and 100 inclusive

int main() {
	srand(time(NULL));
	return rand() % 100 + 1;
}