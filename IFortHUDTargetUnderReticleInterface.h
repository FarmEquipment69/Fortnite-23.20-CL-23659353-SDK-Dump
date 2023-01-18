// Class /Script/FortniteGame.FortHUDTargetUnderReticleInterface
// Size: 0x28
class IFortHUDTargetUnderReticleInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetUpgradeDisplayName (Underlying native function: GetHUDTargetUpgradeDisplayName 0x8f7bf34)
	struct FText GetHUDTargetUpgradeDisplayName(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetHealthPercentage (Underlying native function: GetHUDTargetHealthPercentage 0x8f7bf0c)
	float GetHUDTargetHealthPercentage(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDisplayName (Underlying native function: GetHUDTargetDisplayName 0x89d2118)
	struct FText GetHUDTargetDisplayName(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDisplayModifiers (Underlying native function: GetHUDTargetDisplayModifiers 0x8f7bed0)
	struct TArray<struct FText> GetHUDTargetDisplayModifiers(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDifficultyRating (Underlying native function: GetHUDTargetDifficultyRating 0x80a48fc)
	float GetHUDTargetDifficultyRating(); // (Native | Public | BlueprintCallable)
};

