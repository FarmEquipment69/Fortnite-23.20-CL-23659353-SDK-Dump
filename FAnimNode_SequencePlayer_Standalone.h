// ScriptStruct /Script/Engine.AnimNode_SequencePlayer_Standalone
// Size: 0x90
struct FAnimNode_SequencePlayer_Standalone : FAnimNode_SequencePlayerBase
{
	struct FName GroupName; // 0x40 (0x4)
	struct TEnumAsByte<EAnimGroupRole> GroupRole; // 0x44 (0x1)
	enum EAnimSyncMethod Method; // 0x45 (0x1)
	bool bIgnoreForRelevancyTest; // 0x46 (0x1)
	unsigned char unreflected_47[0x1]; // 0x47 (0x1) 
	class UAnimSequenceBase* Sequence; // 0x48 (0x8)
	float PlayRateBasis; // 0x50 (0x4)
	float PlayRate; // 0x54 (0x4)
	struct FInputScaleBiasClampConstants PlayRateScaleBiasClampConstants; // 0x58 (0x2c)
	float StartPosition; // 0x84 (0x4)
	bool bLoopAnimation; // 0x88 (0x1)
	bool bStartFromMatchingPose; // 0x89 (0x1)
	unsigned char padding_8a[0x6]; // 0x8a (0x6)
};

