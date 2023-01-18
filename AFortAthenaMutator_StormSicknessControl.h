// Class /Script/FortniteGame.FortAthenaMutator_StormSicknessControl
// Size: 0x3a0
class AFortAthenaMutator_StormSicknessControl : public AFortAthenaMutator
{
	struct TArray<struct FStormSicknessOptions> OptionsQueue; // 0x330 (0x10)
	struct FScalableFloat IsEnabled; // 0x340 (0x28)
	struct FScalableFloat IsResetWarnAndSicknessAllowedOnDeath; // 0x368 (0x28)
	struct FMulticastInlineDelegate OnStormSicknessOptionsUpdated; // 0x390 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_StormSicknessControl.EnqueueStormSickenessOptions (Underlying native function: EnqueueStormSickenessOptions 0x8504c20)
	void EnqueueStormSickenessOptions(struct FStormSicknessOptions& StormOptions); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_StormSicknessControl.DequeueStormSickenessOptions (Underlying native function: DequeueStormSickenessOptions 0x8504b58)
	void DequeueStormSickenessOptions(class AActor*& ModSource, bool& bShouldUpdate); // (Final | Native | Public | BlueprintCallable)
};

