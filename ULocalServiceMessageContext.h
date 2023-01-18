// Class /Script/FortniteGame.LocalServiceMessageContext
// Size: 0x58
class ULocalServiceMessageContext : public UBlueprintContextBase
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/FortniteGame.LocalServiceMessageContext.RemoveLocalServiceMessage (Underlying native function: RemoveLocalServiceMessage 0x8cf0be4)
	void RemoveLocalServiceMessage(struct FString& Identifier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.LocalServiceMessageContext.AddLocalServiceMessage (Underlying native function: AddLocalServiceMessage 0x8ceb5a8)
	void AddLocalServiceMessage(struct FString& Identifier, struct FText& Title, struct FText& Body); // (Final | Native | Public | BlueprintCallable)
};

