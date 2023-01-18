// BlueprintGeneratedClass /Game/Maps/Frontend.Frontend_C
// Size: 0x2b8
class AFrontend_C : public AFortLevelScriptActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a0 (0x8)
	bool NewLobby; // 0x2a8 (0x1)
	bool NewVar0; // 0x2a9 (0x1)
	unsigned char unreflected_2aa[0x6]; // 0x2aa (0x6) 
	class AHBOnboardingFlow_C* HBOnboardingFlowExecuteUbergraphFrontendRefProperty; // 0x2b0 (0x8)

	/* Functions */

	// Function /Game/Maps/Frontend.Frontend_C.PlaySpeech (Has no native function)
	void PlaySpeech(struct FString& Filename, int& SampleRate, class USoundWave*& AssetFile, class APlayerController*& CallFuncGetPlayerControllerReturnValue, class AFortPlayerControllerFrontEnd*& K2NodeDynamicCastAsFortPlayerControllerFrontEnd, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Maps/Frontend.Frontend_C.OnMatchStarted (Has no native function)
	void OnMatchStarted(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Maps/Frontend.Frontend_C.EnableTutorial (Has no native function)
	void EnableTutorial(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Maps/Frontend.Frontend_C.ExecuteUbergraph_Frontend (Has no native function)
	void ExecuteUbergraphFrontend(int& EntryPoint); // (Final | 0x00008000)
};

