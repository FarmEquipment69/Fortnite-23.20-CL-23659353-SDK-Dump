// Class /Script/FortniteAI.FortAthenaBTService_CopyBlackboardVariable
// Size: 0xc8
class UFortAthenaBTService_CopyBlackboardVariable : public UBTService
{
	struct FBlackboardKeySelector SourceBlackboardKey; // 0x70 (0x28)
	struct FBlackboardKeySelector DestinationBlackboardKey; // 0x98 (0x28)
	unsigned char bCopyOnBecomeRelevant; // 0xc0 (0x1)
	unsigned char bCopyOnCeaseRelevant; // 0xc0 (0x1)
	unsigned char bCopyWhenSourceValueChange; // 0xc0 (0x1)
	unsigned char padding_c1[0x7]; // 0xc1 (0x7)
};

