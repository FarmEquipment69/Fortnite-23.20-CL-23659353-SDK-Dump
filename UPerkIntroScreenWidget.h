// Class /Script/FortniteUI.PerkIntroScreenWidget
// Size: 0x300
class UPerkIntroScreenWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnPerkIntroFinishedEvent; // 0x290 (0x10)
	struct TArray<struct FPerkPipData> PreviousPerkPipData; // 0x2a0 (0x10)
	struct TArray<struct FPerkPipData> NewPerkPipData; // 0x2b0 (0x10)
	struct TArray<struct FPerkPipData> PerkPipData; // 0x2c0 (0x10)
	struct FRoundTechDataCache StartRoundCache; // 0x2d0 (0x28)
	struct FGameplayTag FactionTag; // 0x2f8 (0x4)
	unsigned char padding_2fc[0x4]; // 0x2fc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.PerkIntroScreenWidget.StartPerkScreenIntro (Underlying native function: StartPerkScreenIntro 0x7570aa8)
	void StartPerkScreenIntro(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.PerkIntroScreenWidget.PerkIntroFinished (Underlying native function: PerkIntroFinished 0xa580044)
	void PerkIntroFinished(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.PerkIntroScreenWidget.GatherPerkPipData (Underlying native function: GatherPerkPipData 0x756d618)
	void GatherPerkPipData(); // (Native | Public | BlueprintCallable)
};

