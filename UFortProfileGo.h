// Class /Script/FortniteGame.FortProfileGo
// Size: 0x5d0
class UFortProfileGo : public UObject
{
	unsigned char unreflected_28[0xf0]; // 0x28 (0xf0) 
	struct TArray<struct FProfileGoScenario> ProfileGoScenarios; // 0x118 (0x10)
	struct TArray<struct FProfileGoGeneratedScenario> ProfileGoGeneratedScenarios; // 0x128 (0x10)
	struct TArray<struct FProfileGoCollection> ProfileGoCollections; // 0x138 (0x10)
	struct TArray<struct FProfileGoCommand> ProfileGoCommands; // 0x148 (0x10)
	struct TArray<struct FString> AnimProfilingAssetsBlacklist; // 0x158 (0x10)
	struct TArray<struct FString> AnimProfilingCosmeticsWhitelist; // 0x168 (0x10)
	float DefaultSettleTime; // 0x178 (0x4)
	unsigned char padding_17c[0x454]; // 0x17c (0x454)

	/* Functions */

	// Function /Script/FortniteGame.FortProfileGo.WaitForCommandComplete (Underlying native function: WaitForCommandComplete 0x8f7dd5c)
	void WaitForCommandComplete(float& MaxWaitSeconds); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortProfileGo.ReceiveOnFinishedCharacterCustomization (Underlying native function: ReceiveOnFinishedCharacterCustomization 0x8f7d7a4)
	void ReceiveOnFinishedCharacterCustomization(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortProfileGo.MarkCommandComplete (Underlying native function: MarkCommandComplete 0x8f7d5c4)
	void MarkCommandComplete(); // (Final | Native | Protected)
};

