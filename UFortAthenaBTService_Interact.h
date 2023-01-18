// Class /Script/FortniteAI.FortAthenaBTService_Interact
// Size: 0x140
class UFortAthenaBTService_Interact : public UBTService
{
	struct FBlackboardKeySelector InteractExecutionStatusKeySelector; // 0x70 (0x28)
	struct FBlackboardKeySelector InteractContextInfoKeySelector; // 0x98 (0x28)
	struct FBlackboardKeySelector InteractObjectKeySelector; // 0xc0 (0x28)
	struct FBlackboardKeySelector ExecutionStatusKeySelector; // 0xe8 (0x28)
	struct FBlackboardKeySelector MovementStateKeySelector; // 0x110 (0x28)
	struct TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted; // 0x138 (0x1)
	bool bRequireDistanceCheck; // 0x139 (0x1)
	bool bRequireBlockedCheck; // 0x13a (0x1)
	unsigned char padding_13b[0x5]; // 0x13b (0x5)
};

