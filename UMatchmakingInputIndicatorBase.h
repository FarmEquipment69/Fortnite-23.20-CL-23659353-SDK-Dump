// Class /Script/FortniteUI.MatchmakingInputIndicatorBase
// Size: 0x2d8
class UMatchmakingInputIndicatorBase : public UCommonUserWidget
{
	enum EMatchmakingInputSource InputSource; // 0x290 (0x1)
	bool bShowLocalInputOnlyWhenDifferentFromDefault; // 0x291 (0x1)
	bool bShowRemoteInputOnlyWhenDifferentFromDefault; // 0x292 (0x1)
	unsigned char unreflected_293[0x5]; // 0x293 (0x5) 
	struct FUniqueNetIdRepl RemotePlayerUniqueId; // 0x298 (0x30)
	enum ECommonInputType LastInputType; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x7]; // 0x2c9 (0x7) 
	class USizeBox* SizeBoxHotfixVisibility; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.MatchmakingInputIndicatorBase.SetRemotePlayer (Underlying native function: SetRemotePlayer 0xa84bc2c)
	void SetRemotePlayer(struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.MatchmakingInputIndicatorBase.OnInputSourceTypeChanged (Has no native function)
	void OnInputSourceTypeChanged(enum ECommonInputType& InputType); // (Event | Protected | BlueprintEvent)
};

