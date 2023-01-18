// Class /Script/FortniteUI.FortFrontendLevelScriptActor
// Size: 0x2f0
class AFortFrontendLevelScriptActor : public AFortLevelScriptActor
{
	struct TWeakObjectPtr<class AFortItemPreviewPedestal> CommanderPreviewPedestalActor; // 0x2a0 (0x28)
	struct TWeakObjectPtr<class AFortItemPreviewPedestal> HeroLoadoutPreviewPedestalActor; // 0x2c8 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortFrontendLevelScriptActor.GetHeroLoadoutPreviewPedestalActor (Underlying native function: GetHeroLoadoutPreviewPedestalActor 0xa73c26c)
	struct TWeakObjectPtr<class AFortItemPreviewPedestal> GetHeroLoadoutPreviewPedestalActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortFrontendLevelScriptActor.GetFrontendLevelScript (Underlying native function: GetFrontendLevelScript 0xa73c188)
	static class AFortFrontendLevelScriptActor* GetFrontendLevelScript(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortFrontendLevelScriptActor.GetCommanderPreviewPedestalActor (Underlying native function: GetCommanderPreviewPedestalActor 0xa73c050)
	struct TWeakObjectPtr<class AFortItemPreviewPedestal> GetCommanderPreviewPedestalActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

