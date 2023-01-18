// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_SmartObjects
// Size: 0x260
class UFortAthenaAIBotEvaluator_SmartObjects : public UFortAthenaAIBotEvaluator_Movement
{
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters; // 0x230 (0x8)
	class USmartObjectSubsystem* SmartObjectSubsystem; // 0x238 (0x8)
	struct FName SmartObjectExecutionStatusKeyName; // 0x240 (0x4)
	struct FName SmartObjectMovementStateKeyName; // 0x244 (0x4)
	struct FName SmartObjectDestinationKeyName; // 0x248 (0x4)
	struct FName SmartObjectShouldMoveKeyName; // 0x24c (0x4)
	struct FName SmartObjectRequestEvaluateKeyName; // 0x250 (0x4)
	unsigned char padding_254[0xc]; // 0x254 (0xc)
};

