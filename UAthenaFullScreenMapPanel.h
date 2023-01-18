// Class /Script/FortniteUI.AthenaFullScreenMapPanel
// Size: 0x5b8
class UAthenaFullScreenMapPanel : public UAthenaFullScreenMapBase
{
	unsigned char unreflected_528[0x18]; // 0x528 (0x18) 
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x540 (0x50)
	struct TWeakObjectPtr<class UClass> SoftGameInfoClass; // 0x590 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.AthenaFullScreenMapPanel.OnTransistionedFromAnotherMapPanel (Has no native function)
	void OnTransistionedFromAnotherMapPanel(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenMapPanel.OnMapGameInfoWidgetCreated (Has no native function)
	void OnMapGameInfoWidgetCreated(class UUserWidget*& Widget); // (Event | Protected | BlueprintEvent)
};

