// Class /Script/MotionWarping.RootMotionModifier
// Size: 0xe0
class URootMotionModifier : public UObject
{
	struct TWeakObjectPtr<class UAnimSequenceBase> Animation; // 0x28 (0x8)
	float StartTime; // 0x30 (0x4)
	float EndTime; // 0x34 (0x4)
	float PreviousPosition; // 0x38 (0x4)
	float CurrentPosition; // 0x3c (0x4)
	float Weight; // 0x40 (0x4)
	unsigned char unreflected_44[0xc]; // 0x44 (0xc) 
	struct FTransform StartTransform; // 0x50 (0x60)
	float ActualStartTime; // 0xb0 (0x4)
	struct FDelegate OnActivateDelegate; // 0xb4 (0xc)
	struct FDelegate OnUpdateDelegate; // 0xc0 (0xc)
	struct FDelegate OnDeactivateDelegate; // 0xcc (0xc)
	enum ERootMotionModifierState State; // 0xd8 (0x1)
	unsigned char padding_d9[0x7]; // 0xd9 (0x7)
};

