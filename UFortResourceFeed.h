// Class /Script/FortniteUI.FortResourceFeed
// Size: 0x340
class UFortResourceFeed : public UFortHUDElementWidget
{
	float ResourceGainedTime; // 0x2d0 (0x4)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	class UFortItemDefinition* CurrentItemDefinition; // 0x2d8 (0x8)
	unsigned char unreflected_2e0[0x28]; // 0x2e0 (0x28) 
	class UWidget* WidgetResourceCount; // 0x308 (0x8)
	class UWidget* WidgetResourceGained; // 0x310 (0x8)
	class UWidget* WidgetGlow; // 0x318 (0x8)
	class UFortSimpleWidgetAnimationsPanel* PanelAnimations; // 0x320 (0x8)
	class UImage* ImageResourceIcon; // 0x328 (0x8)
	class UTextBlock* TextResourceCount; // 0x330 (0x8)
	class UTextBlock* TextResourceGained; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortResourceFeed.OnWeakpointHit (Has no native function)
	void OnWeakpointHit(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortResourceFeed.OnResourceGained (Has no native function)
	void OnResourceGained(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortResourceFeed.OnFadeOut (Has no native function)
	void OnFadeOut(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortResourceFeed.HandleWeakpointHitFinished (Underlying native function: HandleWeakpointHitFinished 0xa88ec10)
	void HandleWeakpointHitFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortResourceFeed.HandleTimedOut (Underlying native function: HandleTimedOut 0xa88eb68)
	bool HandleTimedOut(float& InDeltaTime); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortResourceFeed.HandleResourceGainedFinished (Underlying native function: HandleResourceGainedFinished 0xa88e780)
	void HandleResourceGainedFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortResourceFeed.HandlePlayerVolumeChanged (Underlying native function: HandlePlayerVolumeChanged 0xa88e4c4)
	void HandlePlayerVolumeChanged(class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortResourceFeed.HandleItemPickedUp (Underlying native function: HandleItemPickedUp 0xa88e134)
	void HandleItemPickedUp(class UFortWorldItem*& WorldItem, int& Count); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortResourceFeed.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0xa88e020)
	void HandleGamePhaseChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortResourceFeed.HandleFadeOutFinished (Underlying native function: HandleFadeOutFinished 0xa88dfc0)
	void HandleFadeOutFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortResourceFeed.HandleDamagedResourceBuilding (Underlying native function: HandleDamagedResourceBuilding 0xa88dba8)
	void HandleDamagedResourceBuilding(class ABuildingSMActor*& InBuildingSMActor, class UFortItem*& InItem, bool& bDestroyed, bool& bJustHitWeakspot); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortResourceFeed.HandleDamagedResourceActor (Underlying native function: HandleDamagedResourceActor 0xa88d664)
	void HandleDamagedResourceActor(class AActor*& InActor, class UFortItem*& InItem, bool& bDestroyed, bool& bJustHitWeakspot); // (Final | Native | Private)
};

