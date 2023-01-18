// Class /Script/FortniteUI.AthenaLevelEffects
// Size: 0x2f0
class UAthenaLevelEffects : public UCommonUserWidget
{
	struct TArray<struct FLevelEffectsData> EffectsData; // 0x290 (0x10)
	struct TArray<struct FName> FlameMaterialParameters; // 0x2a0 (0x10)
	struct FVector2D FlameMaterialRandomRange; // 0x2b0 (0x10)
	class UCommonBorder* BorderContainer; // 0x2c0 (0x8)
	class UCommonTextBlock* TextLvlDesc; // 0x2c8 (0x8)
	class UCommonTextBlock* TextLevel; // 0x2d0 (0x8)
	class UCommonLazyImage* LazyImageFlame; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x10]; // 0x2e0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLevelEffects.SetPlayerState (Underlying native function: SetPlayerState 0xa50b720)
	void SetPlayerState(class AFortPlayerStateAthena*& InPSA); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaLevelEffects.OverridePlayerLevel (Underlying native function: OverridePlayerLevel 0xa50b594)
	void OverridePlayerLevel(int& PlayerLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaLevelEffects.BP_HandleEffectsLevelChanged (Has no native function)
	void BPHandleEffectsLevelChanged(int& EffectsLevel); // (Event | Protected | BlueprintEvent)
};

