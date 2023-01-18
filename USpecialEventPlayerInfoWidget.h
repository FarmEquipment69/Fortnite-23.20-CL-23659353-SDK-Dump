// Class /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
// Size: 0x2f0
class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	struct FMulticastInlineDelegate OnRepresentedPlayerStateChanged; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x8]; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState (Underlying native function: GetRepresentedPlayerState 0x76cbd9c)
	class AFortPlayerStateAthena* GetRepresentedPlayerState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

