// Class /Script/AIModule.PawnAction_Repeat
// Size: 0xb0
class UPawnAction_Repeat : public UPawnAction
{
	class UPawnAction* ActionToRepeat; // 0x90 (0x8)
	class UPawnAction* RecentActionCopy; // 0x98 (0x8)
	struct TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode; // 0xa0 (0x1)
	unsigned char padding_a1[0xf]; // 0xa1 (0xf)
};

