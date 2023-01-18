// Class /Script/FortniteGame.FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals
// Size: 0x60
class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed; // 0x30 (0x10)
	unsigned char unreflected_40[0x8]; // 0x40 (0x8) 
	class UFortItem* Item; // 0x48 (0x8)
	unsigned char padding_50[0x10]; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.SetupPrefabVisuals (Underlying native function: SetupPrefabVisuals 0x8a08c88)
	static class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals* SetupPrefabVisuals(class APartyDisplayManager*& Target, class UFortItem*& Item, struct FGuid& RequestId); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.OnRequestedCustomizationComplete (Underlying native function: OnRequestedCustomizationComplete 0x8a084e0)
	void OnRequestedCustomizationComplete(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.OnPreviousCustomizationComplete (Underlying native function: OnPreviousCustomizationComplete 0x8a08460)
	void OnPreviousCustomizationComplete(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.OnItemDisplayReady (Underlying native function: OnItemDisplayReady 0x8a07f94)
	void OnItemDisplayReady(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_PartyDisplayManager_SetupPrefabVisuals.Delegate__DelegateSignature (Has no native function)
	void DelegateDelegateSignature(class UFortItem*& Item, struct FGuid& RequestId); // (MulticastDelegate | Public | Delegate | HasDefaults)
};

