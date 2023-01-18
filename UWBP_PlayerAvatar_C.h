// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C
// Size: 0x311
class UWBP_PlayerAvatar_C : public UFortPlayerAvatar
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x278 (0x8)
	class USpacer* SpacerSize; // 0x280 (0x8)
	class UMaterialInstanceDynamic* AvatarMaterial; // 0x288 (0x8)
	struct FVector2D AvatarSize; // 0x290 (0x10)
	struct FLinearColor PresenceSelectOnline; // 0x2a0 (0x10)
	struct FLinearColor PresenceSelectAway; // 0x2b0 (0x10)
	struct FLinearColor PresenceSelectOffline; // 0x2c0 (0x10)
	struct FLinearColor PresenceSelectBlocked; // 0x2d0 (0x10)
	struct FLinearColor PresenceColorOnline; // 0x2e0 (0x10)
	struct FLinearColor PresenceColorAway; // 0x2f0 (0x10)
	struct FLinearColor PresenceColorOffline; // 0x300 (0x10)
	bool ShowOnlinePresence; // 0x310 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.OnOnlinePresenceChanged (Has no native function)
	void OnOnlinePresenceChanged(bool& bHidePresence, enum EPresenceIndicatorState& PresenceState); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.Event Set Size (Has no native function)
	void EventSetSize(struct FVector2D& NewSize); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.ExecuteUbergraph_WBP_PlayerAvatar (Has no native function)
	void ExecuteUbergraphWBPPlayerAvatar(int& EntryPoint, float& TemprealVariable, enum EPresenceIndicatorState& TempbyteVariable, bool& TempboolVariable, float& TemprealVariable1, float& TemprealVariable2, float& K2NodeSelectDefault, float& TemprealVariable3, bool& K2NodeEventbHidePresence, enum EPresenceIndicatorState& K2NodeEventPresenceState, bool& CallFuncNotPreBoolReturnValue, bool& TempboolVariable1, enum EPresenceIndicatorState& TempbyteVariable1, struct FLinearColor& K2NodeSelectDefault1, struct FLinearColor& K2NodeSelectDefault2, struct FVector2D& K2NodeCustomEventNewSize, bool& K2NodeEventIsDesignTime, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, struct FSlateBrush& K2NodeMakeStructSlateBrush, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1, bool& CallFuncBooleanANDReturnValue, float& K2NodeSelectDefault3); // (Final | 0x00008000 | HasDefaults)
};

