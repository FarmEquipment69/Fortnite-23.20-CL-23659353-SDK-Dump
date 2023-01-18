// Class /Script/FortniteAI.FortAthenaBTTask_Interact
// Size: 0xe0
class UFortAthenaBTTask_Interact : public UBTTaskNode
{
	bool bShouldFocusOnInteraction; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct FBlackboardKeySelector InteractExecutionStatusKeySelector; // 0x78 (0x28)
	struct FBlackboardKeySelector InteractContextInfoKeySelector; // 0xa0 (0x28)
	struct FName FocalPointName; // 0xc8 (0x4)
	struct FName InteractActorName; // 0xcc (0x4)
	struct FName JumpExecutionStatusName; // 0xd0 (0x4)
	struct FName WeaponTriggerMeleeName; // 0xd4 (0x4)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

