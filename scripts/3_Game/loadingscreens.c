const string LOADING_SCREENS_PATH = "ThePathFinder/data/ThePathFinderLoadingscreen/CustomLoading"; // Change this to the path of your edds files + file names sans the number. Loading Screens must be named "CustomLoading1.edds", "CustomLoading2.edds", etc 
//Use Workbench to convert .tga files to .edds. Simply add the .tga files to the dir you wish, right click, and "Register Resource and import" 
const int LOADING_SCREENS_COUNT = 1; // The Amount of loading screens you are adding
modded class LoadingScreen 
{
	override void Show()
	{
		m_Backgrounds.Clear(); //If you want to use *only* your screens, uncomment this. If you want to simply add to the existing loading screens, you can keep this commented. 
		for (int i = 0; i < LOADING_SCREENS_COUNT; i++) {
			m_Backgrounds.Insert(new ExpansionLoadingScreenBackground(LOADING_SCREENS_PATH + (i + 1) + ".edds"));
		}
		super.Show();
	}
}
modded class LoginQueueBase 
{
	override Widget Init()
	{
		super.Init();
		//m_Backgrounds.Clear(); //If you want to use *only* your screens, uncomment this. If you want to simply add to the existing loading screens, you can keep this commented. 
		for (int i = 0; i < LOADING_SCREENS_COUNT; i++) {
			m_Backgrounds.Insert(new ExpansionLoadingScreenBackground(LOADING_SCREENS_PATH + (i + 1) + ".edds"));
		}
		return super.Init();m_Backgrounds.Clear();
	}
}
modded class LoginTimeBase 
{
	override Widget Init()
	{
		super.Init();
		//m_Backgrounds.Clear(); //If you want to use *only* your screens, uncomment this. If you want to simply add to the existing loading screens, you can keep this commented. 
		for (int i = 0; i < LOADING_SCREENS_COUNT; i++) {
			m_Backgrounds.Insert(new ExpansionLoadingScreenBackground(LOADING_SCREENS_PATH + (i + 1) + ".edds"));
		}
		return super.Init();m_Backgrounds.Clear();
	}
}