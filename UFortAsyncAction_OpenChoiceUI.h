// Class /Script/FortniteGame.FortAsyncAction_OpenChoiceUI
// Size: 0x90
class UFortAsyncAction_OpenChoiceUI : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	class AFortPlayerController* PlayerController; // 0x50 (0x8)
	struct FChoiceData ChoiceItems; // 0x58 (0x30)
	unsigned char padding_88[0x8]; // 0x88 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_OpenChoiceUI.OpenChoiceUI (Underlying native function: OpenChoiceUI 0x8f7d654)
	static class UFortAsyncAction_OpenChoiceUI* OpenChoiceUI(class AFortPlayerController*& PlayerController, struct FChoiceData& ChoiceItems); // (Final | Native | Static | Public | BlueprintCallable)
};

