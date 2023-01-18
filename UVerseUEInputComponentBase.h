// Class /Script/EpicGamesEngine.VerseUEInputComponentBase
// Size: 0x458
class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{
	class UInputComponent* InputComponent; // 0xe8 (0x8)
	struct FVerseActionMappingArray ReplicatedActionMappingArray; // 0xf0 (0x120)
	struct FVerseAxisMappingArray ReplicatedAxisMappingArray; // 0x210 (0x120)
	struct FVerseInputBindingArray ReplicatedInputBindingArray; // 0x330 (0x120)
	unsigned char padding_450[0x8]; // 0x450 (0x8)

	/* Functions */

	// Function /Script/EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAxis (Underlying native function: ServerTriggerAxis 0x6a2394c)
	void ServerTriggerAxis(struct FName& AxisName, float& Value); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAction (Underlying native function: ServerTriggerAction 0x6a23860)
	void ServerTriggerAction(struct FName& ActionName, struct TEnumAsByte<EInputEvent>& InputEvent); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)
};

