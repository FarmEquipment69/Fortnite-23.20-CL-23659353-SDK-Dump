// Class /Script/FortniteGame.HeaderDescriptionHUDComponent
// Size: 0x730
class UHeaderDescriptionHUDComponent : public UWidgetComponent
{
	unsigned char bDesiredVisibility; // 0x6b8 (0x1)
	unsigned char bHUDAlreadyExists; // 0x6b8 (0x1)
	unsigned char unreflected_6b9[0x7]; // 0x6b9 (0x7) 
	struct FMulticastInlineDelegate OnHUDShow; // 0x6c0 (0x10)
	unsigned char unreflected_6d0[0x18]; // 0x6d0 (0x18) 
	struct FMulticastInlineDelegate OnWidgetUpdate; // 0x6e8 (0x10)
	class UUserWidget* LoadedHUDWidget; // 0x6f8 (0x8)
	unsigned char padding_700[0x30]; // 0x700 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.HeaderDescriptionHUDComponent.UpdateHUDWidget (Has no native function)
	void UpdateHUDWidget(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.HeaderDescriptionHUDComponent.PortalInteract (Underlying native function: PortalInteract 0x8783230)
	void PortalInteract(struct FPortalMatchmakingData& MatchmakingData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.HeaderDescriptionHUDComponent.LoadAndCreateHUDWidget (Underlying native function: LoadAndCreateHUDWidget 0x8781dfc)
	void LoadAndCreateHUDWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HeaderDescriptionHUDComponent.IsNewMatchmakingPortalUIEnabled (Underlying native function: IsNewMatchmakingPortalUIEnabled 0x8781a80)
	static bool IsNewMatchmakingPortalUIEnabled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.HeaderDescriptionHUDComponent.EnableTick (Underlying native function: EnableTick 0x877ee78)
	void EnableTick(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HeaderDescriptionHUDComponent.DisableTick (Underlying native function: DisableTick 0x877ed60)
	void DisableTick(); // (Final | Native | Public | BlueprintCallable)
};

