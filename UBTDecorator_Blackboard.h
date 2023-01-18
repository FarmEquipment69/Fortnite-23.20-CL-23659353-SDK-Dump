// Class /Script/AIModule.BTDecorator_Blackboard
// Size: 0xc0
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
	int IntValue; // 0x90 (0x4)
	float FloatValue; // 0x94 (0x4)
	struct FString StringValue; // 0x98 (0x10)
	struct FString CachedDescription; // 0xa8 (0x10)
	unsigned char OperationType; // 0xb8 (0x1)
	struct TEnumAsByte<EBTBlackboardRestart> NotifyObserver; // 0xb9 (0x1)
	unsigned char padding_ba[0x6]; // 0xba (0x6)
};

