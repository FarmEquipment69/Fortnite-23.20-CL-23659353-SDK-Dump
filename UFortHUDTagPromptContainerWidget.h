// Class /Script/FortniteUI.FortHUDTagPromptContainerWidget
// Size: 0x3d8
class UFortHUDTagPromptContainerWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UFortHUDTagPromptTagMapping* TagMappingData; // 0x310 (0x8)
	float CoolDownTime; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	struct FMulticastInlineDelegate OnOpenedOrClosed; // 0x320 (0x10)
	struct TMap<struct FGameplayTag, float> TagToTimeMap; // 0x330 (0x50)
	struct FFortHUDTagPromptData PromptDataToShow; // 0x380 (0x48)
	class UOverlay* OverlayWidget; // 0x3c8 (0x8)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x3d0 (0x2)
	unsigned char padding_3d2[0x6]; // 0x3d2 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDTagPromptContainerWidget.RequestPromptDataActivation (Underlying native function: RequestPromptDataActivation 0xa6dad18)
	void RequestPromptDataActivation(struct FFortHUDTagPromptData& PromptData, struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortHUDTagPromptContainerWidget.OpenWidget (Underlying native function: OpenWidget 0xa6da420)
	void OpenWidget(struct FFortHUDTagPromptData& PrompData); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortHUDTagPromptContainerWidget.OnWidgetBaseOpenedOrClosed (Underlying native function: OnWidgetBaseOpenedOrClosed 0xa6da380)
	void OnWidgetBaseOpenedOrClosed(bool& bNewlyOpened); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortHUDTagPromptContainerWidget.CloseWidget (Underlying native function: CloseWidget 0xa6d7688)
	void CloseWidget(); // (Final | Native | Public | BlueprintCallable)
};

