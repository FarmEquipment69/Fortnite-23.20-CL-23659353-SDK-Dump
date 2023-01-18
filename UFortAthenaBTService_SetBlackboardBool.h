// Class /Script/FortniteAI.FortAthenaBTService_SetBlackboardBool
// Size: 0xa0
class UFortAthenaBTService_SetBlackboardBool : public UBTService
{
	struct FBlackboardKeySelector BlackboardKey; // 0x70 (0x28)
	bool bBlackboardValue; // 0x98 (0x1)
	enum EBTSetBlackboardBoolExitActions ExitAction; // 0x99 (0x1)
	unsigned char padding_9a[0x6]; // 0x9a (0x6)
};

