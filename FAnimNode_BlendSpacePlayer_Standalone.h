// ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
// Size: 0x90
struct FAnimNode_BlendSpacePlayer_Standalone : FAnimNode_BlendSpacePlayerBase
{
	struct FName GroupName; // 0x68 (0x4)
	struct TEnumAsByte<EAnimGroupRole> GroupRole; // 0x6c (0x1)
	enum EAnimSyncMethod Method; // 0x6d (0x1)
	bool bIgnoreForRelevancyTest; // 0x6e (0x1)
	unsigned char unreflected_6f[0x1]; // 0x6f (0x1) 
	float X; // 0x70 (0x4)
	float Y; // 0x74 (0x4)
	float PlayRate; // 0x78 (0x4)
	bool bLoop; // 0x7c (0x1)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x7d (0x1)
	unsigned char unreflected_7e[0x2]; // 0x7e (0x2) 
	float StartPosition; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	class UBlendSpace* BlendSpace; // 0x88 (0x8)
};

