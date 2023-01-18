// ScriptStruct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
// Size: 0x60
struct FAnimNode_SequenceEvaluator_Standalone : FAnimNode_SequenceEvaluatorBase
{
	struct FName GroupName; // 0x40 (0x4)
	struct TEnumAsByte<EAnimGroupRole> GroupRole; // 0x44 (0x1)
	enum EAnimSyncMethod Method; // 0x45 (0x1)
	bool bIgnoreForRelevancyTest; // 0x46 (0x1)
	unsigned char unreflected_47[0x1]; // 0x47 (0x1) 
	class UAnimSequenceBase* Sequence; // 0x48 (0x8)
	float ExplicitTime; // 0x50 (0x4)
	bool bShouldLoop; // 0x54 (0x1)
	bool bTeleportToExplicitTime; // 0x55 (0x1)
	struct TEnumAsByte<ESequenceEvalReinit> ReinitializationBehavior; // 0x56 (0x1)
	unsigned char unreflected_57[0x1]; // 0x57 (0x1) 
	float StartPosition; // 0x58 (0x4)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

