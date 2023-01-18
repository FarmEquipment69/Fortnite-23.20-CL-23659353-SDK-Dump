// Class /Script/EngineSettings.GameMapsSettings
// Size: 0xf0
class UGameMapsSettings : public UObject
{
	struct FString LocalMapOptions; // 0x28 (0x10)
	struct FSoftObjectPath TransitionMap; // 0x38 (0x18)
	bool bUseSplitscreen; // 0x50 (0x1)
	struct TEnumAsByte<ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout; // 0x51 (0x1)
	struct TEnumAsByte<EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout; // 0x52 (0x1)
	enum EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53 (0x1)
	bool bOffsetPlayerGamepadIds; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct FSoftClassPath GameInstanceClass; // 0x58 (0x18)
	struct FSoftObjectPath GameDefaultMap; // 0x70 (0x18)
	struct FSoftObjectPath ServerDefaultMap; // 0x88 (0x18)
	struct FSoftClassPath GlobalDefaultGameMode; // 0xa0 (0x18)
	struct FSoftClassPath GlobalDefaultServerGameMode; // 0xb8 (0x18)
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // 0xd0 (0x10)
	struct TArray<struct FGameModeName> GameModeClassAliases; // 0xe0 (0x10)

	/* Functions */

	// Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1 (Underlying native function: SetSkipAssigningGamepadToPlayer1 0x9599410)
	void SetSkipAssigningGamepadToPlayer1(bool& bSkipFirstPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1 (Underlying native function: GetSkipAssigningGamepadToPlayer1 0x95993fc)
	bool GetSkipAssigningGamepadToPlayer1(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings (Underlying native function: GetGameMapsSettings 0x95993cc)
	static class UGameMapsSettings* GetGameMapsSettings(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

