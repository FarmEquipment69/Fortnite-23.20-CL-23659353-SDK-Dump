// Class /Script/AIModule.PawnAction_Sequence
// Size: 0xb8
class UPawnAction_Sequence : public UPawnAction
{
	struct TArray<class UPawnAction*> ActionSequence; // 0x90 (0x10)
	struct TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class UPawnAction* RecentActionCopy; // 0xa8 (0x8)
	unsigned char padding_b0[0x8]; // 0xb0 (0x8)
};

