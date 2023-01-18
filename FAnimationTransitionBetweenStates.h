// ScriptStruct /Script/Engine.AnimationTransitionBetweenStates
// Size: 0x38
struct FAnimationTransitionBetweenStates : FAnimationStateBase
{
	int PreviousState; // 0x4 (0x4)
	int NextState; // 0x8 (0x4)
	float CrossfadeDuration; // 0xc (0x4)
	int StartNotify; // 0x10 (0x4)
	int EndNotify; // 0x14 (0x4)
	int InterruptNotify; // 0x18 (0x4)
	enum EAlphaBlendOption BlendMode; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	class UCurveFloat* CustomCurve; // 0x20 (0x8)
	class UBlendProfile* BlendProfile; // 0x28 (0x8)
	struct TEnumAsByte<ETransitionLogicType> LogicType; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

