// Class /Script/FortniteGame.FortGameplayTriggerMessageComponent
// Size: 0x210
class UFortGameplayTriggerMessageComponent : public UFortGameplayMessageComponentBase
{
	unsigned char unreflected_1c0[0x18]; // 0x1c0 (0x18) 
	struct FFortGameplayTriggerEventDescriptor EventDescriptor; // 0x1d8 (0x30)
	unsigned char padding_208[0x8]; // 0x208 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayTriggerMessageComponent.SendTriggerMessage (Underlying native function: SendTriggerMessage 0x71a663c)
	void SendTriggerMessage(class AController*& TriggerInstigator); // (Final | Native | Public | BlueprintCallable)
};

