// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
// Size: 0x128
class UCreativeRoyalePlayspaceComponent_LoadingScreen : public UPlayspaceComponent_LoadingScreen
{
	bool bShouldDisplayLoadingScreenDuringPostGame; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FText PlotNotFinishedLoadingContext; // 0xa8 (0x18)
	struct FText MinigameResetContext; // 0xc0 (0x18)
	unsigned char unreflected_d8[0x18]; // 0xd8 (0x18) 
	struct FScalableFloat FailsafeTimeoutLength; // 0xf0 (0x28)
	unsigned char padding_118[0x10]; // 0x118 (0x10)

	/* Functions */

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlotLoadComplete (Underlying native function: OnPlotLoadComplete 0x7306aec)
	void OnPlotLoadComplete(); // (Final | Native | Private)

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlayspaceUserAdded (Underlying native function: OnPlayspaceUserAdded 0x73069f0)
	void OnPlayspaceUserAdded(struct FPlayspaceUser& AddedUser); // (Final | Native | Private | HasOutParms)

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0x7306388)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)
};

