// Class /Script/FortniteGame.PrimitiveModularCrosstalkInterface
// Size: 0x28
class IPrimitiveModularCrosstalkInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.UnbindObjectCallbacksFromAllTaggedDelegates (Underlying native function: UnbindObjectCallbacksFromAllTaggedDelegates 0x80ae224)
	void UnbindObjectCallbacksFromAllTaggedDelegates(class UObject*& Object); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.UnbindNoParamEventFromTaggedDelegate (Underlying native function: UnbindNoParamEventFromTaggedDelegate 0x80ae154)
	void UnbindNoParamEventFromTaggedDelegate(struct FName& DelegateTag, class UObject*& Object); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTaggedStringPayload (Underlying native function: SendTaggedStringPayload 0x80ade94)
	void SendTaggedStringPayload(struct FName& tag, struct FString& Payload); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTaggedObjectPayload (Underlying native function: SendTaggedObjectPayload 0x80addc4)
	void SendTaggedObjectPayload(struct FName& tag, class UObject*& Payload); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTaggedIntPayload (Underlying native function: SendTaggedIntPayload 0x80adcf4)
	void SendTaggedIntPayload(struct FName& tag, int& Payload); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.SendTagAsPayload (Underlying native function: SendTagAsPayload 0x80adc68)
	void SendTagAsPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.GetTaggedStringPayload (Underlying native function: GetTaggedStringPayload 0x80ad920)
	struct FString GetTaggedStringPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.GetTaggedObjectPayload (Underlying native function: GetTaggedObjectPayload 0x80ad884)
	class UObject* GetTaggedObjectPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.GetTaggedIntPayload (Underlying native function: GetTaggedIntPayload 0x80ad7e8)
	int GetTaggedIntPayload(struct FName& tag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveModularCrosstalkInterface.BindNoParamEventToTaggedDelegate (Underlying native function: BindNoParamEventToTaggedDelegate 0x80ad624)
	void BindNoParamEventToTaggedDelegate(struct FName& DelegateTag, class UObject*& Object, struct FName& CallbackEventName); // (Native | Public | HasOutParms | BlueprintCallable)
};

