// Class /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
// Size: 0x98
class UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnMessageReceived; // 0x30 (0x10)
	struct FMulticastInlineDelegate HandleSavedState; // 0x40 (0x10)
	struct FMulticastInlineDelegate HandleStateCleared; // 0x50 (0x10)
	unsigned char padding_60[0x38]; // 0x60 (0x38)

	/* Functions */

	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.Unregister (Underlying native function: Unregister 0x28b2a48)
	void Unregister(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver (Underlying native function: RegisterGameplayMessageReceiver 0x70a2cac)
	static class UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(class UObject*& WorldContextObject, struct FEventMessageTag& Channel, class UScriptStruct*& PayloadType, enum EGameplayMessageMatchType& MatchType, class AActor*& ActorContext); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload (Underlying native function: GetPayload 0x70a288c)
	bool GetPayload(int& OutPayload); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

