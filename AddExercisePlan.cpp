#include "AddExercisePlan.h"

#include <Windows.h>

using namespace GymSystem; // This is your project name

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew AddExercisePlan());

	return 0;
}