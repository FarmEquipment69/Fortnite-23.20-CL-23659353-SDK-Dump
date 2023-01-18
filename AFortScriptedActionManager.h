// Class /Script/FortniteGame.FortScriptedActionManager
// Size: 0x2f0
class AFortScriptedActionManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class AFortScriptedAction*> ActiveScriptedActions; // 0x290 (0x10)
	struct TArray<struct FFortAvailableScriptedAction> AvailableScriptedActions; // 0x2a0 (0x10)
	struct TArray<struct FFortAvailableScriptedAction> PendingAvailableScriptedActions; // 0x2b0 (0x10)
	struct TArray<struct FFortClientEventName*> PendingClientEvents; // 0x2c0 (0x10)
	bool bIsProcessingClientEvent; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x1f]; // 0x2d1 (0x1f)

	/* Functions */

	// Function /Script/FortniteGame.FortScriptedActionManager.HandleClientEvent_Undefined (Underlying native function: HandleClientEvent_Undefined 0x1c4c840)
	void HandleClientEventUndefined(class UObject*& EventSource, class UObject*& EventFocus, struct FFortClientEvent& ClientEvent); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)
};

